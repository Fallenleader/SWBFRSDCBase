# Side-by-side harness: the original game against Aurek

Runs the original game (the decompiled build) and Aurek on the same level, from the same start, with the same input, and compares
what happens. This is how each item of [docs/PARITY_TASKS.md](../../docs/PARITY_TASKS.md) is checked.

## Pieces

- **`build/linux64/rs_linux64`**: the original game on Linux (`make linux64 EBOOT=<BOOT.BIN>`; needs the FFmpeg development
  headers). It runs from a folder holding the full `PSP_GAME` tree.
- **Drive mode** (`RS_DRIVE=<dir>`, `platform/common/hle.c`):
  - Every `RS_DRIVE_EVERY` vblanks (default 10), the game writes `frame.ppm`, `frame.txt` and `state.txt` to `<dir>`.
  - It then waits until `<dir>/pad.txt` holds `<frame> <hex buttons> [lx ly rx ry]` for that frame. `-1` ends the run.
  - Loading times therefore cannot shift the inputs: a run is reproducible from the same command.
- **`state.txt`** (`rs_drive_report`, `platform/common/game_patches.c`) has one line per soldier, vehicle and turret:
  `obj <id> <class> <x> <y> <z> <health> <player> m <3x3>`.
  - Positions are in game axes (y down).
  - The matrix's third column is the forward direction.
  - `player` = 1 marks the soldier the pad drives.
  - The `health` field is not read correctly yet.
- **`screens.py`** recognises the menus by a small signature: a grey thumbnail, the heading word, and whether a Launch button is
  shown. Only these signatures are stored (`screens.json`), not the game's images.
- **`drive.py`** answers each menu screen with buttons: a new profile, Single Player, Instant Action, the planet row given, the
  default mode and era, Launch, Auto team, the default spawn point.
  - It then runs a test program (`idle`, `walk_forward`, `cross_mash`) and logs `state.log`.
  - Hoth takes about 1,400 frames from boot to the match.
- **`compare_walk.py`** runs `drive.py` and then Aurek.
  - Aurek starts with `AK_TEST_SPAWN` (the original's start and facing, game axes), holds `AK_TEST_MOVE`, steps at a fixed 1/60 s
    and logs `AK_TEST_TRACE`.
  - It writes `report.txt`: both positions each second, their gap, ground speed and height.

## Use

```
make linux64 EBOOT=/path/to/BOOT.BIN
cmake --build build/engine
python3 tools/harness/compare_walk.py --planet 3 --level "CLASSIC HOTH" --frames 600 --out /tmp/cmp
python3 tools/harness/compare_walk.py ... --reuse      # Aurek again against the original run already in --out
```

Planet rows in Instant Action: 0 Boz Pity, 1 Endor, 2 Geonosis, 3 Hoth, 4 Echo Base, 5 Kashyyyk, 6 Korriban, 7 Mustafar, and
further down the list.

## Per-frame runs and stick tests

- `drive.py --fine N` steps every frame for the first N frames of the match (the driver's pad file takes an optional 7th field, the
  next step's length), so state.log has every frame. compare_walk.py always uses it.
- `drive.py --program hold --hold LX,LY` holds the left stick (0..255, 128 centred): e.g. `--hold 128,48` is 0.63 up, a walk.
- Programs: `walk_forward`, `walk_stop` (run 1 s, let go), `half_stick`, `strafe_switch` (run 1 s, then stick right).
- `compare_walk.py --program walk_forward | walk_stop | walk_half [--lag N]` (Aurek's AK_TEST_MOVE_UNTIL lets go of the stick).
