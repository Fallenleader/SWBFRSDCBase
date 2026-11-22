/* Wii U platform (Aroma, wut): start-up (WHB proc: HOME menu and power), the GamePad and a Pro Controller, audio (AX), files.
 * Memory, time, threads and the log are the POSIX code of platform/desktop/plat_desktop.c (wut's newlib + pthreads).  Game files,
 * settings.txt, log.txt and saves live in sd:/wiiu/apps/Aurek.
 *
 * Buttons by position, as the PSP's: bottom face button (B) = CROSS, right (A) = CIRCLE, left (Y) = SQUARE, top (X) = TRIANGLE;
 * L or ZL = L, R or ZR = R, + = START, - = SELECT; left stick moves, right stick aims (twin-stick).  The AX streaming (two looping
 * mono voices refilled from the AX frame callback) follows the usual Wii U homebrew pattern [assumed until a console run]. */
#include "../plat.h"
#include "../../core/ak_settings.h"
#include <coreinit/cache.h>
#include <vpad/input.h>
#include <padscore/kpad.h>
#include <padscore/wpad.h>
#include <sndcore2/core.h>
#include <sndcore2/voice.h>
#include <whb/proc.h>
#include <whb/sdcard.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>

static char app_dir[256];
static const char *dirs[2]; static int ndirs;

bool ak_plat_init(void)
{
    WHBProcInit();
    VPADInit(); KPADInit(); WPADEnableURCC(TRUE);
    const char *sd = WHBMountSdCard() ? WHBGetSdCardMountPath() : NULL;    /* ("fs:/vol/external01") */
    snprintf(app_dir, sizeof app_dir, "%s/wiiu/apps/Aurek", sd ? sd : "fs:/vol/external01");
    mkdir(app_dir, 0777);
    if (chdir(app_dir) != 0) fprintf(stderr, "[wiiu] cannot enter %s\n", app_dir);       /* (log.txt, settings.txt, saves) */
    const char *d = getenv("AK_DATA_DIR");
    if (d) dirs[ndirs++] = d;
    dirs[ndirs++] = app_dir;
    return true;
}
const char *const *ak_plat_data_dirs(int *n) { *n = ndirs; return dirs; }
const char *ak_plat_user_dir(void) { return app_dir; }
bool ak_plat_has_right_stick(void) { return true; }
void ak_plat_trophy_init(void) {}
void ak_plat_trophy_unlock(int id) { (void)id; }

static f32 dz(f32 v) { return v > 0.15f || v < -0.15f ? (v > 1 ? 1 : v < -1 ? -1 : v) : 0.0f; }

bool ak_plat_poll(ak_input *in)
{
    if (!WHBProcIsRunning()) return false;             /* (HOME menu close, power off) */
    u32 prev = in->held, h = 0;
    in->lx = in->ly = in->rx = in->ry = 0;
    VPADStatus vs; VPADReadError ve = VPAD_READ_SUCCESS;
    if (VPADRead(VPAD_CHAN_0, &vs, 1, &ve) > 0 && ve == VPAD_READ_SUCCESS) {
        u32 b = vs.hold;
        if (b & VPAD_BUTTON_B) h |= AK_BTN_CROSS;
        if (b & VPAD_BUTTON_A) h |= AK_BTN_CIRCLE;
        if (b & VPAD_BUTTON_Y) h |= AK_BTN_SQUARE;
        if (b & VPAD_BUTTON_X) h |= AK_BTN_TRIANGLE;
        if (b & (VPAD_BUTTON_L | VPAD_BUTTON_ZL)) h |= AK_BTN_L;
        if (b & (VPAD_BUTTON_R | VPAD_BUTTON_ZR)) h |= AK_BTN_R;
        if (b & VPAD_BUTTON_PLUS) h |= AK_BTN_START;
        if (b & VPAD_BUTTON_MINUS) h |= AK_BTN_SELECT;
        if (b & VPAD_BUTTON_UP) h |= AK_BTN_UP;
        if (b & VPAD_BUTTON_DOWN) h |= AK_BTN_DOWN;
        if (b & VPAD_BUTTON_LEFT) h |= AK_BTN_LEFT;
        if (b & VPAD_BUTTON_RIGHT) h |= AK_BTN_RIGHT;
        in->lx = dz(vs.leftStick.x); in->ly = dz(vs.leftStick.y); in->rx = dz(vs.rightStick.x); in->ry = dz(vs.rightStick.y);
    }
    for (int ch = 0; ch < 4; ch++) {                     /* Pro Controllers (and Classic Controllers) */
        KPADStatus ks; KPADError ke = KPAD_ERROR_OK;
        if (KPADReadEx((KPADChan)ch, &ks, 1, &ke) <= 0 || ke != KPAD_ERROR_OK) continue;
        if (ks.extensionType != WPAD_EXT_PRO_CONTROLLER && ks.extensionType != WPAD_EXT_MPLUS_PRO_CONTROLLER) continue;
        u32 b = ks.pro.hold;
        if (b & WPAD_PRO_BUTTON_B) h |= AK_BTN_CROSS;
        if (b & WPAD_PRO_BUTTON_A) h |= AK_BTN_CIRCLE;
        if (b & WPAD_PRO_BUTTON_Y) h |= AK_BTN_SQUARE;
        if (b & WPAD_PRO_BUTTON_X) h |= AK_BTN_TRIANGLE;
        if (b & (WPAD_PRO_BUTTON_L | WPAD_PRO_BUTTON_ZL)) h |= AK_BTN_L;
        if (b & (WPAD_PRO_BUTTON_R | WPAD_PRO_BUTTON_ZR)) h |= AK_BTN_R;
        if (b & WPAD_PRO_BUTTON_PLUS) h |= AK_BTN_START;
        if (b & WPAD_PRO_BUTTON_MINUS) h |= AK_BTN_SELECT;
        if (b & WPAD_PRO_BUTTON_UP) h |= AK_BTN_UP;
        if (b & WPAD_PRO_BUTTON_DOWN) h |= AK_BTN_DOWN;
        if (b & WPAD_PRO_BUTTON_LEFT) h |= AK_BTN_LEFT;
        if (b & WPAD_PRO_BUTTON_RIGHT) h |= AK_BTN_RIGHT;
        f32 v;
        if ((v = dz(ks.pro.leftStick.x)) != 0) in->lx = v;
        if ((v = dz(ks.pro.leftStick.y)) != 0) in->ly = v;
        if ((v = dz(ks.pro.rightStick.x)) != 0) in->rx = v;
        if ((v = dz(ks.pro.rightStick.y)) != 0) in->ry = v;
    }
    in->held = h; in->pressed = h & ~prev;
    return true;
}

