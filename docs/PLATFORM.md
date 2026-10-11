# What a target port provides

The decompiled game (`src/game`) is self-contained C. It includes Sony's statically linked libraries (libgu, the VFPU
memcpy/memset, newlib, libsupc++), because they were part of the executable. A port supplies only the following.

## 1. Support symbols (`src/game/rs_base.h`)

| Symbol | Meaning |
|---|---|
| `__thread u32 fpu_csr` | FPU control/status word (rounding mode of `cvt.w.s`), per thread, initially 0 |
| `__thread float vfpu_v[128]` | the vector unit's register file, per thread (the game keeps values there across calls) |
| `__thread u32 vfpu_cc` | vector condition flags, per thread |
| `__thread u32 psp_k0` | per-thread block pointer the PSP firmware keeps in `$k0`. newlib reads it; give every thread its own zeroed block (256 bytes) |
| `void rs_break(u32 code, u32 where)` | trap: `break` instruction or an unreachable `switch` value |

## 2. PSP SDK functions (`src/game/psp_sdk.h`, 224)

Every function is declared with eight `u32` parameters (a0-a3, t0-t3) and returns `u32`, except `sceIoLseek`, which
returns `u64`. Pointer arguments are native addresses. Groups:

* **Kernel:** threads (create/start/exit/delete/wait/delay/priorities), semaphores, event flags, fixed-length pools,
  callbacks, partition memory, system time, cache operations (no-ops natively), module manager (the game loads only
  firmware utility modules).
* **I/O:** `sceIoOpen/Read/Write/Lseek/Close/Getstat/Dopen/Dread/Dclose/Devctl/Mkdir`. The game opens files by path and
  by raw disc sector (`disc0:/sce_lbn0x...`).
* **Display and GPU:**
  * `sceDisplay*` sets the shown frame buffer and waits for vblank.
  * `sceGe*` executes GPU command lists: `sceGeListEnQueue`, `sceGeListUpdateStallAddr` (lists grow while they run),
    `sceGeListSync`, `sceGeDrawSync`, `sceGeSetCallback`, `sceGeEdramGetAddr` (VRAM base).
  * The game writes these lists through libgu and directly (model display lists), so the graphics layer interprets PSP
    GE commands.
  * GE addresses are 28-bit (BASE + 24-bit), so GPU-visible memory must lie in one 256 MB-aligned window. Otherwise the
    port must translate the addresses.
* **Audio:** `sceAudioOutput2*` (stereo output), `__sceSas*` (32-voice ADPCM mixer), `sceAtrac*` (ATRAC3plus music
  and speech).
* **Input:** `sceCtrlReadBufferPositive` and sampling setup.
* **Utility:** save data, message dialog, on-screen keyboard, system parameters, network configuration.
* **Network:** `sceNet*` / `sceNetAdhoc*` / `sceNetInet*`, used only by multiplayer.
* **Video:** `sceMpeg*` / `scePsmf*`, used for the intro and cutscene movies.
* **Misc:** `sceRtc*`, `sceUmd*`, `scePower*`, `sceKernelLibcTime`.

`platform/linux_test` implements all of these for validation. The audio mixer and ATRAC3plus decoder there are complete.
The video and network functions are stubs, as they were in the earlier builds.

## 3. Entry

`main()` sets up threads and memory, then calls the module entry:

    func_08A85AB0(argument length, pointer to "disc0:/PSP_GAME/SYSDIR/EBOOT.BIN", 0, ...)

`module_start` creates the game's main thread, `user_main`, through `sceKernelCreateThread`. Thread entry points are
native function pointers with the uniform prototype `ifn_t`, called with (argument length, argument pointer).
