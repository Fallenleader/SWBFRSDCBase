# PS Vita port

`platform/vita` builds the decompiled game (`src/game`) into a native PS Vita application. The game code runs as ARM code.
The platform layer supplies the PSP SDK functions the game calls (`platform/common`). Rendering is native **GXM**, the
Vita's own GPU API. No GL layer is used.

### How it draws

The game reaches the GPU only through libgu, its statically linked GU library: 79 functions, and a census of every GE
command executed showed that all of them come from these functions. In this build those functions are the native GU
(`platform/common/gu_native.c`, wired in by `tools/dc/native_gu.py`):

* Each GU call records a typed operation (state, matrix, draw, clear, copy) on the game thread.
* The renderer thread runs those operations against the renderer interface `platform/common/gfx.h`.
* No GE command list is built or interpreted.
* `platform/common/ge.c`, the GE command interpreter, stays in the tree as the reference for this conversion and for
  porting to other native APIs. It is not built here; on PC it is built with `make GE_REF=1`.

`gfx_gxm.c` implements `gfx.h` on GXM:

* **Render targets:** each PSP frame buffer or render-to-texture target is a GXM colour surface at the internal
  resolution. All of them share one depth/stencil surface, which is loaded and stored across scenes.
* **Draws:** the game's vertex buffers go to the GPU as they are. Each PSP vertex type gets its own vertex program, which:
  * reads the PSP component formats as vertex attributes;
  * does transform, skinning, lighting, fog and the PSP's range culling;
  * handles triangle lists, strips and fans natively.
* **Fragment programs and state:**
  * Fragment programs handle the texture function, fog and alpha test.
  * Blend modes and colour masks are fragment program variants, created on first use.
  * Depth, stencil, cull and scissor (region clip) are dynamic state.
* **Textures:** PSP formats are uploaded as they are where GXM reads them:
  * 565, 5551, 4444 and 8888;
  * 4- and 8-bit CLUT, as paletted textures;
  * DXT1/3/5, as BC1/2/3.
  
  Other formats are decoded to RGBA8. Texture memory is a sub-allocated video-RAM pool.
* **Shaders:** compiled from Cg the first time they are needed, then cached in `ux0:data/SWBFRS/shaders/`.

### Start-up media screen

Every boot shows a media screen over the game's own main-menu backdrop before the game starts:

* It checks the converted audio and video against `ux0:data/SWBFRS/converted/manifest.txt`. This takes well under a
  second when everything is present.
* It converts whatever is missing or changed, using all three cores:
  * **AT3 audio becomes PCM WAV.** The game then plays it without decoding, sample for sample the same as the
    original decoder.
  * **PMF video becomes MP4** (the H.264 stream copied as it is, with AAC audio).
* It then continues into the game.

If conversion fails, for example because the memory card is full, X retries and O starts without the converted media.

## Requirements on the Vita

* HENkaku/Enso (the app is an unsafe homebrew: it loads the system Cg compiler).
* `ur0:data/libshacccg.suprx`: the system shader compiler, extracted with **ShaRKF00D**.
* The game files, from **your** UMD (no game data is part of this repository or of the VPK), either:
  * the image itself as `ux0:data/SWBFRS/game.iso` (ISO 9660, as UMD images are dumped), or
  * the image's contents extracted to `ux0:data/SWBFRS/GAME/` (so that `ux0:data/SWBFRS/GAME/PSP_GAME/SYSDIR` exists).

  The extracted folder is used when it is present; otherwise the ISO.
* Free space on ux0: for the converted media (written once).

## Building

You need `build/data.c`, the data image extracted from your decrypted `EBOOT.BIN` (ULUS10292 v1.02):

    make data EBOOT=/path/to/EBOOT.BIN

With VitaSDK installed (`VITASDK` set):

    cmake -S platform/vita -B build/vita -DRS_DATA_C=$PWD/build/data.c
    cmake --build build/vita -j

The build produces `build/vita/swbfrs.vpk`. It links the VitaSDK's FFmpeg for the video conversion.

