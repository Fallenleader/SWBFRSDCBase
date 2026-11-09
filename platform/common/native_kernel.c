/* Native kernel calls (ExperimentalRewrite): the PSP firmware calls that have no meaning on a native system, and the clocks.
 *
 *  - Data cache maintenance (sceKernelDcache*): the PSP's CPU cache was not coherent with its GPU / Media Engine, so the game wrote
 *    its caches back before the hardware read memory.  Natively every writer is coherent: nothing to do.
 *  - Interrupt masking (sceKernelCpuSuspendIntr / ResumeIntr): the game's code runs one thread at a time under the guest lock, so the
 *    sections it protected this way are already exclusive.
 *  - SDK / compiler version stamps, exit callback registration, module stop / unload, GPO LEDs, debug printing, controller sampling
 *    setup, display mode, power callbacks and CPU clock requests (the platform sets the device's clocks itself), utility module loads.
 *  - Clocks: sceKernelGetSystemTimeLow (microseconds), sceRtcGetCurrentTick (microseconds since year 1), sceDisplayGetVcount (60 Hz
 *    count from the real clock: movie pacing).
 * None of these go through the emulated firmware layer any more. */
#include <stdint.h>
#include <string.h>
#include "psp_impl.h"

u64 rs_guest_clock_us(void); u64 rs_real_clock_us(void); void rs_guest_yield(void); int rs_guest_clock_yield_every(void);
extern volatile int g_frames;

#define NOARGS(n) u32 psp_##n(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3){ (void)a0; (void)a1; (void)a2; (void)a3; (void)t0; (void)t1; (void)t2; (void)t3;
NOARGS(sceKernelDcacheWritebackRange) return 0; }
NOARGS(sceKernelDcacheWritebackAll) return 0; }
NOARGS(sceKernelDcacheWritebackInvalidateAll) return 0; }
NOARGS(sceKernelDcacheWritebackInvalidateRange) return 0; }
NOARGS(sceKernelDcacheInvalidateRange) return 0; }
NOARGS(sceKernelCpuSuspendIntr) return 0; }
NOARGS(sceKernelCpuResumeIntr) return 0; }
NOARGS(sceKernelSetCompiledSdkVersion) return 0; }
NOARGS(sceKernelSetCompilerVersion) return 0; }
NOARGS(sceKernelRegisterExitCallback) return 0; }
NOARGS(sceKernelStopModule) return 0; }
NOARGS(sceKernelUnloadModule) return 0; }
NOARGS(sceKernelSetGPO) return 0; }
NOARGS(sceKernelPrintf) return 0; }
NOARGS(sceKernelStdout) return 0; }
NOARGS(sceCtrlSetSamplingCycle) return 0; }
NOARGS(sceCtrlSetSamplingMode) return 0; }
NOARGS(sceDisplaySetMode) return 0; }
NOARGS(scePowerSetClockFrequency) return 0; }
NOARGS(scePowerRegisterCallback) return 0; }
NOARGS(sceUtilityLoadModule) return 0; }

/* the game's microsecond clock.  The main thread reads it in its frame loop many times a frame; every few reads it lets the game's
 * other threads run (on the PSP they would have been scheduled at their own wake-ups meanwhile). */
NOARGS(sceKernelGetSystemTimeLow)
    u32 t = (u32)rs_guest_clock_us(); static unsigned k; if ((++k & (unsigned)rs_guest_clock_yield_every()) == 0) rs_guest_yield(); return t; }
NOARGS(sceRtcGetCurrentTick)
    u64 us = rs_guest_clock_us() + 62135596800000000ull; u32 lo = (u32)us, hi = (u32)(us >> 32); u8 *p = g_mem + GADDR(a0); memcpy(p, &lo, 4); memcpy(p + 4, &hi, 4); return 0; }
NOARGS(sceDisplayGetVcount)
    static u64 base; u64 t = rs_real_clock_us(); if (!base) base = t - (u64)g_frames * 16667u; return (u32)((t - base) * 60u / 1000000u); }
