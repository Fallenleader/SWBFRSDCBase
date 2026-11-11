# Handoff: ExperimentalRewrite (state at commit of this file, 2026-11-11)

This is the full picture for whoever picks the project up, including a reviewer asked for a second opinion. It covers what the
branch is, what is done and what is not, how far the code still is from the PSP, what was measured, and the open problems.
`docs/REWRITE.md` is the plan; this file is the state. `docs/DECOMP.md` explains the decompiler, `docs/PLATFORM.md` the platform
interface.

## 1. What this is

Star Wars Battlefront: Renegade Squadron (PSP, ULUS10292 v1.02), statically decompiled into C (`tools/dc` generates
`src/game/game_*.c`, 14,760 functions, ~28.6 MB of C), compiled natively for each device. There is no CPU emulation and no
instruction interpreter. The game's own logic is the PSP game's logic, translated function by function.

Branches: `main` (the decompilation base), `ExperimentalRewrite` (this work: native platform layer, ports), `ConversionTool` (a
PC tool that converts game media for the Old 3DS), `AIAgents` work lives in `platform/common/ai_bridge.*` and `tools/aiagents`.

Devices: **PS Vita** (main target, tested on hardware by the owner), **3DS** (Old and New, hardware), **PS5** (hardware), **PC**
(`platform/desktop`; Windows builds tested by the owner), `platform/linux_test` (validation harness only).

