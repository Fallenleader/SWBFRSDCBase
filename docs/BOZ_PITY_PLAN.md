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
