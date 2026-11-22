/* PS Vita platform: memory, clocks, cores, threads, controller, files and log.
 * The engine's folder is ux0:data/Aurek (settings.txt, log.txt, shader cache).  Game files are looked for there first, then in
 * the earlier port's folder ux0:data/SWBFRS, so an existing game.iso or GAME/ is used where it already is. */
#include "../plat.h"
#include <psp2/kernel/processmgr.h>
#include <psp2/kernel/threadmgr.h>
#include <psp2/io/stat.h>
#include <psp2/ctrl.h>
#include <psp2/power.h>
#include <psp2/audioout.h>
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
bool ak_plat_has_right_stick(void) { return true; }

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

/* ---- audio: a thread feeding the main audio port, 256 frames a grain at 48 kHz (sceAudioOutOutput blocks until the port
 * wants the next grain) */
static ak_audio_fn afn; static void *auser; static int aport = -1; static volatile int arun; static ak_thread *athr;
static void audio_thread(void *arg)
{
    (void)arg; static s16 buf[2][256 * 2]; int b = 0;
    while (arun) { afn(buf[b], 256, auser); sceAudioOutOutput(aport, buf[b]); b ^= 1; }
}
bool ak_plat_audio_open(u32 rate, ak_audio_fn fn, void *user)
{
    afn = fn; auser = user;
    aport = sceAudioOutOpenPort(SCE_AUDIO_OUT_PORT_TYPE_MAIN, 256, (int)rate, SCE_AUDIO_OUT_MODE_STEREO);
    if (aport < 0) { AK_WARN("plat", "audio: port 0x%08x", (unsigned)aport); return false; }
    int vol[2] = { SCE_AUDIO_VOLUME_0DB, SCE_AUDIO_VOLUME_0DB };
    sceAudioOutSetVolume(aport, SCE_AUDIO_VOLUME_FLAG_L_CH | SCE_AUDIO_VOLUME_FLAG_R_CH, vol);
    arun = 1; athr = ak_plat_thread_start("aurek_audio", audio_thread, NULL, 2, 64 * 1024);
    return athr != NULL;
}
void ak_plat_audio_close(void) { arun = 0; if (athr) ak_plat_thread_join(athr); athr = NULL; if (aport >= 0) sceAudioOutReleasePort(aport); aport = -1; }

/* ------------------------------------------------------------------ trophies
 * The system's trophies through sceNpTrophy, for the pack in sce_sys/trophy/AURK00001_00/TROPHY.TRP (tools/trophy/make_trophies.py).
 * A homebrew's pack is unsigned: the NoTrpDrm plugin lets the system take it; without the plugin the context is refused and the
 * game goes on without trophies.  The first start shows the system's set-up dialog (drawn over the renderer's frames); unlocks go
 * through a thread of their own (the call waits for the system's notice). */
#include <psp2/common_dialog.h>
#include <psp2/sysmodule.h>
#include <string.h>
#include "../../render/ak_gfx.h"
#include "../../core/ak_core.h"
void ak_gfx_vita_dialog(int on);
typedef struct { int sdk_version; SceCommonDialogParam common; int context; int options; u8 reserved[128]; } trophy_setup_param;
int sceNpTrophyInit(void *unk);
int sceNpTrophyCreateContext(int *context, const char *comm_id, const char *comm_sign, u64 options);
int sceNpTrophySetupDialogInit(trophy_setup_param *p);
SceCommonDialogStatus sceNpTrophySetupDialogGetStatus(void);
int sceNpTrophySetupDialogTerm(void);
int sceNpTrophyCreateHandle(int *handle);
int sceNpTrophyDestroyHandle(int handle);
int sceNpTrophyUnlockTrophy(int context, int handle, int id, int *platinum);
int sceNpTrophyGetTrophyUnlockState(int context, int handle, void *state, unsigned *count);
static int tr_ctx = -1, tr_ready; static u32 tr_state[4]; static int tr_queue[64]; static volatile int tr_head, tr_tail; static SceUID tr_sema = -1;
static int tr_thread(SceSize n, void *arg)
{
    (void)n; (void)arg;
    for (;;) {
        sceKernelWaitSema(tr_sema, 1, NULL);
        int id = tr_queue[tr_tail & 63], h, plat = -1; tr_tail++;
        if (sceNpTrophyCreateHandle(&h) < 0) continue;
        int r = sceNpTrophyUnlockTrophy(tr_ctx, h, id, &plat);
        sceNpTrophyDestroyHandle(h);
        AK_INFO("trophy", "unlock %d: %08x%s", id, (unsigned)r, plat >= 0 ? " (platinum)" : "");
    }
    return 0;
}
void ak_plat_trophy_init(void)
{
    if (sceSysmoduleLoadModule(SCE_SYSMODULE_NP_TROPHY) < 0) return;
    sceNpTrophyInit(NULL);
    char comm_id[12] = "AURK00001";                                   /* SceNpCommunicationId: 9 characters, a NUL, the set (0), reserved */
    static const char sign[160] = { (char)0xb9, (char)0xdd, (char)0xe1, 0x3b, 0x01, 0x00 };   /* (any: NoTrpDrm skips the check) */
    int r = sceNpTrophyCreateContext(&tr_ctx, comm_id, sign, 0);
    if (r < 0) { AK_INFO("trophy", "no trophies (%08x: is the NoTrpDrm plugin installed?)", (unsigned)r); tr_ctx = -1; return; }
    trophy_setup_param p; memset(&p, 0, sizeof p);
    _sceCommonDialogSetMagicNumber(&p.common); p.sdk_version = PSP2_SDK_VERSION; p.context = tr_ctx;
    if (sceNpTrophySetupDialogInit(&p) < 0) { AK_WARN("trophy", "set-up dialog failed"); return; }
    ak_m4 id; memset(&id, 0, sizeof id); id.m[0] = id.m[5] = id.m[10] = id.m[15] = 1;
    ak_gfx_env env = { { 0, 0, 0 }, 0, 0, 1.0f };
    ak_gfx_vita_dialog(1);
    while (sceNpTrophySetupDialogGetStatus() == SCE_COMMON_DIALOG_STATUS_RUNNING) { ak_gfx_begin(0xFF000000u, &id, &env); ak_gfx_end(NULL); }
    ak_gfx_vita_dialog(0);
    sceNpTrophySetupDialogTerm();
    int h; unsigned cnt;
    if (sceNpTrophyCreateHandle(&h) >= 0) { sceNpTrophyGetTrophyUnlockState(tr_ctx, h, tr_state, &cnt); sceNpTrophyDestroyHandle(h); }
    tr_sema = sceKernelCreateSema("ak_trophy", 0, 0, 64, NULL);
    SceUID t = sceKernelCreateThread("ak_trophy", tr_thread, 0x10000100, 0x4000, 0, 0, NULL);
    if (tr_sema < 0 || t < 0) return;
    sceKernelStartThread(t, 0, NULL); tr_ready = 1;
    AK_INFO("trophy", "trophies ready");
}
void ak_plat_trophy_unlock(int id)
{
    if (!tr_ready || id <= 0 || id >= 128 || (tr_state[id >> 5] & (1u << (id & 31)))) return;
    if (tr_head - tr_tail >= 64) return;
    tr_state[id >> 5] |= 1u << (id & 31);
    tr_queue[tr_head & 63] = id; tr_head++; sceKernelSignalSema(tr_sema, 1);
}