Build: `make data EBOOT=...` once (build/data.c from the owner's EBOOT; never committed), then `cmake -S platform/vita -B
build/vita -DRS_DATA_C=$PWD/build/data.c` + `cmake --build build/vita` (VitaSDK at /usr/local/vitasdk), `make -f
platform/3ds/Makefile` (devkitARM), `make conversion_tool`. A profiling Vita build: add `-DRS_VITA_PROF=ON -DRS_BUILD_ID=<id>`.
The Vita log's first line names the build (`starting, build <git id>`).

## 2. How far it is from the PSP (the honest version)

The owner's concern is that this is "a PSP game upgraded" rather than a native game. That is accurate today. Layer by layer:

| Layer | State | PSP-shaped? |
|---|---|---|
| CPU | Native machine code (C compiled by GCC/clang) | Code is native, but **its structure is the MIPS program's**: register-named locals (`a0`, `v0`, `s0`...), the MIPS calling convention (8 int + 8 float args, `rv_t` returns), a per-function byte array as the MIPS stack, delay-slot ordering, VFPU registers as a per-thread float array |
| Memory | Guest pointers are host pointers (identity mapping on 32-bit targets); the data segment is a C array; the heap is a native range per device | **The PSP's data layout**: every structure is the PSP game's layout and alignment, 32-bit pointers inside structures, so 64-bit targets need RS_GUEST64 (base + offset) |
| Firmware (226 `sce*` imports) | **All native**: no firmware is emulated. Typed modules `native_io.c`, `native_thread.c`, `native_mem.c`, `native_kernel.c`, `net.c`; the rest are native handlers bound to the calls (`RS_BIND`) | The interface is still the PSP SDK's (the game calls `sceKernelWaitSema`, `sceGuDrawArray`...), implemented natively |
| Threads | Native OS threads, native semaphores / event flags / pools | **One "big lock"**: only one game thread runs game code at a time (the PSP's cooperative, equal-priority contract, which the game's lock-free data handoffs rely on). Firmware-side work (IO, audio mixing, rendering) runs in parallel outside it |
| Graphics | The game's sceGu calls record native ops (`gu_native.c`, no GE command lists); per device back ends: GXM on Vita (`gfx_gxm.c`), citro3d on 3DS (`gfx_c3d.c`), GL on PC | **The PSP GE's model**: fixed-function transform/lighting/fog reproduced in shaders, PSP vertex formats, PSP texture formats decoded and cached, PSP framebuffer addresses mapped to render targets. Per-pixel lighting (Vita `RS_LIGHTING`) is the first step beyond the PSP |
| Audio | Native mixer for SAS voices; all game audio pre-converted (WAV on Vita/PC/PS5, DSP-ADPCM on 3DS); output on the device API | The game still drives voices through the SAS interface |
| Video | Movies pre-converted to MP4 (Vita sceAvcdec / PC FFmpeg); 3DS: none on Old 3DS yet | Played through the game's own sceMpeg/Psmf call sequence |
| Files, saves, network, input | Native (POSIX/Vita/3DS files, folder saves, real sockets, native pads incl. twin-stick) | The game's own file formats (Asura containers) |
| Resolution / pacing | Device resolution (Vita 960x544), real-time clocks, platform frame pacing | Game logic still runs at whatever rate the single main thread manages |

In short: **the platform is native; the game is still the PSP game.** Every frame is the PSP engine's single-threaded loop
(update, then build GU draws), run on one core, with its data in PSP layout and its rendering expressed as PSP GE state.

What a "native game" route would mean, for the second opinion: either (a) keep the decompiled logic but progressively *lift*
subsystems into hand-written native C with native data structures (started: `lift.c` collision rays; planned: AI, animation,
scene/draw building), or (b) treat the decompilation as a specification and rewrite the engine (renderer, entity update, AI,
physics) natively, loading the original assets. (a) is incremental and always shippable but stays PSP-shaped for a long time;
(b) is the real fix for performance and modernisation but is a large rewrite of an engine without symbols.

## 3. Measurements (Vita, 444 MHz, CapUnlocker 4th core)

- **The main thread is the bottleneck.** The renderer (separate thread/core) takes ~13-20 ms in normal frames, 50-80 ms in heavy
  ones; the main thread 50-140 ms.
- **16 players (the PSP's own count) is still slow**: median frame 77 ms (~13 fps) on Hoth (last log). So the player count is not the
  cause; 64 players makes it worse but the baseline is already ~1.5x slower than the PSP's 20 fps cap.
- **Call-tree profile** (profiling build, all matches, `tools`: resolve `prof_vita_<n>.txt` with nm on the profiling ELF): frame =
  update 48% (per-object update 20% of which AI behaviour trees ~12 ms in combat; 08877504 world/entity 15%; 088AFEF0 5%;
  089FA30C 4%) + scene/draw building 40% (model draw path 0887794C->08AC6F88->089DAC88->08A03E78; draw submit 08901774 ~17%
  including waits on the renderer) + native waits ~6-10%. No single function over ~2% self: the cost is spread over thousands of
  game functions.
- **Slow frames are renderer-bound**: per-frame census (`frames.txt`) shows the draw-submit part (08901774) going from 1.3 ms
  (fastest quarter) to 57 ms (slowest 10%), correlation 0.87 with frame time; heavy frames have 1,100-1,340 draws at ~20 us
  back-end setup each.
- **Code size is not the problem**: recompiled game code is 3.57 MB of Thumb-2 vs 2.94 MB of MIPS (1.21x).
- Census of the object update (`RS_UPDATE_CENSUS=1/2`): one shared update method (08922B58) for all ~70-100 objects; four AI node
  types (0893D170, 0893F2F8, 089389D8, 08930DDC) dominate; two time-sliced job queues after the loop (08836CA4 on 0x08C25220 /
  0x08C25280) grow to 7-10 ms each in combat.
- GU diagnostics (`RS_PERF_LOG=1`, `[GU]` lines): frustum culling skips ~15-18% of match draws; instancing candidates: 0 (the game
  never redraws the same mesh with only a matrix change); batching of strips merged ~100 draws/buffer (now off, see 5).

## 4. Done vs not done

### Done (this session and before)
- All firmware native (0 emulated calls of 226); native threads, semaphores, event flags, pools, heap; directory listing cache.
- Vita GXM renderer: state cache, direct uniform writes, index fast path, per-pixel lighting option (`RS_LIGHTING`, simplified
  specular), vertex program warm-up from `programs.txt`, FXAA, 960x544.
- Frustum culling of 3D draws (`RS_GU_CULL=1`); strip/list batching (`RS_GU_BATCH`, default 0).
- Crash fixes: 3DS emit growth; CTF crash after the 4th flag (store through a null pointer in a MIPS delay slot, 08929C9C) plus 18
  more such stores guarded (`tools/dc/hooks.py` FIXES / NULL_STORE).
- 3DS: native 400x240, stereo 3D (perspective draws only, menus stay 2D, eyes 240 wide, strength 3), DSP-ADPCM conversion on
  first start, network, watchdog `hang.txt`, safe exit, host thread stacks sized from the game's (C heap exhaustion froze the
  console), heap use in the log.
- ConversionTool (PC, 3DS-only for now; branch `ConversionTool`).
- Profiling: call-edge profiler split by frame-length class per match (`platform/vita/prof.c`), census hooks (`lift.c`), per-frame
  `frames.txt`, build id in the log.
- Tickets: the profiling test's 9999 reinforcements reset to 200 once (marker `tickets_reset.txt`).

### Not done / open
- **Jitter / rubber-banding on Vita** ("everything jitters back and forth while moving", worst on the last build): cause not found.
  Suspects: strip batching (b5187b6; now off by default to test), frame presentation pacing with the pipelined renderer, or the
  engine's client/server interpolation at low, variable frame rates. Needs an A/B (`RS_GU_BATCH=0/1`, `RS_GU_PIPELINE=0/1`).
- **Menu texture flicker after returning from a match** (regression seen on 71468dc): not traced; check with `RS_GU_CULL=0`.
- **Main-thread speed** (the real problem): no hotspot to rewrite; needs lifting whole subsystems (AI, scene/draw building,
  entity update) or a native engine (see 2). Threading needs data ownership the PSP engine does not have.
- AI agents: the bridge only steers squads; replacing the game's per-bot behaviour with native/trained brains on a worker core is
  designed (snapshot -> worker -> controls) but not built.
- 3DS: menu hang cause, PC-converted audio rejection, Old 3DS video (THP-like via the PC tool), hardware DSP voices, save-screen GUI
  textures missing ("buttons missing, box missing" in the 3DS log), ~4-8 fps in game.
- Vita save screen red background; cohesive save UI on 3DS.
- Gameplay requests from the owner (after the critical work): space-battle vehicle spawn limits (half the teams wait), vehicle
  judder and roadkill not working, the second special-item slot to become a grenades-only slot (jump pack + jet pack combo breaks).
- Material model / PBR / ray tracing for PC and PS5; PICA fragment lighting on 3DS; mod-folder material maps.
- Names: functions and data are address-named; no symbols.

## 5. Settings that matter (Vita `settings.txt`)
`RS_GU_PIPELINE=1` (no wait at GU sync), `RS_GU_BATCH=0` (batching off pending the jitter A/B), `RS_GU_CULL=1`, `RS_LIGHTING=0`,
`RS_FPS=60`, `RS_RES_SCALE=2`, `RS_MAX_PLAYERS=64`, `RS_MAX_TICKETS=1000`, `RS_START_TICKETS=0`, `RS_UPDATE_CENSUS=0` (1 = census in
the log, 2 = also `frames.txt`), `RS_PERF_LOG=0` (1 = perf.log and `[GU]` lines), `RS_LOG_MB=4` (0 = no cap).

## 6. Owner's working rules
Builds overwrite the previous ones in `D:\SWBFRSDecomp\builds\...`; always ship a refreshed `settings.txt`; compile with every
performance flag; commit with the co-author / session lines and push after every commit; no Vita3K; the owner tests Windows, Vita,
PS5 and 3DS on hardware; don't hand over builds unless a test needs one; keep usage low.

## 7. Questions for a second opinion
1. Is incremental lifting (2a) or a native engine rewrite on the original assets (2b) the better path to a game that runs well on
   the Vita and 3DS and can grow PBR / RT on PC and PS5?
2. If incremental: which subsystem first — scene/draw building (40% of the frame, also feeds the renderer's per-draw cost), the
   per-object/AI update (20%), or the entity update (15%)?
3. How to get real parallelism out of an engine written for one cooperative core, without the shared-state hazards (snapshot +
   worker + apply, per subsystem)?
