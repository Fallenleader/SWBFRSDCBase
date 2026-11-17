# Aurek on the Nintendo 3DS

A `.3dsx` for the Homebrew Launcher, written for the **Old 3DS** (268 MHz ARM11, 64 MB, no C-stick). A New 3DS runs the same
file at its faster clock with the same controls.

## Install

1. Copy `Aurek/` (aurek.3dsx and settings.txt) to `sdmc:/3ds/Aurek/`.
2. Game files: nothing to copy if the earlier 3DS port already runs - Aurek reads `sdmc:/3ds/SWBFRS/game.iso` (or
   `sdmc:/3ds/SWBFRS/GAME/PSP_GAME/`) and its converted audio `sdmc:/3ds/SWBFRS/converted/` (DSP-ADPCM `.adp`, written by the
   SWBFRS conversion tool's `3ds` target or the earlier port's first start).  They can also go in `sdmc:/3ds/Aurek/`.
3. Sound needs `sdmc:/3ds/dspfirm.cdc` (run DSP1 once).
4. Start Aurek from the Homebrew Launcher.  Quit with L + R + START + SELECT or the HOME menu.

## Controls (the PSP's layout and one-stick scheme)

| 3DS | PSP |
|---|---|
| B | Cross (fire) |
| A | Circle (roll) |
| Y | Square (secondary) |
| X | Triangle (zoom) |
| L / ZL | L (jump, sprint) |
| R / ZR | R (lock-on; flyers: take off, speed up) |
| Circle Pad | the analogue stick |
| D-pad, START, SELECT | the same |

On foot the stick turns the soldier toward where it points and runs that way (pulled back: runs backward), and the view swings
in behind (PARITY_TASKS 1.14).  Twin-stick aiming is off: there is no right stick.

## What this build does

- **Renderer (gfx_c3d.c, citro3d):** the top screen at 400x240; geometry and textures in the linear heap; textures stored as
  16-bit formats picked per texture (RGB565 / RGBA5551 / RGBA4444) with the game's mip levels; the engine's 32-bit index buffers
  rebased to 16-bit windows on first use; one vertex program (aurek.v.pica); fog through a ramp texture; the debug text on the
  bottom screen.
- **Stereo 3D:** with the slider up, the frame's draws are played once per eye with a clip-space shift of +-sep x (w - conv)
  (`AK_3D_STRENGTH`, `AK_3D_DEPTH`); the HUD sits on the screen.  Adapted from the earlier port's stereo camera (platform/3ds).
- **Sound:** the engine's mix at 32 kHz through the DSP (ndsp); music and speech from the converted `.adp` files (engine/audio/
  ak_adp.c), or `.wav` copies where present.
- **Videos:** none are played (stubbed).
- **Flags:** every performance flag - `-O3 -flto`, ARM11 MPCore tuning with hard float in ARM mode, section garbage collection,
  fast float rules; RunFast VFP mode (denormals flushed) at start-up.

## Not yet

- Not run on hardware or an emulator before this build was handed over unless the progress log says so.
- Tank barrels have no stick to aim them (the game's own tank aim on the PSP is not traced).
- Screenshots (`ak_gfx_screenshot`) are not supported here.

## Build

```
platform/3ds/build_toolchain.sh ~/dkp3ds     # once, without devkitPro's own packages
. ~/dkp3ds/env.sh
make -f engine/platform/3ds/Makefile        # -> build/aurek_3ds/Aurek/aurek.3dsx + settings.txt
```
