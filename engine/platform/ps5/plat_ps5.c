/* PS5 platform: start-up, the DualSense, audio and the launch splash.  Memory, time, threads and the log are the POSIX code of
 * platform/desktop/plat_desktop.c (the payload SDK's libc is FreeBSD's); the renderer is platform/desktop/gfx_vk.c built with
 * AK_VK_DISPLAY (RADV presenting through VK_KHR_display).  Game files, settings.txt, log.txt and saves live in /data/Aurek.
 *
 * The pad and audio calls and their data layouts are those the earlier PS5 build (platform/ps5/main.c of the recompiled game) used;
 * that build was checked on a PC, never on a console, so they are [assumed] until a console run confirms them. */
#include "../plat.h"
#include "../../core/ak_settings.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/stat.h>

int sceUserServiceInitialize(void *params);
int sceUserServiceGetInitialUser(int *user);
int scePadInit(void);
int scePadOpen(int user, int type, int index, const void *param);
int scePadReadState(int handle, void *data);
int sceAudioOutInit(void);
int sceAudioOutOpen(int user, int type, int index, unsigned int grain, unsigned int freq, unsigned int format);
int sceAudioOutOutput(int handle, const void *samples);
int sceSystemServiceHideSplashScreen(void);

#define AK_PS5_DIR "/data/Aurek"
static const char *dirs[2];
static int ndirs, pad = -1;

bool ak_plat_init(void)
{
    mkdir(AK_PS5_DIR, 0777);
    if (chdir(AK_PS5_DIR) != 0) fprintf(stderr, "[ps5] cannot enter " AK_PS5_DIR "\n");    /* (log.txt, settings.txt, saves) */
    const char *d = getenv("AK_DATA_DIR");
    if (d) dirs[ndirs++] = d;
    dirs[ndirs++] = AK_PS5_DIR;
    int user = -1;
    sceUserServiceInitialize(NULL);
    if (sceUserServiceGetInitialUser(&user) < 0 || user < 0) AK_WARN("plat", "no signed-in user: no controller");
    else if (scePadInit() < 0) AK_WARN("plat", "scePadInit failed");
    else { pad = scePadOpen(user, 0, 0, NULL); AK_INFO("plat", "controller: user %d, pad handle %d", user, pad); }
    return true;
}
const char *const *ak_plat_data_dirs(int *n) { *n = ndirs; return dirs; }
const char *ak_plat_user_dir(void) { return AK_PS5_DIR; }
bool ak_plat_has_right_stick(void) { return true; }
void ak_plat_trophy_init(void) {}                  /* (PS5 trophies: not in this build; see the trophy check) */
void ak_plat_trophy_unlock(int id) { (void)id; }
void ak_plat_first_frame(void) { int r = sceSystemServiceHideSplashScreen(); AK_INFO("plat", "launch splash hidden (0x%08x)", (unsigned)r); }

static f32 pad_axis(u8 v) { int d = (int)v - 128; if (d > -20 && d < 20) return 0.0f; f32 f = d / 127.0f; return f > 1 ? 1 : f < -1 ? -1 : f; }

/* the DualSense in the Vita's twin-stick layout: face buttons and d-pad as named, L1 or L2 = L, R1 or R2 = R, OPTIONS = START,
 * CREATE or the touch pad = SELECT; left stick moves, right stick aims */
bool ak_plat_poll(ak_input *in)
{
    u32 prev = in->held; u8 d[256]; memset(d, 0, sizeof d);
    in->lx = in->ly = in->rx = in->ry = 0; in->held = 0;
    if (pad >= 0 && scePadReadState(pad, d) >= 0) {
        u32 s; memcpy(&s, d, 4); u32 h = 0;                  /* buttons, then the sticks (x, y bytes), as OrbisPadData */
        if (s & 0x00000001u) h |= AK_BTN_SELECT;             /* CREATE [assumed: bit 0, from the earlier build] */
        if (s & 0x00100000u) h |= AK_BTN_SELECT;             /* touch pad */
        if (s & 0x00000008u) h |= AK_BTN_START;              /* OPTIONS */
        if (s & 0x00000010u) h |= AK_BTN_UP;
        if (s & 0x00000020u) h |= AK_BTN_RIGHT;
        if (s & 0x00000040u) h |= AK_BTN_DOWN;
        if (s & 0x00000080u) h |= AK_BTN_LEFT;
        if (s & 0x00000500u) h |= AK_BTN_L;                  /* L2 0x100, L1 0x400 */
        if (s & 0x00000A00u) h |= AK_BTN_R;                  /* R2 0x200, R1 0x800 */
        if (s & 0x00001000u) h |= AK_BTN_TRIANGLE;
        if (s & 0x00002000u) h |= AK_BTN_CIRCLE;
        if (s & 0x00004000u) h |= AK_BTN_CROSS;
        if (s & 0x00008000u) h |= AK_BTN_SQUARE;
        in->held = h;
        in->lx = pad_axis(d[4]); in->ly = -pad_axis(d[5]); in->rx = pad_axis(d[6]); in->ry = -pad_axis(d[7]);
    }
    in->pressed = in->held & ~prev;
    return true;                                         /* (the system's PS button suspends or closes the title) */
}

/* ---- audio: the engine mixes at its rate; the PS5 outputs 48 kHz stereo in 256-frame grains (resampled here, written blocking) */
static int aport = -1; static ak_audio_fn afn; static void *auser; static u32 arate; static volatile int arun; static pthread_t ath;
static void *audio_thread(void *p)
{
    (void)p;
    static s16 in[(1024 + 2) * 2], grain[256 * 2]; int gn = 0; double pos = 0; s16 last[2] = { 0, 0 };
    const double step = (double)arate / 48000.0; const u32 block = 1024;
    while (arun) {
        afn(in, block, auser);
        for (; pos < block - 1; pos += step) {
            int i = (int)(pos + 1.0) - 1; double f = pos - i;        /* floor, for pos >= -1 */
            const s16 *a = i < 0 ? last : in + i * 2, *b = in + (i + 1) * 2;
            grain[gn * 2] = (s16)(a[0] + (b[0] - a[0]) * f); grain[gn * 2 + 1] = (s16)(a[1] + (b[1] - a[1]) * f);
            if (++gn == 256) { sceAudioOutOutput(aport, grain); gn = 0; }
        }
        pos -= block; last[0] = in[(block - 1) * 2]; last[1] = in[(block - 1) * 2 + 1];
    }
    return NULL;
}
bool ak_plat_audio_open(u32 rate, ak_audio_fn fn, void *user)
{
    sceAudioOutInit();
    aport = sceAudioOutOpen(0xFF, 0, 0, 256, 48000, 1);          /* (system user, main port, S16 stereo [assumed: format 1]) */
    if (aport < 0) { AK_WARN("plat", "audio port failed: 0x%08X", (unsigned)aport); return false; }
    afn = fn; auser = user; arate = rate; arun = 1;
    if (pthread_create(&ath, NULL, audio_thread, NULL) != 0) { arun = 0; return false; }
    return true;
}
void ak_plat_audio_close(void) { if (arun) { arun = 0; pthread_join(ath, NULL); } }
