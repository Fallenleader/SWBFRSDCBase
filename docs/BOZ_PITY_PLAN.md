# Boz Pity first: the narrowed plan (owner's direction, 2026-11-22)

Scope: one path through the game, made to play nearly identically to the original before anything else.

    intro movies -> main menu (all of it but Multiplayer) -> character customization and every loadout -> Single Player >
    Instant Action > Boz Pity, Conquest -> the whole match -> its end, back to the menus

## Rules for this plan

1. **The original is the source.** Every rule, number, timing and decision is read from the decompiled game (`src/game`, the
   function's address cited in the code) and Ghidra, and checked against the original running in the harness
   (`tools/harness`, `build/linux64/rs_linux64`: the decompiled build *is* the original's behaviour).  No `[assumed]` behaviour
   enters code in this scope; an open question stays open, listed under "Uncertain" in the reports.
2. **No builds for the owner and no device tests** until the path above plays nearly identically.  Desktop runs and harness
   comparisons are the work itself and go on throughout.
3. **Hard facts spread.** A behaviour proven identical to the original on Boz Pity (e.g. a vehicle class's whole behaviour) may be
   applied everywhere it holds (all vehicles of that class); it is recorded as a hard fact.
4. **Reports:** every 5 major milestones, a progress report (PDF, with percentages, as before): the milestones, the hard facts found,
   and the uncertainties, grouped by subject (e.g. "AT-ST - Fact: it can walk. Uncertain: its boost mode - does it use stamina?").
5. Work continues between messages on a schedule (one-shot wake-ups chained by each session); the owner keeps tabs.
6. Standing rules still apply: docs rows, `check_independence.sh`, commit and push every change.

## Milestones

| # | Milestone | Done when |
|---|---|---|
| M1 | Intro movies | the original's boot sequence (which movies, order, skip rules, what follows) traced; played from the converted copies on desktop and Vita (and the GameCube's THP), with sound, skippable as the original |
| M2 | Main menu | every page reachable from the main menu except Multiplayer works as the original: navigation, sounds, texts, Options (and their effects), Learn To Play, profile create/load/save |
| M3 | Character customization | faction, class, head, colours, every option the original offers, saved to the profile, shown in game |
| M4 | Loadouts | every class's weapons and items per faction, the selection rules and limits, as the original; applied at spawn |
| M5 | Instant Action to Boz Pity | planet / mode / era selection, team choice, the spawn map with spawn point choice, the score board after death - the flow as the original |
| M6 | Infantry movement and physics | walking, running, jumping, rolling, falling, slopes, collisions with the level and objects - matched in the harness |
| M7 | Weapons and damage | fire rates (player and AI), spread, projectiles, damage, reload, ammo, grenades (model, arc, fuse, blast), pickups |
| M8 | Lock-on and targeting | the lock-on rules (range, line of sight, what can be locked, how AI uses it) |
| M9 | Conquest rules | command posts (capture, neutralise, spawn), tickets, bleed, the win and the end of the match |
| M10 | AI soldiers | spawning, squads, goals, moving, shooting, using posts and vehicles, as the original on Boz Pity |
| M11 | Boz Pity vehicles | every vehicle on the map: placement, boarding, controls, movement, weapons, damage, leaving, respawn |
| M12 | Sound | stutter-free mixing, every effect where and when the original plays it, music and voice lines |
| M13 | HUD and messages | everything the original shows in the match (radar, ammo, health, posts, messages, hints) |
| M14 | Match end | the end screens, awards and stats, saving to the profile, back to the menus |
| M15 | Side-by-side acceptance | a full Boz Pity match compared against the original in the harness: behaviour nearly identical |

Reports fall after M5, M10 and M15.

## Progress

(Each session adds a dated line here: what was traced, what was proven, what is open.)
- 2026-11-22 (start, M1): the boot movies traced. `func_089714A4`: when the byte at 0x08B1B8F8 is non-zero (1 in BOOT.BIN's data:
  the first time only - `func_08971558` clears it), it plays "opening_logos" and then "rebellion" through the movie player
  `func_08A69188(name, 0, 0, f)` (f: the float at 0x08AEE2C0), then goes on to `func_08975C88`.  Movie paths: "fmv\%s.pmf"
  (BOOT.BIN 0x2E2B44) and "fmv\%s\%s.pmf" (0x2E2B34, a language folder: to trace).  Aurek played only OPENING_LOGOS (GameCube) and
  nothing elsewhere.  Next: 08A69188's skip rule, sound volume and what it shows between/after; who calls 089714A4 / 08971558;
  08975C88 (the menu it leads to); then movie playback on desktop and Vita.
- 2026-11-23 (M1, the boot sequence against the original; tools/harness/boot_probe.py runs it from boot with a timed pad):
  - The harness original now plays the movies: build/linux64 rebuilt with libavcodec (its rs_avc/mpeg objects predated the
    headers), the MP4s from the conversion tool's Vita target linked as <RS_DATA_DIR>/mods/movies/<NAME>.mp4 (/tmp/rsdata).
  - Hard facts: OPENING_LOGOS (480x272, 105 pictures, 3.5 s, no sound), then REBELLION (180 pictures, 6.0 s, AAC sound).  CROSS
    skips the movie playing (only that one: REBELLION still plays); START and CIRCLE do not.  Then the page MP_MSplashScreen: the
    legal text, fading (about 70 frames) into "ESRB Notice ..." and a "Press START button" box; with no input, about 610 frames later
    the Profile prompt ("Do you want to load an existing profile?" Yes / No, on the main menu background).  CROSS moves the splash on
    (legal -> ESRB -> profile prompt).
  - Movie path rule (func_08A69188): "fmv\<lang>\<name>.pmf" first (lang: en fr ge it sp ru, func_088342CC, index 0x08B25998),
    else "fmv\<name>.pmf" with the language passed to the player as its audio / subtitle choice for languages 1-4; the screen is
    cleared black for 3 frames before; the volume is 1.0 x (the setting at 0x08C2933C+148 x 0.7).  The US disc has no language
    folders.
  - Uncertain: the splash phases' exact lengths and the START rule there (to read from the page's own data, not the run's timing:
    movie playback runs on real time, so frame numbers drift between runs); what Aurek's MP_MSplashScreen shows at once (both
    phases together now).
