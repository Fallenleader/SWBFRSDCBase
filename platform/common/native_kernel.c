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
#include <time.h>

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

/* time of day (seconds since 1970) */
NOARGS(sceKernelLibcTime)
    u32 t = (u32)time(0); if (a0) memcpy(g_mem + GADDR(a0), &t, 4); return t; }
/* the game's own module: one id; stopping / unloading itself at exit does nothing */
NOARGS(sceKernelGetModuleId) return 0x1F00; }
NOARGS(ModuleMgrForUser_8F2DF740) return 0; }

/* ---- the rest of the game's system calls, none of which need the firmware ----
 * Display power: the game asks the system not to dim the screen during movies, and sets the PSP's CPU clock (the platform sets its
 * own clocks); standard input / error handles (never used for output). */
NOARGS(scePowerUnregisterCallback) return 0; }
NOARGS(scePower_EBD177D6) return 0; }                         /* clock request (333 / 166 MHz) */
NOARGS(sceKernelStdin) return 0; }
NOARGS(sceKernelStderr) return 0; }
/* Graphics engine context and list control: drawing is native (gu_native.c); these have nothing to act on. */
NOARGS(sceGeContinue) return 0; }
NOARGS(sceGeEdramSetAddrTranslation) return 0; }
NOARGS(sceGeGetCmd) return 0; }
NOARGS(sceGeSaveContext) return 0; }
NOARGS(sceGeRestoreContext) return 0; }
NOARGS(sceGeUnsetCallback) return 0; }
/* Message dialogs: the game shows them only for network and save errors, and goes on when none is reported open (status 0). */
NOARGS(sceUtilityMsgDialogInitStart) return 0; }
NOARGS(sceUtilityMsgDialogUpdate) return 0; }
NOARGS(sceUtilityMsgDialogGetStatus) return 0; }
NOARGS(sceUtilityMsgDialogShutdownStart) return 0; }
NOARGS(sceUtilitySavedataUpdate) return 0; }

/* Calendar time.  ScePspDateTime: u16 year, month, day, hour, minute, second; u32 microsecond.  Ticks are microseconds since 1 Jan
 * of year 1. */
static void put16(u32 a, u16 v){ memcpy(g_mem + GADDR(a), &v, 2); }
static void date_put(u32 a, const struct tm *t, u32 us){ put16(a, (u16)(t->tm_year + 1900)); put16(a + 2, (u16)(t->tm_mon + 1)); put16(a + 4, (u16)t->tm_mday);
    put16(a + 6, (u16)t->tm_hour); put16(a + 8, (u16)t->tm_min); put16(a + 10, (u16)t->tm_sec); memcpy(g_mem + GADDR(a + 12), &us, 4); }
static void clock_now(u32 a, int local){ struct timespec ts; clock_gettime(CLOCK_REALTIME, &ts); time_t s = ts.tv_sec; struct tm t;
#ifdef _WIN32
    if (local) localtime_s(&t, &s); else gmtime_s(&t, &s);
#else
    if (local) localtime_r(&s, &t); else gmtime_r(&s, &t);
#endif
    date_put(a, &t, (u32)(ts.tv_nsec / 1000)); }
NOARGS(sceRtcGetCurrentClock) if (a0) clock_now(a0, 0); return 0; }
NOARGS(sceRtcGetCurrentClockLocalTime) if (a0) clock_now(a0, 1); return 0; }
static s64 days_from_civil(int y, unsigned m, unsigned d){ y -= m <= 2; s64 era = (y >= 0 ? y : y - 399) / 400; unsigned yoe = (unsigned)(y - era * 400);
    unsigned doy = (153 * (m + (m > 2 ? -3 : 9)) + 2) / 5 + d - 1, doe = yoe * 365 + yoe / 4 - yoe / 100 + doy; return era * 146097 + (s64)doe - 719468; }   /* days since 1970-01-01 */
NOARGS(sceRtcGetTick)                                           /* (date, out tick) */
    if (!a0 || !a1) return 0x80010016u; u16 v[6]; u32 us; memcpy(v, g_mem + GADDR(a0), 12); memcpy(&us, g_mem + GADDR(a0 + 12), 4);
    s64 days = days_from_civil(v[0], v[1], v[2]) + 719162;          /* + days from year 1 to 1970 */
    u64 tick = (u64)days * 86400000000ull + ((u64)v[3] * 3600 + (u64)v[4] * 60 + v[5]) * 1000000ull + us;
    memcpy(g_mem + GADDR(a1), &tick, 8); return 0; }
