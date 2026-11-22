/* PS4 platform (OpenOrbis): start-up, the DualShock 4, audio.  Memory, time, threads and the log are the POSIX code of
 * platform/desktop/plat_desktop.c (OpenOrbis' libc is musl over the PS4 kernel); the renderer is gfx_ps4gl.c (PS4GL_GNM).
 * Game files, settings.txt, log.txt and saves live in /data/Aurek.  Pad and audio calls as in the OpenOrbis samples (input,
 * audio-wav). */
#include "../plat.h"
#include "../../core/ak_settings.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/stat.h>
#include <orbis/Pad.h>
#include <orbis/UserService.h>
#include <orbis/AudioOut.h>

#define AK_PS4_DIR "/data/Aurek"
static const char *dirs[2];
static int ndirs, pad = -1, user = -1;

bool ak_plat_init(void)
{
    mkdir(AK_PS4_DIR, 0777);
    if (chdir(AK_PS4_DIR) != 0) fprintf(stderr, "[ps4] cannot enter " AK_PS4_DIR "\n");    /* (log.txt, settings.txt, saves) */
    const char *d = getenv("AK_DATA_DIR");
    if (d) dirs[ndirs++] = d;
    dirs[ndirs++] = AK_PS4_DIR;
    OrbisUserServiceInitializeParams param; param.priority = ORBIS_KERNEL_PRIO_FIFO_LOWEST;
    sceUserServiceInitialize(&param);
    if (scePadInit() != 0) AK_WARN("plat", "scePadInit failed");
    else if (sceUserServiceGetInitialUser(&user) != 0 || user < 0) AK_WARN("plat", "no signed-in user: no controller");
    else { pad = scePadOpen(user, 0, 0, NULL); AK_INFO("plat", "controller: user %d, pad handle %d", user, pad); }
    return true;
}
const char *const *ak_plat_data_dirs(int *n) { *n = ndirs; return dirs; }
const char *ak_plat_user_dir(void) { return AK_PS4_DIR; }
bool ak_plat_has_right_stick(void) { return true; }
void ak_plat_trophy_init(void) {}                  /* (PS4 trophies: not in this build; see the trophy check) */
void ak_plat_trophy_unlock(int id) { (void)id; }

static f32 pad_axis(u8 v) { int d = (int)v - 128; if (d > -20 && d < 20) return 0.0f; f32 f = d / 127.0f; return f > 1 ? 1 : f < -1 ? -1 : f; }

/* the DualShock 4 in the Vita's twin-stick layout: face buttons and d-pad as named, L1 or L2 = L, R1 or R2 = R, OPTIONS = START,
 * the touch pad = SELECT (the DS4's SHARE button belongs to the system); left stick moves, right stick aims */
bool ak_plat_poll(ak_input *in)
{
    u32 prev = in->held; OrbisPadData d;
    in->lx = in->ly = in->rx = in->ry = 0; in->held = 0;
    if (pad >= 0 && scePadReadState(pad, &d) == 0 && d.connected) {
        u32 s = d.buttons, h = 0;
        if (s & ORBIS_PAD_BUTTON_TOUCH_PAD) h |= AK_BTN_SELECT;
        if (s & ORBIS_PAD_BUTTON_OPTIONS) h |= AK_BTN_START;
        if (s & ORBIS_PAD_BUTTON_UP) h |= AK_BTN_UP;
        if (s & ORBIS_PAD_BUTTON_RIGHT) h |= AK_BTN_RIGHT;
        if (s & ORBIS_PAD_BUTTON_DOWN) h |= AK_BTN_DOWN;
        if (s & ORBIS_PAD_BUTTON_LEFT) h |= AK_BTN_LEFT;
        if (s & (ORBIS_PAD_BUTTON_L1 | ORBIS_PAD_BUTTON_L2)) h |= AK_BTN_L;
        if (s & (ORBIS_PAD_BUTTON_R1 | ORBIS_PAD_BUTTON_R2)) h |= AK_BTN_R;
        if (s & ORBIS_PAD_BUTTON_TRIANGLE) h |= AK_BTN_TRIANGLE;
        if (s & ORBIS_PAD_BUTTON_CIRCLE) h |= AK_BTN_CIRCLE;
        if (s & ORBIS_PAD_BUTTON_CROSS) h |= AK_BTN_CROSS;
        if (s & ORBIS_PAD_BUTTON_SQUARE) h |= AK_BTN_SQUARE;
        in->held = h;
        in->lx = pad_axis(d.leftStick.x); in->ly = -pad_axis(d.leftStick.y); in->rx = pad_axis(d.rightStick.x); in->ry = -pad_axis(d.rightStick.y);
    }
    in->pressed = in->held & ~prev;
    return true;                                         /* (the PS button suspends or closes the title) */
}

/* ---- audio: the engine mixes at its rate; the PS4 outputs 48 kHz stereo in 256-frame grains (resampled here, written blocking) */
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
bool ak_plat_audio_open(u32 rate, ak_audio_fn fn, void *user_)
{
    if (sceAudioOutInit() != 0) { AK_WARN("plat", "sceAudioOutInit failed"); return false; }
    aport = sceAudioOutOpen(ORBIS_USER_SERVICE_USER_ID_SYSTEM, ORBIS_AUDIO_OUT_PORT_TYPE_MAIN, 0, 256, 48000, ORBIS_AUDIO_OUT_PARAM_FORMAT_S16_STEREO);
    if (aport <= 0) { AK_WARN("plat", "audio port failed: 0x%08X", (unsigned)aport); return false; }
    afn = fn; auser = user_; arate = rate; arun = 1;
    if (pthread_create(&ath, NULL, audio_thread, NULL) != 0) { arun = 0; return false; }
    return true;
}
void ak_plat_audio_close(void) { if (arun) { arun = 0; pthread_join(ath, NULL); } }