- 2026-11-23 (M1, movies done in Aurek): `video/ak_movie.c` plays OPENING_LOGOS then REBELLION everywhere but the GameCube (which keeps
  its THP player; START no longer skips there).  Checked on desktop: both formats, every picture, sound = FFmpeg's x 0.697.
  Uncertain: the Vita plays the THP conversion through the CPU decoder until its own MP4 path (sceAvPlayer) is written; the
  subtitles (SUBTITLE\<NAME>.ASR: the US disc has them for some movies, e.g. ENDOR, BASICS; none for the two boot movies)
  are not drawn yet (M-later: the in-game movies).  Next: MP_MSplashScreen.
- 2026-11-23 (M1, the splash screen done): MP_MSplashScreen's phases are its widgets' UIAN animations (Fade_Out on the legal text:
  alpha 1 to 0 over the first second of 2; Fade_In on the ESRB text and the Press START box: 0 until 1.2 s, 1 at 2 s), run from
  the page's opening; the page is active 1 s after opening (08885414's constant 1.0); W_BU_SelectProfile takes no keys until
  active 1 s and presses itself at active 10 s (its own data: flags 3, 1.0, 10.0; 0888D170).  START = key 512, CROSS = 16 both
  run FE_OpenProfileMenu; CIRCLE nothing.  All checked against the harness original frame by frame (gdb on the decompiled build
  showed the self-press: key 16 from the button's own update).
  - Hard facts: the timings above; children take the parent's alpha; text flag 0x20 = bottom of the box.
  - Uncertain: what the page's open length takes from its widgets (08885414's virtual call: 0 for the splash); whether every
    page ignores keys while opening (only the splash's button is proven); the button's runtime flag +152 (the self-press needs
    it; set on the splash); vertical placement for text flags without 0x20 / 0x40 (Aurek centres them); whether a hidden
    widget's animation clock runs (Aurek: all from the page's opening); UIAN modes 14, 16, 17 (unused by the menus).
  Next: the Vita's own MP4 movie path (sceAvPlayer), then M1 is complete.