The title ID is `SWBR00002`, so the VPK installs over the earlier test builds. The LiveArea artwork in `sce_sys/` comes
from the game itself.

## Settings: `ux0:data/SWBFRS/settings.txt`

All settings are optional `KEY=VALUE` lines:

| Key | Default | Meaning |
|---|---|---|
| `RS_RES_SCALE` | 2 | internal resolution: 2 = 960x544 (Vita screen), 1 = 480x272 (PSP) |
| `RS_TEX_POOL_MB` | 48 | video memory for textures |
| `RS_TEX_BUDGET_MB` | 40 | texture cache size before old textures are evicted |
| `RS_CPU_PIN` | 1 | 1 = renderer on core 0, game main thread on core 1, other game threads on core 2 |
| `RS_TWIN_STICK` | 1 | 1 = left stick move + strafe, right stick turn + look; 0 = the PSP's one-stick controls |
| `RS_MAX_PLAYERS` | 64 | highest "Min Players (including AI)" in Game Options: bots fill both teams evenly (64 = 32 per side; the game's own limit is 16) |
| `RS_MAX_TICKETS` | 1000 | highest "Conquest Initial Tickets" (the game's own limit is 200; the step stays the game's 5) |
| `RS_GAME_PATCHES` | 1 | 0 = the game's original option limits |
| `RS_FPS` | 30 | frame rate: 30 or 60 |
| `RS_AUDIO` | 1 | 0 = no sound |
| `RS_HUD` | 0 | 1 = frame-rate / load overlay |
| `RS_LOG_MB` | 4 | size limit of `ux0:data/SWBFRS/log.txt` |
| `RS_PERF_LOG` | 0 | 1 = profiler lines every 600 frames to `ux0:data/SWBFRS/perf.log` |
| `RS_GU_PIPELINE` | 0 | 1 = experimental: the game does not wait for the renderer at GU sync points |

## Controls

* The Vita buttons map to the PSP buttons of the same name.
* **Twin-stick** (default):
  * The left stick moves (forward/back) and strafes (left/right).
  * The right stick turns (left/right) and looks up/down. Look follows the game's invert-look option.
  * Moving, strafing, turning and looking all work at the same time. Strafing no longer needs the shoulder button.
  * In the alternate control scheme (face buttons look), the right stick is added, and the face buttons keep working.
  * `RS_TWIN_STICK=0` restores the PSP layout: one stick, with a shoulder button switching turn/strafe.
* **L + R + START + SELECT** quits.

The controls are rebound in the game's own input tables (`platform/common/twin_stick.c`, hooked in by `tools/dc/hooks.py`):
* The right stick is processed by the game's own stick code, with the same dead zone and curve as the left.
* Turning and looking use the game's tuned response for turning.

## Memory

The game hands the GPU 28-bit addresses. The following are registered as GPU-visible regions and must differ in their
low 28 bits:

* the data image;
* the PSP scratchpad;
* the VRAM image (8 MB);
* the game heap (64 MB, of which the top 4 MB are the PSP's "volatile" memory).

`main.c` re-allocates any block that would clash.

## Status

* **Not yet run on a Vita or in Vita3K.**
  * The renderer port has not been run. Vita3K needs `libshacccg.suprx` to compile shaders, and it was not available
    in the build environment.
  * The native GU's frames were checked on the Linux build: they are bit-identical to the GE reference path.
  * Media conversion was checked on Linux against the real game files: all audio, and all 22 videos frame-exact.
* **Not ported yet:** the game's movie player has not been switched to the converted MP4s (Vita video player); that is
  the next step.
* **Most likely to need a fix on first run:** cull direction and the fixed-colour blend approximation. The log
  `ux0:data/SWBFRS/log.txt` records each GPU program built and every GXM error.

## When the game freezes

If the game stops reaching vertical blanks for 8 seconds, it writes a report to `ux0:data/SWBFRS/hang.txt`. The report
shows what every game thread, the big lock and the renderer are doing. It repeats every 15 seconds while the game stays
frozen, up to 5 reports. Send it with `log.txt`.
