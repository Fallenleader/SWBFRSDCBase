# SWBFRSDCBase

Decompilation of **Star Wars Battlefront: Renegade Squadron** (PSP, ULUS10292, v1.02) into portable C.

Every function of the game executable is C source that compiles natively for the target CPU. There is no emulated processor,
no guest-memory array, no instruction dispatcher and no VFPU interpreter. The source is generated from the original
executable by the decompiler in `tools/dc`, and it is not written for human readability yet.

**No game data is included.** You need your own copy. The game's data segment is extracted from your decrypted `EBOOT.BIN`
at build time, and the assets stay on your disc image.

## Status

What is **verified** (details and evidence in `docs/DECOMP.md`):

* **All code converted:** all 14,760 functions are generated as C (32 files, `src/game/game_*.c`, ~28.6 MB). Every function
  has a C signature, its own locals, a native stack frame and native calls. Jump tables become `switch`, VFPU instructions
  become float math, and relocated addresses become symbols.
* **Compiles:** the whole program compiles with GCC for a 32-bit target (x86 SSE2 tested) with zero errors.
* **Runs:** on the 32-bit Linux validation harness (`platform/linux_test`), the decompiled game boots, runs the complete
  front-end (title, profile creation, difficulty, main menu, Single Player, Instant Action, map/mode/era selection,
  playlist, launch) and plays Instant Action Conquest matches with bots, HUD, minimap and ticket counting (Endor, Hoth).
* **Undefined symbols when linked alone:** exactly the platform interface, i.e. 224 PSP SDK functions plus 5 support
  symbols. Nothing else is needed.

What is **not done / not known** (see `docs/DECOMP.md`, *Limitations*):

* **Names:** names are address-based (`func_08A97AE8`, `D_08C37CF4`). The original executable has no symbols. SDK import
  names are exact (verified by NID hash).
* **Signatures:** parameter and return sets are sound but conservative. Some functions take extra unused parameters, and
  functions that may return a float and an integer return `rv_t`.
* **Coverage:** code paths never executed in the tests are verified only by the static analyses.
* **Targets:** 32-bit only for now (the data files hold 32-bit pointers). 64-bit targets need the pointer fields typed.
* **No modifications:** none of the earlier project's gameplay changes (more bots, frame-rate options, 1000 tickets) are
  applied. This is the unmodified game, the base for those changes.

## Layout

| Path | Contents |
|---|---|
| `src/game/` | the decompiled game (generated): `game_*.c`, `game.h` (all prototypes), `symbols.h` (data symbols), `psp_sdk.h` (the PSP SDK functions the game calls), `rs_base.h` (types, memory access, value helpers, support symbols) |
| `tools/dc/` | the decompiler: program model, CFG, ABI/stack/signature analyses, code generator, data-segment generator |
| `platform/linux_test/` | **test harness only**: a Linux 32-bit implementation of the SDK interface, used to validate the decompilation (not a port) |
| `tools/asura/`, `tools/maya/` | asset-format tools from the mod kit (Asura containers, textures, models, skeletons, sounds; Maya import/export) |
| `docs/` | `DECOMP.md`: method, evidence and limitations; `PLATFORM.md`: what a target port has to provide |

## Building

Requirements: Python 3, GCC (32-bit: `gcc-multilib`), your decrypted `EBOOT.BIN` (ULUS10292 v1.02) and the extracted disc.

    make data EBOOT=/path/to/EBOOT.BIN          # build/data.c from your executable
    make linux_test EBOOT=/path/to/EBOOT.BIN    # validation build -> build/rs_linux_test (needs 32-bit Mesa GLES2/EGL)
    cd "<extracted disc folder containing PSP_GAME>" && LIBGL_ALWAYS_SOFTWARE=1 /path/to/build/rs_linux_test

`make regen EBOOT=...` regenerates `src/game` with the decompiler. The output is deterministic, so regenerating from the
same executable gives byte-identical files.

## Porting to a target

A port compiles `src/game/*.c` and `build/data.c` for the target and provides `platform/<target>/`, which must supply:

* the 224 functions in `src/game/psp_sdk.h`: files, threads/semaphores/event flags, memory, input, audio (SAS mixer,
  ATRAC3plus), display and the graphics command-list interface, utility dialogs and save data;
* the support symbols in `src/game/rs_base.h`: `fpu_csr`, `vfpu_v`, `vfpu_cc`, `psp_k0` (thread-local) and `rs_break`;
* a `main()` that calls the module entry `func_08A85AB0`.

See `docs/PLATFORM.md`. The game builds PSP GPU (GE) command lists itself, for example the model display lists built by
`func_088F59E0`, as well as through Sony's libgu, which is linked into the executable and decompiled with it. A port's
graphics layer therefore consumes GE command lists, the way Super Mario 64's PC port consumes the N64 display lists its
decompiled code builds.
