# ExperimentalRewrite: from emulated PSP to a native, device-agnostic game

## Goal

The decompiled game still runs on an imitation of the PSP. Every firmware call (`sce*`) goes through generated register-block glue into `hle.c`, which has a table of PSP firmware handlers. Graphics are recorded as PSP GE commands and then translated. The game threads run one at a time under a single "big lock", and memory, screen size and pacing follow the PSP.

This branch removes that layer. Each system is replaced by a native module behind one typed interface (`platform/common/rs_platform.h`), and every device implements that interface. Device-specific advantages are added afterwards, on top of a game that no longer assumes it is a PSP. That includes the Vita's cores and CapUnlocker, the 3DS's stereo screen, and the PS5's and PC's headroom.

## Targets

- **PS Vita: 2x the PSP's resolution (960x544, the Vita's screen) at 60 fps.**  Vita defaults: `RS_RES_SCALE=2`, `RS_FPS=60`,
  `RS_GU_PIPELINE=1`.  Measured so far (profiling build, Hoth, 64 bots, 444 MHz): the main thread is the limit; 14% of it waits on the
  renderer / frame end, the rest is game logic spread over many functions (per-object update ~20%, world/entity update ~18%,
  collision rays ~6%).  60 fps needs that logic several times faster: native rewrites of the hot paths and the per-object work spread
  over the Vita's cores (step 9).  The bot count is the main lever on the workload: 64 bots is 4x the PSP's 16.

## What the game asks of the PSP (inventory)

| System | Firmware calls | Engine functions calling them | Replaced by |
|---|---|---|---|
| Network (Net/Inet/Adhoc/Wlan) | ~60 | 83 | `rs_net`: native sockets |
| Threads (threads, semaphores, event flags, callbacks, delays, interrupts) | ~40 | 76 | `rs_thread`: native threads and locks, no big lock |
| Graphics (Ge, sceGu) | ~15 + GU | 72 | `rs_gfx`: native renderer calls, no GE lists |
| Files (Io, Umd) | 18 | 26 | `rs_fs`: **done (native_io.c)**, except the UMD inserted notification, which waits for native callbacks |
| Kernel misc, cache, modules | ~30 | 50 | **done (native_kernel.c)**: cache maintenance, interrupt masking, version stamps, module stop/unload, GPO, debug print, control/display/power setup calls are no-ops; the clocks are native |
| Audio (Audio, Sas, Atrac) | 27 | 18 | `rs_audio`: native mixer and decoder |
| Movies (Mpeg, Psmf) | ~20 | 9 | `rs_video`: device decoder (sceAvcdec, MVD, FFmpeg) |
| Memory (Fpl, partitions) | ~8 | 7 | the device's own heap |
| Power, display, input, time | ~20 | 14 | `rs_time`, `rs_input`, `rs_display` |
| Saves and dialogs (Utility) | ~12 | 4 | `rs_save`, native keyboard and dialogs |

Overall, 223 distinct firmware calls reach the hardware from 274 of the game's 14,760 functions. The other 14,486 functions are game logic. They are already plain C, but in decompiled register form. Hot ones are rewritten as native C as profiles point to them; `lift.c` holds the collision ray casts so far.

## Mechanism

- **Native modules** are `platform/common/native_*.c`. Each one implements the typed `rs_*` interface, and also defines the `psp_<sceName>` entry points that the game links against.
- **Glue generation:** `mkglue.py` emits emulated glue only for the calls no native module defines. So a system moves from emulated to native by adding its module; the game source is not touched.
- **The emulated handlers are deleted** from `hle.c` as each system moves. Nothing keeps two paths alive.
- **Transitional guest lock:** a native module that blocks releases the guest lock (`rs_guest_unlock` / `rs_guest_lock`) for the duration, so the game's other threads run. The lock itself goes away with the thread conversion.
- **Game-side ABI** is the game's own data layout, such as the stat structure or directory entries the game reads. It is kept until the calling engine functions are themselves rewritten.

## Order

1. **Files.** *Done.* Reads and writes no longer stop every game thread, there is a lockable handle table, and mkdir works.
2. **Threads.** The game's threads are `user_main` (32), `loading thread` (32), `Atrac File-Cache[n]` (32), `Callbacks` (16), `Simple-audio thread` (20) and one `Atrac Playing[n]` per voice line (22). The main thread, the loader and the file caches share priority 32. On the PSP, threads of equal priority never interrupt each other: each runs until it blocks. The game relies on that, because it hands data between them without locks. So that contract is kept as an explicit, cheap scheduling token: the game's code paths still run one at a time between blocking points. Everything that is not the game's own code runs outside the token, in parallel: file IO (done), audio mixing and decoding (done), rendering, movies, and later the lifted game work. This is a property of the game's code, not of the PSP hardware. It is relaxed per subsystem as each one's shared data is rewritten to be thread-safe.

   The firmware objects themselves become native. Semaphores, event flags and mutexes become native primitives, `sceKernelCpuSuspendIntr` becomes a real critical section, and delays and yields become native sleeps and yields. The big lock becomes the scheduling token described above.
3. **Time and display pacing.** Real-time clocks replace vblank counts, and frame pacing is driven by the device's present. There is no 60 Hz vblank assumption and no 480×272 framebuffer: the render target is the device's screen.
4. **Graphics.** The engine's draw functions call the native renderer directly, so no GE list is built and translated. VRAM and eDRAM addresses become textures and render targets.
5. **Audio.** SAS voices go to a native mixer, Atrac goes to a native decoder, and output goes to the device's audio API.
6. **Movies.** Movies are decoded with the device's hardware decoder and paced by real time.
7. **Input, saves, dialogs, network.** Native controls, folders, the system keyboard and sockets.
8. **Memory.** The PSP heap ceiling and partition sizes give way to the device's memory, which lets bigger battles and higher-resolution assets fit.
9. **Hot game code.** The profiled hot paths become native C and, where independent, parallel across cores: AI per bot, animation per soldier, culling per object.

Each step builds for the desktop (Linux test) and the Vita.
