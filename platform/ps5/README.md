# PS5 build (branch PS5GFXExperimental: graphics work on top of PS5Experimental)

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
| `RS_CPU_PIN` | 1 | 1 = renderer, game main thread and audio on a core each, the other game threads on the remaining cores |
| `RS_MAX_PLAYERS` | 128 | highest "Min Players (including AI)" in an offline game: 64 per team |
| `RS_MIN_TICKETS` / `RS_MAX_TICKETS` | 200 / 5000 | conquest initial tickets in an offline game |
| `RS_SAVE_MANAGER`, `RS_ANY_HEAD`, `RS_ANY_SLOT`, `RS_CREDITS`, `RS_COLOUR_PICKER`, `RS_TWIN_STICK` | | as on the Vita (platform/vita/README.md) |

The player and ticket limits apply to **offline games only**. A network game keeps the game's own limits (16 players, 25 to 200
tickets), so that it stays compatible with the PS Vita and PSP.

## Graphics work (PS5GFXExperimental)

Code: `platform/common/gfx_fx.c` (settings, current map, light setups, dumps) and `platform/linux_test/gfx_gl.c` (renderer passes).

- **Shadows**: the sun shadow map is on (`RS_SHADOWS`, `RS_SHADOW_RES` ...), lit by each map's own sun.
- **PBR**: mod textures with `_mr` (R occlusion, G roughness, B metalness) and `_n` (normal) maps get GGX shading from the map's sun (`RS_PBR`).
- **Light setups**: `/data/SWBFRS/mods/lights/<era>_<map>.txt` (e.g. `classic_hoth.txt`), written the first time a map is played from the
  game's own GE lights: `sun_dir` (world space, towards the sun), `sun_color`, `sun_intensity`, `ambient`, and the map's local
  `light point|spot` entries. Edit to change a map's light; delete to capture again.
- **Renderers**: OpenGL (the default) or Vulkan, chosen by `RS_RENDERER=opengl|vulkan` or in the game's Options menu (the
  "Vulkan Renderer" check box, the last entry: the game's own check-box widget), which rewrites that line of settings.txt; the
  choice is used from the next start (`platform/common/renderer_option.c`). Vulkan is RADV, the Mesa driver for AMD GPUs, built for
  the PS5 by [PS5_Vulkan](https://github.com/mihawk-99/PS5_Vulkan), linked into the title next to the OpenGL SDK and presenting
  through `VK_KHR_display`. If Vulkan cannot start, the game falls back to OpenGL. Both renderers share the shadow map, PBR and the
  per-map light setups.
- **Ray tracing (Vulkan only)** (`platform/linux_test/gfx_vk.c`, shaders in `platform/linux_test/vk/`): each frame the opaque
  triangles drawn by the previous frame go into a ray-tracing acceleration structure (world space), and the pixel shader casts
  rays with `VK_KHR_ray_query`:
  - `RS_RT_SHADOWS=1`: sun shadows, a ray towards the sun from every lit pixel (in place of the shadow map);
  - `RS_RT_REFLECTIONS=1`: reflections on shiny PBR surfaces (mod textures with `_mr` maps), the colour of what the reflected
    ray hits, lit by the sun (itself shadow-tested), fading out towards `RS_RT_DISTANCE` (metres, 200);
  - `RS_RT=0` turns ray tracing off. The OpenGL renderer has no ray tracing (the PS5's OpenGL has no ray-tracing API).
- **Asset dumps** (`RS_DUMP_ASSETS=1`): every texture the game loads, sorted under `/data/SWBFRS/mods/dumps/`:
  `maps/<map>/` (and `maps/<map>/sky/`), `players/<character>/`, `players/heads/<sheet>/`, `weapons/<sheet>/`, `vehicles/<vehicle>/`,
  `objects/<group>/`, `effects/`, `ui/<file>/`. Files are `<key>@<name>.png`; copy one into `/data/SWBFRS/mods/<mod>/textures/` (any
  subfolder) to replace that texture, and add `<key>@<name>_mr.png` / `<key>@<name>_n.png` next to it for PBR.

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

With the Vulkan renderer (PS5GFXExperimental): build RADV with [PS5_Vulkan](https://github.com/mihawk-99/PS5_Vulkan)
(`tools/setup-native-dependencies.sh`, then `PS5_MESA_FORK=<its PS5_Mesa checkout> tools/build-radv.sh release`; it needs LLVM 20
with SPIR-V, libclc and libclang, meson and glslangValidator), then add its checkout:

```
make ps5 PS5_BOILERPLATE=... PS5_OPENGL=... PS5_VULKAN=/path/to/PS5_Vulkan
```

`tools/ps5_radv_rename.sh` (run by make) renames RADV's global names that the OpenGL SDK's Mesa also defines, and
`platform/ps5/package.sh` links RADV whole with PS5_Vulkan's platform layer (`libps5platform.a`) the way its `tools/radv-link.sh`
does, keeping the OpenGL SDK's heap and this port's directory functions.

Home-screen pictures and sound come from the game's own `ICON0.PNG`, `PIC1.PNG` and `SND0.AT3`
(`platform/ps5/sce_sys/`; `AT9TOOL=<PS4_at9tool.exe> python3 tools/ps5_assets.py <folder holding PSP_GAME>` makes them; it needs
`pip install etcpak`, and wine off Windows for Sony's at9tool, e.g. the one in BMK-Studio/AT9-AT3_Converter's ATRAC folder).
Compiled with `-O3 -march=znver2` (the PS5's Zen 2 CPU).
