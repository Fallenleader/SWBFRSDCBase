# PS Vita port

`platform/vita` builds the decompiled game (`src/game`) into a native PS Vita application. The game code runs as ARM code.
The platform layer supplies the PSP SDK functions the game calls (`platform/common`) and renders the GPU command lists the
game builds with **GXM**, the Vita's native graphics API (`gfx_gxm.c`). A fallback build renders through **vitaGL**
instead (`gfx_vgl.c` + `platform/linux_test/gfx_gl.c`).

## Requirements on the Vita

* HENkaku/Enso (the app is an unsafe homebrew: it loads the system Cg compiler).
* `ur0:data/libshacccg.suprx`: the system shader compiler, extracted with **ShaRKF00D**. The shaders are compiled from Cg
  source when the app starts.
* The game files: extract **your** UMD image so that `ux0:data/RS/disc/PSP_GAME/` exists (`PSP_GAME/SYSDIR`,
  `PSP_GAME/USRDIR`, ...). No game data is part of this repository or of the VPK.

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

## Settings: `ux0:data/RS/settings.txt`

`KEY=VALUE` lines, all optional:

| Key | Default | Meaning |
|---|---|---|
| `RS_RES_SCALE` | 2 | internal resolution: 1 = 480x272 (PSP), 2 = 960x544 (Vita screen), 3 = 1440x816 |
| `RS_HW_TL` | 1 | vertex transform and lighting on the GPU (0 = on the CPU) |
| `RS_FPS` | 30 | frame-rate cap of the game's frame pacing |
| `RS_AUDIO` | 1 | 0 = no sound |
| `RS_HUD` | 0 | 1 = frame-rate / load overlay |
| `RS_VSYNC` | 1 | wait for vertical blank when showing a frame |
| `RS_CULL_FLIP` | 0 | 1 = swap the back-face culling direction (if models show their inside, report it) |
| `RS_TEXTURE_POOL_MB` | 32 | GPU memory for textures |
| `RS_VERTEX_RING_MB` | 16 | GPU memory for vertices in flight |
| `RS_LOG_MB` | 4 | size limit of `ux0:data/RS/log.txt` |
| `RS_PERF_LOG` | 0 | 1 = profiler lines every 600 frames to `ux0:data/RS/perf.log` |

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
* **Not yet run on hardware.** The decompiled game, the SDK layer and the GE interpreter are the same code that runs on the
  Linux validation build (`make linux_test`, also with `LAYOUT=high`), but the GXM renderer and the Vita frontend have
  only been compiled. The log `ux0:data/RS/log.txt` records start-up and errors.