- 2026-11-23 (M1 complete): the Vita's MP4 path (sceAvPlayer, platform/vita/movie_vita.c) built and linked; desktop rechecked.
  - Uncertain: the Vita path has not run on hardware (NV12 layout, the player's start-up); whether the Vita keeps up with the THP
    CPU decoder when only THPs are present.
  Next: M2, the main menu fully functional (every page reachable from it and its scripts, against the harness original).
- 2026-11-23 (M2 started): the profile prompt's flows match the original side by side (tools/harness/fe_compare.py): Yes -> the
  save dialogue (cancel -> Load Canceled / Back; a saved profile -> Load Successful + autosave notes -> Continue -> main menu), No
  -> New Profile (name box + keyboard) -> Select Difficulty -> Save Profile -> the save dialogue -> Profile Saved -> main menu.
  The main menu's Single Player, Options and Learn To Play pages match.
  - Hard facts: BFF.FE.ProfileLoadAndSaveResult values (the game's own text); ProfileAutosaveOn starts on; pages run OnOpen;
    the name box is a focusable text box opening the keyboard; the game's save slots are "%04d" (5 seen in the harness).
  - Uncertain: the PSP dialogue's own look and rules (Aurek's stand-in: 5 slots, empty ones listed); whether a save clears the
    profile's changed flag (+6); OnClose's exact moment; a small line-wrap difference in long texts (font metrics).
  Next: the Options sub-pages (Controls, Difficulty, Audio, Videos, Medals, Profile Management), Learn To Play's movies
  (with SUBTITLE\*.ASR), the Single Player pages up to the Instant Action map list.
- 2026-11-23 (M2, Options): every Options entry's first page matches the original; sliders edit as the original (CROSS in / out,
  arrows while editing, CIRCLE leaves editing only); Bonus Content appears (US language number 6); medals page background fixed.
  - Hard facts: the slider rules above; Asura.CurrentLanguage US = 6, Italian = 3 (the data's own conditions).
  - Uncertain: other languages' numbers; what UP / DOWN do while a slider is edited (nothing seen); the harness original
    sometimes loses all its texts on a page (a harness fault - rerun).
  Next: the Options sub-pages' own sub-pages (control schemes and sensitivities, AI difficulty, profile management actions,
  name edit), the Cutscenes list and Credits / Bonus movies, Learn To Play movies with subtitles, Single Player entry pages.
- 2026-11-23 (M2, Controls): the control scheme toggles as the original (profile +0x58...), the Controls pages' button pictures
  match (mark table and sizes), the new profile Aurek saves is byte-identical to the original's; menu movies play (FE_PlayMovie).
  - Hard facts: the movie table (0x08B1C08C); scheme storage; button-mark sizes (sheet pixels).
  - Uncertain: button marks \ue80a/b/d, \ue812, \ue814-\ue816, \ue818+ (order inferred, not seen); the marks sit ~3 px lower
    than the original's in 32-tall boxes; Alternate scheme's in-game controls (gameplay milestone).
  Next: Difficulty (MP_AIDifficulty), Profile Management pages, the Cutscenes list (FE_ListAvaliableCutscenes,
  BFF.CutscenesUnlocked), the Single Player entry pages.
- 2026-11-23 M2, movie subtitles: SUBTITLE\*.ASR + CUTSCENE_AM texts drawn over FE_PlayMovie's movies when BFF.Subtitles is on,
  timing/fade/place/size from 0884999C / 08849AA8 / 08A6994C; checked on BASICS (first line at the bottom, centred).
  Next: Difficulty (MP_AIDifficulty), Profile Management pages, the Cutscenes list, the Single Player entry pages.
- 2026-11-23 M2, Difficulty: MP_AIDifficulty's focus follows the profile, Normal / Elite are stored in the profile (+0x34) and set
  the game's difficulty; checked in Aurek (Elite chosen -> back to Options, the change logged). Next: Profile Management pages.
- 2026-11-23 M2, Profile Management delete + Cutscenes list: delete asks first and removes only the profile's own save
  (mode 7); the cutscenes list fills from the movie table by the profile's progress. Next: autosave on leaving Options,
  then the Single Player entry pages up to the Instant Action map list.
- 2026-11-23 M2, autosave on leaving Options: the Auto Saving page saves, presses itself on and returns to the main menu with
  the focus on Options (checked in Aurek's log; the original's behaviour seen earlier). Next: the Single Player entry pages.
