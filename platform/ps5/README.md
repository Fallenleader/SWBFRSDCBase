# PS5 build (experimental: branch PS5Experimental)

A native PS5 homebrew title (`PPSA90292`, "SWBF Renegade Squadron") of the decompiled game. No emulation: the game's C code runs
on the PS5's CPU and draws through OpenGL on its GPU.

> Experimental: it is built and checked on a PC, not yet on a console. Please send `/data/SWBFRS/log.txt` after a run.

## What you need

* A jailbroken PS5 with a homebrew loader that runs installed native titles and lets them reach `/data`, such as
  [ShadowMountPlus](https://github.com/drakmor/ShadowMountPlus) 1.7beta4 or newer. The game reads its files from `/data/SWBFRS/`,
  outside its own sandbox.
* Your own Renegade Squadron UMD, extracted (see below).

## Installing

1. Copy the title folder `PPSA90292` (in the zip) to `/data/homebrew/PPSA90292`. Give it permissions 777, recursively, as for
   other native homebrew titles.
2. Copy the game's files to `/data/SWBFRS/GAME`, so that `/data/SWBFRS/GAME/PSP_GAME/SYSDIR` exists. It is the same layout as the
   PS Vita's `ux0:data/SWBFRS/GAME`. An ISO image is not read on the PS5: extract it.

Files the game writes to `/data/SWBFRS/`:

| File | What |
|---|---|
| `SAVEDATA/` | profiles (the save manager's five slots) |
| `log.txt` | the log of the last session |
| `settings.txt` | optional `KEY=VALUE` lines (below) |

## Controls (DualSense)

* Left stick: move and strafe. Right stick: turn and look (the twin-stick layout of the Vita build).
* Cross, Circle, Square, Triangle and the d-pad are the PSP's buttons of the same names.
* L1 or L2 = L, R1 or R2 = R. OPTIONS = START. CREATE or the touch pad = SELECT.

## Picture

* Rendered at **8x the PSP's resolution: 3840x2176**, and shown at **3840x2160 (4K, 16:9)**. The PSP's 480x272 is 30:17; one
  PSP row is left off at the top and at the bottom, which gives exactly 16:9, so the picture fills a 16:9 TV pixel for pixel with
  no bars and no stretch.
* FXAA, then the PS5 scales the 4K output to whatever the TV takes.
* **16x anisotropic filtering** on the GPU, with mip chains made for the game's textures.

## Settings: `/data/SWBFRS/settings.txt`

The zip has `SWBFRS/settings.txt` with every key at its PS5 default (also `platform/ps5/settings.txt`): copy it to
`/data/SWBFRS/settings.txt` and edit.

| Key | PS5 default | Meaning |
|---|---|---|
| `RS_RES_SCALE` | 8 | internal resolution as a multiple of 480x272: 1 to 8 (8 = 4K) |
| `RS_CROP_169` | 1 | 1 = exactly 16:9 (one PSP row off the top and bottom); 0 = the whole 480x272, with thin bars |
| `RS_OUTPUT` | 2160 | the video output: 2160, 1440 or 1080 |
| `RS_ANISO` | 16 | anisotropic filtering: 1 (off), 2, 4, 8 or 16 |
| `RS_FXAA` | 1 | 0 = no FXAA |
| `RS_FPS` | 60 | 30 or 60 |
| `RS_MAX_PLAYERS` | 128 | highest "Min Players (including AI)" in an offline game: 64 per team |
| `RS_MIN_TICKETS` / `RS_MAX_TICKETS` | 200 / 5000 | conquest initial tickets in an offline game |
| `RS_SAVE_MANAGER`, `RS_ANY_HEAD`, `RS_ANY_SLOT`, `RS_CREDITS`, `RS_COLOUR_PICKER`, `RS_TWIN_STICK` | | as on the Vita (platform/vita/README.md) |

The player and ticket limits apply to **offline games only**. A network game keeps the game's own limits (16 players, 25 to 200
tickets), so that it stays compatible with the PS Vita and PSP.

## Not in this build yet

* The intro videos (PMF) are not shown; the Vita's start-up media conversion is not part of the PS5 build. The game's music and
  sounds (ATRAC3plus, VAG) play.
* Network play.
* An on-screen keyboard: the profile name keeps the game's default.

## How it is built

The PS5 is 64-bit and the decompiled game holds addresses in 32-bit values. On 64-bit targets (`RS_GUEST64`) the game's memory is
one window laid out as the PSP's, and a guest address is an offset into it. See `src/game/rs_base.h` and
`platform/common/guest64.c`. `make linux64` builds the same model for a PC, where it is tested.

Toolchain (all on Linux):

* [ps5-native-app-boilerplate](https://github.com/blackbearreloaded/ps5-native-app-boilerplate) at commit `dd44bbd`: the public
  PS5 payload SDK v0.42, Clang 18 targeting the PS5, the converter that writes the PS5 ELF and the development FSELF, and the
  runtime `libc.prx`. Run `make` in its checkout once.
* [PS5 OpenGL SDK 1.0.2](https://github.com/blackbearreloaded/ps5-opengl/releases/tag/v1.0.2) (Mesa, OpenGL 4.6): extract it.

```
make data EBOOT=/path/to/EBOOT.BIN
make ps5 PS5_BOILERPLATE=/path/to/ps5-native-app-boilerplate PS5_OPENGL=/path/to/ps5-opengl-sdk-1.0.2/sdk
```

The result is `build/ps5/PPSA90292/` and `build/ps5/PPSA90292.zip`.

Home-screen pictures and sound come from the game's own `ICON0.PNG`, `PIC1.PNG` and `SND0.AT3`
(`platform/ps5/sce_sys/`; `AT9TOOL=<PS4_at9tool.exe> python3 tools/ps5_assets.py <folder holding PSP_GAME>` makes them; it needs
`pip install etcpak`, and wine off Windows for Sony's at9tool, e.g. the one in BMK-Studio/AT9-AT3_Converter's ATRAC folder).
Compiled with `-O3 -march=znver2` (the PS5's Zen 2 CPU).
