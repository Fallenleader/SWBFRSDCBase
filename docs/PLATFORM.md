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
| `u8 rs_scratchpad[0x4000]` | the PSP's 16 KB scratchpad RAM (fixed address 0x00010000 on the PSP) |

On targets where `__thread` is emulated by a library call per access (the PS Vita), define `RS_TLS_STRUCT` when
compiling the game. The four per-thread values then live in one `rs_tls_t` block, and the platform supplies
`rs_tls_t *rs_tls(void)`, which returns the calling thread's block. It is declared `const`, so each function calls it once.

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
  * GE addresses are 28-bit (BASE + 24-bit). A port registers the memory blocks the game can hand to the GPU (data
    image, scratchpad, game heap, thread stacks) with `rs_region_add`. `GADDR` then translates a 28-bit address back to
    its block. The blocks' low 28 bits must not overlap; `platform/vita/main.c` re-allocates a block that would clash.
* **Audio:** `sceAudioOutput2*` (stereo output), `__sceSas*` (32-voice ADPCM mixer), `sceAtrac*` (ATRAC3plus music
  and speech).
* **Input:** `sceCtrlReadBufferPositive` and sampling setup.
* **Utility:** save data, message dialog, on-screen keyboard, system parameters, network configuration.
* **Network:** `sceNet*` / `sceNetAdhoc*` / `sceNetInet*`, used only by multiplayer.
* **Video:** `sceMpeg*` / `scePsmf*`, used for the intro and cutscene movies.
* **Misc:** `sceRtc*`, `sceUmd*`, `scePower*`, `sceKernelLibcTime`.

`platform/common` implements all of these on POSIX threads and files. `platform/linux_test` (validation) and
`platform/vita` (PS Vita) add memory setup, input, audio output and a renderer for the GPU command lists. The audio mixer and ATRAC3plus decoder there are complete.
The video and network functions are stubs, as they were in the earlier builds.

## 3. Entry

`main()` sets up threads and memory, then calls the module entry:

    func_08A85AB0(argument length, pointer to "disc0:/PSP_GAME/SYSDIR/EBOOT.BIN", 0, ...)

`module_start` creates the game's main thread, `user_main`, through `sceKernelCreateThread`. Thread entry points are
native function pointers with the uniform prototype `ifn_t`, called with (argument length, argument pointer).