- 2026-11-23 M2 COMPLETE (intro movies + main menu): the Single Player entry pages up to the Instant Action map list match the
  original side by side (new profile -> difficulty -> save page -> main menu -> Single Player -> Instant Action). Campaign /
  Conquest "New" follow the original's checks. Next: M3, character customisation and all loadouts.
- 2026-11-23 M3 started: Customization menu matches (faction logos fixed); the load-out page's lists, costs and credits match the
  original side by side. Next: the carousel's 3D items and the soldier preview (FE_Customisation_ListCarouselAnims / the model
  widgets), then personalisation, then the loadouts in game.
- 2026-11-23 M3: the menus' own models (BFF_MAINMENU.GUI, 234 meshes) load with the front end, as the original's (no level
  opened for the menus). Next: check the carousel items against the original, the soldier preview without a level, then
  personalisation and the loadouts in game.
- 2026-11-23 M3: menu item models found by path or bare name (the Empire rifle and the grenades had none). Next: placement
  against the original, the soldier preview without a level, the saved loadout, the loadouts in game.
- 2026-11-23 M3: the loadout is stored in the profile (set 0 at +0x1B8, 08977A34) and read back by the menu and the spawn.
  Next: what sets 1..19 are, a byte check against the original's save, the loadouts in game by class and faction.
- 2026-11-23 M3: traced - only loadout set 0 is ever used (all writers and readers); credits = total - the 8 chosen costs.
  Next: how the match reads set 0 (08A09928's side and the spawn), the byte check against the original's save.
- 2026-11-23 M3: 08A09928 found to be a method of an object made by 08971770 (profile -> game settings); next its role and the
  spawn's use of set 0.
- 2026-11-23 M3: the saved loadout now reaches the soldier at every match start (it only did after using the menu in a match).
  Next: the original's own path from set 0 to the spawn, the byte check against the original's save.
- 2026-11-23 M3 COMPLETE (customisation and loadouts), with four items on the Uncertain list (PARITY_TASKS). Next: M4, Boz Pity
  Conquest - the map, its posts, the bots and the vehicles against the original.
- 2026-11-23 note: the milestone table above stands - M4 is Loadouts (every class's weapons and items per faction, the selection
  rules and limits, applied at spawn), M5 Instant Action to Boz Pity (the flow), M9 the Conquest rules, M10 the AI, M11 the
  vehicles, M13 the HUD. M3's loadout menu work (profile set 0, credits) carries into M4.
- 2026-11-23 M4: the selection rules traced (no credit check on taking; sell gated; both mark the profile changed). Next: each
  faction's item versions against the blueprints, the spawn mapping on Boz Pity.
- 2026-11-23 M4: the allowance is the original's 100 (the 200 was the recomp's mod); faction versions traced and matched;
  comparisons now run the original without the recomp's loadout mods. Next: the spawn mapping on Boz Pity's factions.
- 2026-11-23 M4 COMPLETE (loadouts): selection rules, the original's 100 allowance, faction versions and the spawn kit path
  traced; three kit details on the Uncertain list. Next: M5, Instant Action to Boz Pity (the flow), then the PDF report.
- 2026-11-23 M5 started: Planet / Mode / Era / play list / Launch / Team Selection match side by side; the team logos fixed.
  Open: the bot count (original 8 + 8 at team selection, Aurek 8 + 7), the list row colour. Next: joining, the spawn map,
  spawning, dying, the score board.
- 2026-11-23 M5: Team Selection -> spawn map now runs in Aurek's tests too (AK_FE_PAD reaches the match pages). Spawn map
  differences found: the first post chosen (original: the player's own), the rows' dim style. Next: those, then spawning,
  dying, the score board and the bot count.
- 2026-11-23 M5: FE_TeamSelection traced in part (08A2F7F4): a side takes the player only while it has fewer than 8. Next:
  Auto's side rule, then the spawn map's first post, the rows' style, spawning, dying, the score board.
- 2026-11-23 M5: Auto's side rule left UNCERTAIN (the request's receiver not found within the time set); Aurek keeps the
  starting side. Next: why Aurek's spawn map opens on a red post (the own-post rule in frontend.c open_hash looks right - check
  match.team against the posts' owners and the map's colours), the rows' dim style, spawning, dying, the score board.
- 2026-11-23 M5: the spawn map's rows dimmed as the original's (their text box colour, 0.514). Next: spawning, dying, the score
  board, the bot count.
