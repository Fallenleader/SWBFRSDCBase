# PS Vita port

`platform/vita` builds the decompiled game (`src/game`) into a native PS Vita application. The game code runs as ARM code.
The platform layer supplies the PSP SDK functions the game calls (`platform/common`) and renders the GPU command lists the
game builds with **GXM**, the Vita's native graphics API (`gfx_gxm.c`). A fallback build renders through **vitaGL**
instead (`gfx_vgl.c` + `platform/linux_test/gfx_gl.c`).

### How the GXM build draws

The game's render code (libgu and the engine) still writes PSP GPU commands into a list each frame; `platform/common/ge.c`
reads those commands (about 2000 register writes per frame) to know the current state. What is drawn is native:

* **3D draws:** the game's vertex buffers go to the GPU as they are. Each PSP vertex type gets its own GXM vertex program,
  which reads the PSP component formats (8/16-bit fixed point, floats, packed colours) directly as vertex attributes and
  does the transform, skinning, lighting and fog on the GPU. The PSP primitive (triangle list, strip, fan) is drawn as is.
  The programs are compiled on first use and kept in `ux0:data/SWBFRS/shaders/`, so later starts don't compile again.
* **Textures:** uploaded in their PSP formats (565, 5551, 4444, 8888; 4- and 8-bit CLUT as paletted textures; DXT1/3/5 as
  BC1/2/3). The only work done is undoing the PSP's texture swizzle, a block copy. 16/32-bit CLUT textures are still
  decoded on the CPU; the log says when that happens.
* **Still on the CPU path:** 2D draws in through mode (HUD, menus), sprites and clears. These have few vertices.

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

    make vita                     # build/vita/swbfrs.vpk          (GXM renderer)
    make vita RENDERER=VITAGL     # build/vita_vgl/swbfrs.vpk      (vitaGL fallback; needs vitaGL built with vitaShaRK)

Or directly with CMake:

    cmake -S platform/vita -B build/vita -DRS_DATA_C=$PWD/build/data.c [-DRS_RENDERER=VITAGL]
    cmake --build build/vita -j

Without a local VitaSDK, the official Docker image works too (`make vita DOCKER=1`, uses `vitasdk/vitasdk`).

The two VPKs have different title IDs (`SWBR00001` GXM, `SWBR00002` vitaGL), so both can be installed at once.

## Settings: `ux0:data/SWBFRS/settings.txt`

`KEY=VALUE` lines, all optional:

| Key | Default | Meaning |
|---|---|---|
| `RS_RES_SCALE` | 2 | internal resolution: 2 = 960x544 (Vita screen), 4 = 1920x1088 (2x Vita, supersampled to the screen); 1 = 480x272 (PSP) |
| `RS_FXAA` | 0 | 1 = FXAA on the final picture (mostly useful at `RS_RES_SCALE=2`) |
| `RS_NATIVE_GE` | 1 | 0 = decode 3D vertices on the CPU as the earlier builds did (for comparison only) |
| `RS_HW_TL` | 1 | vertex transform and lighting on the GPU (0 = on the CPU) |
| `RS_FPS` | 30 | frame rate: 30 or 60 (the game's own 20 fps limit is removed; gameplay speed follows the frame time) |
| `RS_AUDIO` | 1 | 0 = no sound |
| `RS_HUD` | 0 | 1 = frame-rate / load overlay |
| `RS_VSYNC` | 1 | wait for vertical blank when showing a frame |
| `RS_CULL_FLIP` | 0 | 1 = swap the back-face culling direction (if models show their inside, report it) |
| `RS_TEXTURE_POOL_MB` | 32 | GPU memory for textures |
| `RS_VERTEX_RING_MB` | 16 | GPU memory for vertices in flight |
| `RS_LOG_MB` | 4 | size limit of `ux0:data/SWBFRS/log.txt` |
| `RS_PERF_LOG` | 0 | 1 = profiler lines every 600 frames to `ux0:data/SWBFRS/perf.log` |
| `RS_GE_ASYNC` | 1 | GPU command lists run while the game goes on (as on the PSP); 0 = the game waits for each list |

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

* **Builds:** the GXM and vitaGL VPKs build with VitaSDK (GCC 15.2). See the top-level README for the build check.
* **On hardware:** the vitaGL build ran at 960x544 at about 10 fps (before the asynchronous GPU lists and the native draw
  path). The native GXM draw path, native textures, FXAA, the 2x resolution and the 30/60 fps pacing are compiled but
  **not yet run on a Vita**. The log `ux0:data/SWBFRS/log.txt` records start-up, each vertex program built, texture
  formats that fell back to the CPU, and errors.
