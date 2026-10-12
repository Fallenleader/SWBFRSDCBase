# PS Vita port

`platform/vita` builds the decompiled game (`src/game`) into a native PS Vita application. The game code runs as ARM code.
The platform layer supplies the PSP SDK functions the game calls (`platform/common`) and renders the GPU command lists the
game builds through **vitaGL** (`gfx_vgl.c` + the GL ES 2.0 renderer `platform/linux_test/gfx_gl.c`, with Cg shaders on
the Vita). An earlier direct-GXM renderer was dropped: the vitaGL build is the one that runs.

### How it draws

The game's render code (libgu and the engine) still writes PSP GPU commands into a list each frame; `platform/common/ge.c`
reads those commands (about 2000 register writes per frame) to know the current state. What is drawn is native:

* **3D and 2D draws:** the game's vertex buffers go to the GPU as they are. Each PSP vertex type gets its own vertex
  program, which reads the PSP component formats (8/16-bit fixed point, floats, packed colours) directly as vertex
  attributes and does the transform, skinning, lighting and fog on the GPU. Triangle lists, strips and fans are drawn as
  they are. The programs are compiled the first time a vertex type is drawn (the log lists them).
* **Textures:** uploaded in their PSP formats (565, 5551, 4444, 8888; 4- and 8-bit CLUT as paletted textures; DXT1/3/5 as
  BC1/2/3) through vitaGL's hooks for a texture's GXM descriptor. The only work done is undoing the PSP's texture
  swizzle, a block copy. 16/32-bit CLUT textures are still decoded on the CPU; the log says when that happens.
* **Still on the CPU path:** sprites and clears.

## Requirements on the Vita

* HENkaku/Enso (the app is an unsafe homebrew: it loads the system Cg compiler).
* `ur0:data/libshacccg.suprx`: the system shader compiler, extracted with **ShaRKF00D**. The shaders are compiled from Cg
  source when the app starts.
* The game files, from **your** UMD, either way (no game data is part of this repository or of the VPK):
  * the image itself as `ux0:data/SWBFRS/game.iso` (ISO 9660, as UMD images are dumped), or
  * the image's contents extracted to `ux0:data/SWBFRS/GAME/` (so that `ux0:data/SWBFRS/GAME/PSP_GAME/SYSDIR` exists).
  The extracted folder is used when it is present; otherwise the ISO.

## Building

You need `build/data.c`, the data image extracted from your decrypted `EBOOT.BIN` (ULUS10292 v1.02):

    make data EBOOT=/path/to/EBOOT.BIN

With VitaSDK installed (`VITASDK` set):

    make vita                     # build/vita/swbfrs.vpk  (needs vitaGL built with vitaShaRK, as in the vitasdk Docker image)

Or directly with CMake:

    cmake -S platform/vita -B build/vita -DRS_DATA_C=$PWD/build/data.c
    cmake --build build/vita -j

Without a local VitaSDK, the official Docker image works too (`make vita DOCKER=1`, uses `vitasdk/vitasdk`).

The title ID is `SWBR00002` (the ID of the earlier vitaGL test builds, so the VPK installs over them). The LiveArea
artwork in `sce_sys/` comes from the game itself.

## Settings: `ux0:data/SWBFRS/settings.txt`

`KEY=VALUE` lines, all optional:

| Key | Default | Meaning |
|---|---|---|
| `RS_RES_SCALE` | 2 | internal resolution: 2 = 960x544 (Vita screen), 4 = 1920x1088 (2x Vita, supersampled to the screen); 1 = 480x272 (PSP) |
| `RS_FXAA` | 0 | 1 = FXAA on the final picture (mostly useful at `RS_RES_SCALE=2`) |
| `RS_NATIVE_GE` | 1 | 0 = decode vertices and textures on the CPU as the earlier builds did (for comparison only) |
| `RS_NATIVE_BATCH` | 1 | 1 = consecutive PSP primitives with identical state are drawn as one GPU draw call (about 4x fewer draw calls in a Hoth match); 0 = one draw call per PSP primitive (for comparison) |
| `RS_HW_TL` | 1 | vertex transform and lighting on the GPU (0 = on the CPU) |
| `RS_FPS` | 30 | frame rate: 30 or 60 (the game's own 20 fps limit is removed; gameplay speed follows the frame time) |
| `RS_AUDIO` | 1 | 0 = no sound |
| `RS_HUD` | 0 | 1 = frame-rate / load overlay |
| `RS_VSYNC` | 1 | wait for vertical blank when showing a frame |
| `RS_LOG_MB` | 4 | size limit of `ux0:data/SWBFRS/log.txt` |
| `RS_PERF_LOG` | 0 | 1 = profiler lines every 600 frames to `ux0:data/SWBFRS/perf.log`; the `GE:` line splits the renderer's time into list interpretation, GE state to draw state, back-end setup and draw calls |
| `RS_GE_ASYNC` | 1 | GPU command lists run while the game goes on (as on the PSP); 0 = the game waits for each list |
| `RS_GE_PIPELINE` | 0 | 1 = experimental: the game builds the next frame while the renderer still draws the previous one (more frames per second when the renderer is the slower side; possible flicker of objects the game rewrites in place) |

## Controls

The Vita buttons map to the PSP buttons of the same name; the left stick is the PSP analog stick. **L + R + START + SELECT**
quits.

## Memory

The game hands addresses to the GPU in its command lists, which carry 28 bits. The data image, the PSP scratchpad, the
VRAM image (8 MB) and the game heap (64 MB, of which the top 4 MB are the PSP's "volatile" memory) are registered as
GPU-visible regions and must differ in their low 28 bits. `main.c` re-allocates a block that would clash. Each game
thread's stack is registered too when it does not clash. The layout is checked on Linux with `make linux_test LAYOUT=high`,
which places everything above 0x80000000 as on the Vita.

## Status

* **On hardware:** the vitaGL build (before the native draw path) runs at 960x544 and plays matches, with some lag.
* **This build's additions are not yet run on a Vita:** native vertex and texture path, 30/60 fps pacing, FXAA, 2x
  resolution, and fewer scissor updates (vitaGL draws a stencil mask for every scissor change; the renderer now only
  sets the scissor when it changes and turns it off when it covers the whole screen). The native vertex path and the
  scale-4 surfaces render correctly on the Linux validation build; the native texture upload was checked offline
  against the game's own texture decoder for every format it handles. The log `ux0:data/SWBFRS/log.txt` records each
  vertex program built, texture formats that fell back to the CPU, and errors.