- 2026-11-23 M5 COMPLETE (Instant Action to Boz Pity flow), three items on the Uncertain list. Report 1 written (after M5).
  Next: M6, infantry movement and physics against the harness.
- 2026-11-23 M6 started: compare_walk.py now runs Aurek without the front end (AK_FRONTEND=0); Boz Pity walk compared - Aurek's
  first frames shove 0.58 m sideways and its heading settles 12 degrees off the original's; the original meets obstacles Aurek
  never reaches. Next: those two causes.
- 2026-11-23 M6: the walk's spawn shove is the placed AT-AT's box (8.7 m away, its box reaches the spawn); debug logs name the
  vehicle and print every vehicle's position (AK_DEBUG_BODY / AK_DEBUG_VEH). Next: the original's AT-AT collision.
- 2026-11-23 M6: tests can warm the world up first (AK_TEST_WARMUP; the original's match runs behind team selection): Boz Pity's
  walk now matches to 0.12 m for 2 s. Found: Aurek's player falls through the world after meeting the AT-AT (7 s). Next: fix.
- 2026-11-23 M6: the fall-through's cause found - a body sunk over 2 cm into a face gets "inside" from the sweep and Aurek
  ignores it (PARITY 1.3b, 088B6510 not read yet). Next: port the original's "inside" handling.
- 2026-11-23 M6: the Boz Pity fall-through fixed (pushes slide through the level); walk within 0.12 m for 2 s, within 4.5 m
  overall (the AT-AT slowdown differs), Hoth unchanged. Next: the AT-AT slowdown, then the other movement programs.
- 2026-11-23 M6: the crest hop fixed (the ground lay no longer stays in the velocity, read from the original with gdb):
  run_sprint within 0.13 m for 105 frames (was 1.17 m by 1 s), Hoth walk 0.28 m. Remaining gap: the AT-AT's collision box.
- 2026-11-23 M6 done: every movement program on Boz Pity matches the original before the AT-AT region (4 s): walk 0.11 m,
  half-stick walk 0.12 m, walk-and-stop 0.11 m, sprint 0.13 m (105 frames), roll 0.28 m, run jump 0.24 m, jump back
  0.32 m, standing jump forward 0.26 m; Hoth walk 0.28 m over 10 s. Uncertain, carried to M11: the AT-AT's collision
  shape (its model box stops Aurek's soldier 11.2 m along the walker, the original's at 6.8 m). Uncertain, minor: the
  original's jump leaves one frame after the press and peaks 6 cm higher. Next: M7, weapons and damage.
- 2026-11-23 M7 started: the default rifle fires every 18 frames as in the original; the weapon's 0.1 s raise from a lapsed
  stance (3 s after the trigger) found and ported - first shot, taps and re-presses now land on the original's frames.
- 2026-11-23 M7: reload verified against the original (135 frames from the emptying shot to the next). The player's damage per
  hit still needs a set-up where the original's player hits a bot (lock-on from the spawn hit nothing).
- 2026-11-23 M7: the player's rifle damage per hit measured in the original (15) - Aurek's the same. Next: headshot, grenades.
- 2026-11-23 M7: grenade compared - fuse matches (3.0 s); the throw's pitch differs on sloped ground (lands 4.1 m short).
  Next: trace the aim frame the throw reads (08A1A77C).
- 2026-11-23 M7: the throw's frame traced - it is the soldier's aim frame (4.0 degrees up at the Boz spawn). Its pitch rule is
  still open (Uncertain); the throw keeps 8.2 degrees down until it is found.
- 2026-11-23 M7: the aim frame is soldier +276, refreshed from the model by 08878E84 (not read yet). Next: 08878E84, then pickups.
- 2026-11-23 M7 done: fire rate, raise, reload, damage, headshot and grenade fuse match the original; pickups were traced before
  (089A70FC / 089F96C4). Carried as Uncertain: the soldier's aim pitch at rest (the throw's pitch; Boz lands 4.1 m short), the
  0.8 factor's switch (+56), the stance's other sources. Next: M8, lock-on.
- 2026-11-23 M8 started: the original's lock timer and head switch traced (0899B62C) - Aurek's match. Next: the target choice.
- 2026-11-23 M8: the lock target choice traced (089DD9CC: distance + angle score, line of sight) and ported.
- 2026-11-23 M8 done: lock timer, head switch and target choice match the original's code. Uncertain: the eye / target points,
  the soldier's +228 list (-200), the weapon bits in 089DCAAC, when the choice pass runs. Next: M9, Conquest rules.
