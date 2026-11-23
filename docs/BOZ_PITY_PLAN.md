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