/* ---- audio: two looping mono LPCM16 voices (left, right) over a ring the AX frame callback (every 3 ms) keeps LEAD frames ahead
 * of the play position, mixing with the engine's callback at the engine's rate (the voices resample to the 48 kHz output) */
#define RING 8192
#define LEAD 2048
static AXVoice *vo[2]; static s16 *ringb[2]; static u32 wpos; static ak_audio_fn afn; static void *auser; static bool aon;
static s16 mixbuf[LEAD * 2];
static void ax_frame(void)
{
    if (!aon) return;
    AXVoiceOffsets off; AXGetVoiceOffsets(vo[0], &off);
    u32 play = off.currentOffset % RING, ahead = (wpos + RING - play) % RING;
    if (ahead >= LEAD) return;
    u32 need = LEAD - ahead;
    afn(mixbuf, need, auser);
    for (u32 i = 0; i < need; i++) { u32 k = (wpos + i) % RING; ringb[0][k] = mixbuf[2 * i]; ringb[1][k] = mixbuf[2 * i + 1]; }
    for (int c = 0; c < 2; c++) DCFlushRange(ringb[c], RING * 2);
    wpos = (wpos + need) % RING;
}
bool ak_plat_audio_open(u32 rate, ak_audio_fn fn, void *user)
{
    AXInitParams ip; memset(&ip, 0, sizeof ip); ip.renderer = AX_INIT_RENDERER_48KHZ; ip.pipeline = AX_INIT_PIPELINE_SINGLE;
    AXInitWithParams(&ip);
    afn = fn; auser = user;
    for (int c = 0; c < 2; c++) {
        ringb[c] = (s16 *)memalign(64, RING * 2); if (!ringb[c]) return false; memset(ringb[c], 0, RING * 2); DCFlushRange(ringb[c], RING * 2);
        vo[c] = AXAcquireVoice(31, NULL, NULL); if (!vo[c]) { AK_WARN("plat", "no AX voice"); return false; }
        AXVoiceBegin(vo[c]);
        AXSetVoiceType(vo[c], 0);
        AXVoiceVeData ve = { 0x8000, 0 }; AXSetVoiceVe(vo[c], &ve);
        AXVoiceDeviceMixData mix[6]; memset(mix, 0, sizeof mix); mix[c].bus[0].volume = 0x8000;   /* TV: left voice -> channel 0, right -> 1 */
        AXSetVoiceDeviceMix(vo[c], AX_DEVICE_TYPE_TV, 0, mix);
        AXSetVoiceDeviceMix(vo[c], AX_DEVICE_TYPE_DRC, 0, mix);                                     /* the GamePad's speakers too */
        AXVoiceOffsets off; memset(&off, 0, sizeof off);
        off.dataType = AX_VOICE_FORMAT_LPCM16; off.loopingEnabled = AX_VOICE_LOOP_ENABLED; off.loopOffset = 0; off.endOffset = RING - 1;
        off.currentOffset = 0; off.data = ringb[c];
        AXSetVoiceOffsets(vo[c], &off);
        AXSetVoiceSrcType(vo[c], AX_VOICE_SRC_TYPE_LINEAR);
        AXSetVoiceSrcRatio(vo[c], (f32)rate / (f32)AXGetInputSamplesPerSec());
        AXVoiceEnd(vo[c]);
    }
    wpos = LEAD; aon = true;
    AXRegisterAppFrameCallback(ax_frame);
    for (int c = 0; c < 2; c++) AXSetVoiceState(vo[c], AX_VOICE_STATE_PLAYING);
    return true;
}
void ak_plat_audio_close(void)
{
    if (!aon) return;
    aon = false; AXRegisterAppFrameCallback(NULL);
    for (int c = 0; c < 2; c++) { AXSetVoiceState(vo[c], AX_VOICE_STATE_STOPPED); AXFreeVoice(vo[c]); free(ringb[c]); }
    AXQuit();
}