- 2026-11-23 M9 started: Boz Pity's starting tickets (100 / 125) and the bleed (1 per 4 s) match the original; capture timing next.
- 2026-11-23 M9: capture differs - the original's player alone on an enemy post for 23 s took nothing, Aurek's took it. Tracing.
- 2026-11-23 M9 done: tickets, bleed and the capture structure (drain then flip, 30 s contest, per-post amounts) match the
  original; Uncertain: the player's capture rate (0.5 / s measured here, Aurek 1.0). Next: M10, AI soldiers.
- 2026-11-23 M10 started: the original's Imperial bots carry a 25-damage rifle (BobaFett_Blaster_Rifle) where Aurek's carry
  EMP_Blaster_Rifle (15) - the likely cause of the Rebel death gap. Tracing where the original picks it.
- 2026-11-23 M10: the original's bots also carry the heroes' weapons (Ackbar's pistol, Boba Fett's rifle) with no hero in play;
  the bot weapon source is wider than Aurek's faction table. Tracing the unit maker 08985D74.
- 2026-11-23 M10: bot weapons now resolve to their faction child as in the original (Imperial bots: Boba Fett's rifle);
  Rebel losses 6 a minute (original 9-12, before 4). Next: that rifle's multishot spread.
- 2026-11-23 M10 closed for now: bot weapons (faction children) and the multishot fan traced and ported; the AI hit rate with
  Boba Fett's rifle and the Rebel death rate (4-6 vs 9-12 a minute) stay open for a longer comparison. Next: Report 2, then M11.
- 2026-11-23 Report 2 written and sent (after M10; M10 partly done, 55%; overall estimate 63%).
- 2026-11-23 M10: shot counts compared - Aurek's Imperial bots fire the pistol far too much and the rifle too little. Tracing.
- 2026-11-23 M10: the pistol spam is two rifle-less Imperial bots (rocket loadout) firing nonstop at 30-37 m; choice and
  burst rules read the same as the original's. Next: the loadout draw and the pistol's heat in a bot's hands.
- 2026-11-23 M10: bot re-arm bug fixed (pistols fired every frame); the pistol rate now matches (10-22 vs 13 a minute). The
  rifles' rates still differ (Rebel rifle 10x too often, Boba's 3-4x too rarely). Next: the fire node's gating.
- 2026-11-23 M10: the AI burst keys and their own defaults ported; the open question is whether the original inherits Base's
  zero heat keys (gdb 08A24740's return for the Rebel rifle next).
- 2026-11-23 M10: the key lookup inherits (as Aurek) - the burst values match; the rifle rate gap is in when bots fire.
- 2026-11-23 M10: the original's rifle bots fire in 2-3 shot runs with 1-4 s gaps; Aurek's stream - finding what stops them next.
- 2026-11-23 M10: the want-to-fire flag needs the target's ray test (ported as sight); the Rebel rifle rate is still ~10x.
- 2026-11-23 M10 closed (60%): bot weapons, multishot fan, the pistol re-arm bug, burst keys and inheritance match the original;
  Uncertain: the AI firing rhythm (rifle runs of 2-3 shots in the original) and so the Rebel death rate. Next: M11, vehicles.
- 2026-11-23 M11 started: the original's AT-AT body box is the same as Aurek's, but its soldiers walk 6.2 m inside it before
  stopping - something else (legs?) stops them. Tracing which body.
- 2026-11-23 M11: the AT-AT's body box does not stop soldiers in the original; they stop about 6 m from its middle (a leg?).
- 2026-11-23 M11: the AT-AT's leg boxes read; a leg is the likely stop for soldiers inside the walker (not yet shown). Next: the
  walkers' walk and slowdown, then the T4B; the leg collision stays Uncertain until the walker's pose reaches the push pass.
- 2026-11-23 M11: the AT-AT's walk matches the original (route and 2.0 m/s within 0.1 m); the AT-ST starts later in Aurek.
- 2026-11-23 M11: Aurek's AT-ST waits 25 s for a bot that walks 84 m to it; the original's moves within 5-10 s. Next: who
  drives the original's AT-ST at the start.
