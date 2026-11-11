/* PS Vita platform: memory, clocks, cores, threads, controller, files and log.
 * The engine's folder is ux0:data/Aurek (settings.txt, log.txt, shader cache).  Game files are looked for there first, then in
 * the earlier port's folder ux0:data/SWBFRS, so an existing game.iso or GAME/ is used where it already is. */
#include "../plat.h"
#include <psp2/kernel/processmgr.h>
#include <psp2/kernel/threadmgr.h>
#include <psp2/io/stat.h>
#include <psp2/ctrl.h>
#include <psp2/power.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int _newlib_heap_size_user = 200 * 1024 * 1024;        /* main RAM for the engine's arenas (GPU memory is allocated apart) */

#define USER_DIR "ux0:data/Aurek"
static const char *dirs[] = { USER_DIR, "ux0:data/SWBFRS" };

void *ak_plat_alloc(size_t size, size_t align) { return memalign(align < 8 ? 8 : align, size); }
void ak_plat_free(void *p) { free(p); }
u64 ak_plat_time_us(void) { return sceKernelGetProcessTimeWide(); }
void ak_plat_sleep_us(u64 us) { sceKernelDelayThread((SceUInt)us); }
int ak_plat_core_count(void) { return 3; }      /* the three application cores (the fourth needs CapUnlocker: added with the job system) */

struct ak_thread { SceUID id; ak_thread_fn fn; void *arg; };
static int thread_entry(SceSize n, void *argp)
{
    ak_thread *t = *(ak_thread **)argp; t->fn(t->arg);
    return sceKernelExitThread(0);
}
ak_thread *ak_plat_thread_start(const char *name, ak_thread_fn fn, void *arg, int core, size_t stack)
{
    ak_thread *t = (ak_thread *)calloc(1, sizeof *t);
    if (!t) return NULL;
    t->fn = fn; t->arg = arg;
    int aff = core >= 0 && core < 3 ? (SCE_KERNEL_CPU_MASK_USER_0 << core) : SCE_KERNEL_CPU_MASK_USER_ALL;
    t->id = sceKernelCreateThread(name, thread_entry, 0x10000100, stack ? (SceSize)stack : 256 * 1024, 0, aff, NULL);
    if (t->id < 0) { free(t); return NULL; }
    sceKernelStartThread(t->id, sizeof t, &t);
    return t;
}
void ak_plat_thread_join(ak_thread *t)
{
    if (!t) return;
    sceKernelWaitThreadEnd(t->id, NULL, NULL); sceKernelDeleteThread(t->id); free(t);
}

void ak_plat_log_write(const char *line)
{
    static FILE *lf;
    if (!lf) lf = fopen(USER_DIR "/log.txt", "w");
    if (lf) { fprintf(lf, "%s\n", line); fflush(lf); }
}

bool ak_plat_init(void)
{
    sceIoMkdir(USER_DIR, 0777);
    /* clocks: only ever raised (an overclock the owner set, such as 500 MHz, is kept) */
    if (scePowerGetArmClockFrequency() < 444) scePowerSetArmClockFrequency(444);
    if (scePowerGetBusClockFrequency() < 222) scePowerSetBusClockFrequency(222);
    if (scePowerGetGpuClockFrequency() < 222) scePowerSetGpuClockFrequency(222);
    if (scePowerGetGpuXbarClockFrequency() < 166) scePowerSetGpuXbarClockFrequency(166);
    sceCtrlSetSamplingMode(SCE_CTRL_MODE_ANALOG_WIDE);
    AK_INFO("plat", "PS Vita: CPU %d MHz, bus %d, GPU %d, crossbar %d", scePowerGetArmClockFrequency(), scePowerGetBusClockFrequency(),
            scePowerGetGpuClockFrequency(), scePowerGetGpuXbarClockFrequency());
    return true;
}
const char *const *ak_plat_data_dirs(int *n) { *n = 2; return dirs; }
const char *ak_plat_user_dir(void) { return USER_DIR; }

static f32 stick(u8 v) { f32 f = ((int)v - 128) / 127.0f; if (f > 1) f = 1; return f > 0.18f || f < -0.18f ? f : 0.0f; }
bool ak_plat_poll(ak_input *in)
{
    SceCtrlData c; u32 prev = in->held;
    if (sceCtrlPeekBufferPositive(0, &c, 1) < 0) return true;
    in->lx = stick(c.lx); in->ly = -stick(c.ly); in->rx = stick(c.rx); in->ry = -stick(c.ry);
    static const struct { u32 s, m; } map[] = {
        { SCE_CTRL_CROSS, AK_BTN_CROSS }, { SCE_CTRL_CIRCLE, AK_BTN_CIRCLE }, { SCE_CTRL_SQUARE, AK_BTN_SQUARE }, { SCE_CTRL_TRIANGLE, AK_BTN_TRIANGLE },
        { SCE_CTRL_LTRIGGER, AK_BTN_L }, { SCE_CTRL_RTRIGGER, AK_BTN_R }, { SCE_CTRL_START, AK_BTN_START }, { SCE_CTRL_SELECT, AK_BTN_SELECT },
        { SCE_CTRL_UP, AK_BTN_UP }, { SCE_CTRL_DOWN, AK_BTN_DOWN }, { SCE_CTRL_LEFT, AK_BTN_LEFT }, { SCE_CTRL_RIGHT, AK_BTN_RIGHT } };
    u32 h = 0;
    for (size_t i = 0; i < AK_ARRAY_LEN(map); i++) if (c.buttons & map[i].s) h |= map[i].m;
    in->held = h; in->pressed = h & ~prev;
    return true;                                   /* the PS button / LiveArea closes the application */
}
