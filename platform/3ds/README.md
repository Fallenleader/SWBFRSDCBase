# Nintendo 3DS build (3DSExperimental)

This is a `.3dsx` homebrew application for the Old 3DS and the New 3DS. It is one executable for both models.

This branch carries these patches on top of the decompiled game:
- any colour (the colour picker);
- any weapon in either slot;
- any head on any body, except the CIS;
- the mod groundwork: custom maps, `mods/files`, `mods/textures`, `Weapons_Mod.txt`.

Everything else uses the original game's settings.

## Install

1. Copy `3ds/SWBFRS/` to the root of the SD card. The application ends up at `sdmc:/3ds/SWBFRS/swbfrs.3dsx`, next to `settings.txt`.
2. Put the game files in that same folder. Use either:
   - your UMD image as `sdmc:/3ds/SWBFRS/game.iso` (it is read in place, no extraction), or
   - the extracted UMD, so that `sdmc:/3ds/SWBFRS/GAME/PSP_GAME/` exists.
3. For sound, the 3DS needs `sdmc:/3ds/dspfirm.cdc`. Run DSP1 once to dump it.
4. Start the game from the Homebrew Launcher.

To exit, press L + R + START + SELECT, or use the HOME menu.

## Controls

| 3DS | PSP |
|---|---|
| B | Cross |
| A | Circle |
| Y | Square |
| X | Triangle |
| L / ZL | L |
| R / ZR | R |
| Circle Pad | analog stick |
| D-pad | D-pad |
| START, SELECT | START, SELECT |

On the New 3DS, the C-stick turns and looks (twin-stick controls). On the Old 3DS you play with the PSP's own controls.

## Screens

- **Top screen:** the game, 480x272 scaled to 400x240.
- **Bottom screen:** black, with the profiler's figures. These are frames per second, game CPU and render load, GPU time, draws, vertices, texture uploads, and memory. `RS_HUD=0` blanks it.

## Settings

See `settings.txt`. The frame rate is 30 FPS with 3D off; 20 FPS is the target once stereoscopic 3D is in.

## State of this build

This is the first build. It compiles and links, but it has not been run here: there is no 3DS or emulator in the build machine.

**What it does**
- The game runs on the 3DS's application core. Each thread runs game code only while it holds the big lock, as on the other builds.
- Vertices are converted on the CPU, and one GPU vertex program does skinning, transform and the PSP's lighting.
- Textures are stored in 16-bit formats.
- Render surfaces are 512x512 and share one depth buffer.

**Not in yet**
- Stereoscopic 3D.
- PSP fog.
- Movies (every movie is skipped).
- Online play.
- The bloom's bright pass (a palette lookup of a render target).
- Face culling is off by default (`RS_CULL`).
- The Old 3DS's second core is not used.

## Building

You need devkitPro (`3ds-dev`) and the data image (`make data EBOOT=...`). Then run:

```
make -f platform/3ds/Makefile
```

The output is `build/3ds/SWBFRS/swbfrs.3dsx`.

On Linux without devkitPro's package server, `platform/3ds/build_toolchain.sh <dir>` builds a compatible toolchain from source. That toolchain is Ubuntu's arm-none-eabi gcc plus devkitPro's newlib, crtls, libctru, citro3d, 3dstools and picasso. Then:

```
. <dir>/env.sh
make -f platform/3ds/Makefile
```

## Files

| File | What it is |
|---|---|
| `main.c` | Memory (heap split), settings, log, input, audio (ndsp), keyboard (swkbd), the bottom-screen profiler, the frontend loop |
| `gfx_c3d.c` | The renderer (citro3d) |
| `psp.v.pica` | The vertex program |
| `no_movies.c` | Movie and online stubs |
