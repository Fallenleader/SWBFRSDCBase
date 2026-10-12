/* PSP audio for the recompiled game: SAS voice mixer (VAG ADPCM, pitch, ADSR, volumes), ATRAC3/ATRAC3plus decoding and the
 * sceAudioOutput2 output path into a host ring buffer that a host audio thread drains (Vita: sceAudioOut, Windows: waveOut).
 *
 *  - SAS (sceSasCore): the game's sound effects.  Voices play VAG ADPCM from guest memory; __sceSasCore / __sceSasCoreWithMix mix
 *    one grain (256 samples) of all voices into the guest buffer exactly like the PSP's Media Engine would.  Envelope curves and rates
 *    follow the documented PSP SAS behaviour (rates, curve modes, 0x40000000 envelope range), reverb is not emulated (dry only).
 *  - ATRAC (sceAtrac3plus): music and speech.  The game streams .AT3 files through a small ring buffer; instead of re-implementing the
 *    PSP's streaming bookkeeping, every atrac ID is matched to the .AT3 file it came from (sceIoOpen notes each opened .AT3) and frames
 *    are read straight from that file.  The game is told that all data is in memory, so its file-cache threads have nothing to do.
 *    Decoding uses the standalone ATRAC3/3+ decoder from FFmpeg (LGPL 2.1, via PPSSPP's ext/at3_standalone) in ext/at3/.
 *  - Output: sceAudioOutput2OutputBlocking pushes the mixed PCM into a ring; the guest blocks while more than ~3 buffers are queued,
 *    which paces the game's audio thread to the real device.  Without a device (headless PC) the old timer pacing is used and
 *    RS_WAV_DUMP=<file> records the output for testing. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <pthread.h>
#include "psp_impl.h"
#include "gfx.h"

u32 rs_patch_audio(void); int rs_patch_volume(void);

static inline s16 clamp16(int v){ return v < -32768 ? -32768 : (v > 32767 ? 32767 : (s16)v); }

/* =============================================================== host output ring */
#define RING_FRAMES 32768
static s16 ring[RING_FRAMES * 2]; static volatile unsigned r_head, r_tail;      /* frames; head = write, tail = read */
static pthread_mutex_t r_mx = PTHREAD_MUTEX_INITIALIZER;
static int host_dev = -1;                                                     /* -1 unknown, 0 none, 1 device thread running */
static FILE *wav; static unsigned wav_frames;

/* backends (vita_backend.c / pc_win32.c); weak defaults = no device */
__attribute__((weak)) int rs_audio_host_open(int rate){ (void)rate; return 0; }
__attribute__((weak)) void rs_audio_host_write(const s16 *stereo, int frames){ (void)stereo; (void)frames; }

static void *host_thread(void *u){
    (void)u; static s16 buf[1024 * 2]; { void rs_thread_cores(const char *); rs_thread_cores("audio output"); }
    for (;;) {
        pthread_mutex_lock(&r_mx);
        unsigned avail = r_head - r_tail, n = avail > 1024 ? 1024 : avail;
        for (unsigned i = 0; i < n; i++) { unsigned k = (r_tail + i) % RING_FRAMES; buf[i * 2] = ring[k * 2]; buf[i * 2 + 1] = ring[k * 2 + 1]; }
        r_tail += n; pthread_mutex_unlock(&r_mx);
        if (n < 1024) memset(buf + n * 2, 0, (1024 - n) * 4);                  /* underrun: keep the device fed with silence */
        rs_audio_host_write(buf, 1024); }
    return 0; }

static void wav_close(void){ if (!wav) return; u32 d = wav_frames * 4, r = d + 36; fseek(wav, 4, SEEK_SET); fwrite(&r, 4, 1, wav); fseek(wav, 40, SEEK_SET); fwrite(&d, 4, 1, wav); fclose(wav); wav = 0; }
static void host_init(void){
    if (host_dev >= 0) return; host_dev = 0;
    const char *wp = getenv("RS_WAV_DUMP");
    if (wp && (wav = fopen(wp, "wb"))) { static const u8 h[44] = {'R','I','F','F',0,0,0,0,'W','A','V','E','f','m','t',' ',16,0,0,0,1,0,2,0,0x44,0xAC,0,0,0x10,0xB1,2,0,4,0,16,0,'d','a','t','a',0,0,0,0};
        fwrite(h, 1, 44, wav); atexit(wav_close); }
    if (!rs_patch_audio()) return;
    if (rs_audio_host_open(44100)) { pthread_t t; if (pthread_create(&t, 0, host_thread, 0) == 0) host_dev = 1; }
    fprintf(stderr, "[AUDIO] output: %s\n", host_dev ? "host device" : "none (timer paced)"); }

/* returns 1 if the guest should wait (device mode, ring full enough) */
int rs_audio_out_busy(void){ host_init(); if (host_dev != 1) return 0; return (r_head - r_tail) > 3 * 2048; }
int rs_audio_has_device(void){ host_init(); return host_dev == 1; }
void rs_audio_out(const s16 *src, int frames, int vol){
    host_init();
    int gv = rs_patch_audio() ? rs_patch_volume() : 0;                        /* percent */
    long scale = (long)vol * gv / 100;                                          /* vol: 0..0x8000 */
    if (wav) { for (int i = 0; i < frames * 2; i++) { s16 s = clamp16((int)((src[i] * scale) >> 15)); fwrite(&s, 2, 1, wav); } wav_frames += frames; }
    if (host_dev != 1) return;
    pthread_mutex_lock(&r_mx);
    for (int i = 0; i < frames; i++) { if (r_head - r_tail >= RING_FRAMES) break; unsigned k = r_head % RING_FRAMES;
        ring[k * 2] = clamp16((int)((src[i * 2] * scale) >> 15)); ring[k * 2 + 1] = clamp16((int)((src[i * 2 + 1] * scale) >> 15)); r_head++; }
    pthread_mutex_unlock(&r_mx); }

/* =============================================================== SAS */
enum { C_LIN_INC, C_LIN_DEC, C_LIN_BENT, C_EXP_DEC, C_EXP_INC, C_DIRECT };
enum { E_ATTACK, E_DECAY, E_SUSTAIN, E_RELEASE, E_OFF, E_KEYON, E_KEYON_STEP };
#define ENV_MAX 0x40000000LL
typedef struct {
    int on, playing, paused, type;            /* type 0 = VAG, 1 = noise/unsupported (silent) */
    u32 vag, vsize; int loop;
    /* VAG decoder */
    int nblocks, cur_block, cur_sample, loop_block, loop_next, ended; s16 smp[28]; int s1, s2; u32 rd;
    int pitch, vl, vr, el, er; u32 frac; s16 hist[2];
    /* envelope */
    int ar, dr, sr, rr, sl, at, dt, st, rt, est; long long h;
} voice_t;
static struct { int grain, maxv, outmode; voice_t v[32]; } sas;
static int sas_inited;

static void sas_reset(void){ memset(&sas, 0, sizeof sas); sas.grain = 256; sas.maxv = 32;
    for (int i = 0; i < 32; i++) { voice_t *v = &sas.v[i]; v->pitch = 0x1000; v->vl = v->vr = v->el = v->er = 0x1000; v->at = C_LIN_INC; v->dt = v->st = v->rt = C_LIN_DEC; v->est = E_OFF; } sas_inited = 1; }

static void vag_start(voice_t *v){ v->nblocks = (int)(v->vsize / 16); v->cur_block = -1; v->cur_sample = 28; v->loop_block = -1; v->loop_next = 0; v->ended = 0; v->s1 = v->s2 = 0; v->rd = v->vag; }
static void vag_block(voice_t *v){
    static const int F[5][2] = {{0, 0}, {60, 0}, {115, 52}, {98, 55}, {122, 60}};
    if (v->cur_block >= v->nblocks - 1) { v->ended = 1; return; }
    const u8 *p = g_mem + GADDR(v->rd);
    int pr = p[0] >> 4, sh = p[0] & 15, fl = p[1]; if (pr > 4) pr = 0;
    if (fl == 7) { v->ended = 1; return; }
    if (fl == 6) v->loop_block = v->cur_block; else if (fl == 3 && v->loop) v->loop_next = 1;
    int c1 = F[pr][0], c2 = -F[pr][1], s1 = v->s1, s2 = v->s2;
    for (int i = 0; i < 28; i += 2) { u8 d = p[2 + i / 2];
        int a = (s16)((d & 0xF) << 12) >> sh, b = (s16)((d & 0xF0) << 8) >> sh;
        s2 = clamp16(a + ((s1 * c1 + s2 * c2) >> 6)); s1 = clamp16(b + ((s2 * c1 + s1 * c2) >> 6)); v->smp[i] = (s16)s2; v->smp[i + 1] = (s16)s1; }
    v->s1 = s1; v->s2 = s2; v->cur_sample = 0; v->cur_block++; v->rd += 16; }
static void vag_read(voice_t *v, s16 *out, int n){
    for (int i = 0; i < n; i++) {
        if (v->ended || v->type != 0) { out[i] = 0; continue; }
        if (v->cur_sample == 28) {
            if (v->loop_next) { v->rd = v->vag + 16 * (u32)v->loop_block + 16; v->cur_block = v->loop_block; v->loop_next = 0; }
            vag_block(v); if (v->ended) { out[i] = 0; continue; } }
        out[i] = v->smp[v->cur_sample++]; } }

static void env_walk(voice_t *v, int type, int rate){
    long long e;
    switch (type) {
    case C_LIN_INC: v->h += rate; break;
    case C_LIN_DEC: v->h -= rate; break;
    case C_LIN_BENT: v->h += (v->h <= ENV_MAX * 3 / 4) ? rate : rate / 4; break;
    case C_EXP_DEC: e = v->h - ENV_MAX; e += (-e * (long long)(u32)rate) >> 32; v->h = e + ENV_MAX - ((long long)(u32)rate + 3) / 4; break;
    case C_EXP_INC: e = v->h - ENV_MAX; e += (-e * (long long)(u32)rate) >> 32; v->h = e + 0x4000 + ENV_MAX; break;
    default: v->h = rate; break; } }
static void env_state(voice_t *v, int s){ if (v->h > ENV_MAX) v->h = ENV_MAX; v->est = s; }
static void env_step(voice_t *v){
    switch (v->est) {
    case E_ATTACK: env_walk(v, v->at, v->ar); if (v->h >= ENV_MAX || v->h < 0) env_state(v, E_DECAY); break;
    case E_DECAY: env_walk(v, v->dt, v->dr); if (v->h < v->sl) env_state(v, E_SUSTAIN); break;
    case E_SUSTAIN: env_walk(v, v->st, v->sr); if (v->h <= 0) { v->h = 0; env_state(v, E_RELEASE); } break;
    case E_RELEASE: env_walk(v, v->rt, v->rr); if (v->h <= 0) { v->h = 0; env_state(v, E_OFF); } break;
    case E_KEYON: v->h = 0; env_state(v, E_KEYON_STEP); break;
    case E_KEYON_STEP: if (++v->h >= 31) { v->h = 0; env_state(v, E_ATTACK); } break;
    default: break; } }
static int env_height(const voice_t *v){ return (int)(v->h > ENV_MAX ? ENV_MAX : (v->h < 0 ? 0 : v->h)); }

static int simple_rate(int n){ n &= 0x7F; if (n == 0x7F) return 0; int r = ((7 - (n & 3)) << 26) >> (n >> 2); return r ? r : 1; }
static int exp_rate(int n){ n &= 0x7F; if (n == 0x7F) return 0; int r = ((7 - (n & 3)) << 24) >> (n >> 2); return r ? r : 1; }

static int mixbuf[2048 * 2]; static int st_peak; static unsigned long st_keyon, st_mixed, st_nonzero, st_setvoice;
void rs_audio_summary(void){ fprintf(stderr, "[AUDIO] sas: %lu SetVoice, %lu KeyOn, %lu voice-grains mixed, peak VAG sample %d\n", st_setvoice, st_keyon, st_mixed, st_peak); }
static void mix_voice(voice_t *v, int grain){
    static s16 tmp[2048 * 4 + 8];
    int delay = 0;
    if (v->est == E_KEYON) { delay = ((32 * (u32)v->pitch) >> 12) + 1; }
    int rdpos = 2; tmp[0] = v->hist[0]; tmp[1] = v->hist[1];
    int toread = (int)((v->frac + (u32)v->pitch * (u32)(grain - delay > 0 ? grain - delay : 0)) >> 12);
    if (toread > (int)(sizeof tmp / 2) - 4) toread = (int)(sizeof tmp / 2) - 4;
    if (v->est == E_KEYON) { rdpos = 0; toread += 2; }
    vag_read(v, &tmp[rdpos], toread);
    int tpos = rdpos + toread;
    for (int i = 0; i < delay && i < grain; i++) env_step(v);
    u32 frac = v->frac;
    for (int i = delay; i < grain; i++) {
        const s16 *s = tmp + (frac >> 12); int smp = s[0];
        if (v->pitch != 0x1000 || (frac & 0xFFF)) smp = s[0] - (((s[0] - s[1]) * (int)(frac & 0xFFF)) >> 12);
        frac += (u32)v->pitch;
        int e = env_height(v); env_step(v); e = (e + (1 << 14)) >> 15;
        smp = ((smp * e) + (1 << 14)) >> 15;
        mixbuf[i * 2] += (smp * v->vl) >> 12; mixbuf[i * 2 + 1] += (smp * v->vr) >> 12; }
    if (tpos >= 2) { v->hist[0] = tmp[tpos - 2]; v->hist[1] = tmp[tpos - 1]; }
    v->frac = frac - (u32)(tpos - 2) * 0x1000;
    st_mixed++; for (int i = 0; i < tpos; i++) { int a = tmp[i] < 0 ? -tmp[i] : tmp[i]; if (a > st_peak) st_peak = a; }
    if (v->ended) { v->est = E_OFF; v->h = 0; }
    if (v->est == E_OFF) { v->playing = 0; v->on = 0; } }

static void sas_mix(u32 out, u32 in, int lv, int rv){
    if (!sas_inited) sas_reset();
    int g = sas.grain; if (g <= 0 || g > 2048) g = 256;
    memset(mixbuf, 0, (size_t)g * 8);
    if (rs_patch_audio()) for (int i = 0; i < sas.maxv && i < 32; i++) { voice_t *v = &sas.v[i]; if (v->playing && !v->paused && v->vag) mix_voice(v, g); }
    s16 *o = (s16 *)(g_mem + GADDR(out)); const s16 *ip = in ? (const s16 *)(g_mem + GADDR(in)) : 0;
    for (int i = 0; i < g * 2; i += 2) {
        int l = mixbuf[i], r = mixbuf[i + 1];
        if (ip) { l += (ip[i] * lv) >> 12; r += (ip[i + 1] * rv) >> 12; }
        o[i] = clamp16(l); o[i + 1] = clamp16(r); } }

#define V0_ c->r[2]
#define A0_ c->r[4]
#define A1_ c->r[5]
#define A2_ c->r[6]
#define A3_ c->r[7]
#define T0_ c->r[8]
#define T1_ c->r[9]
#define T2_ c->r[10]
static voice_t *vv(sdkcall_t *c){ if (!sas_inited) sas_reset(); return A1_ < 32 ? &sas.v[A1_] : 0; }
#define VOICE voice_t *v = vv(c); if (!v) { V0_ = 0x80420010u; return; }

void hs_SasInit(sdkcall_t *c){ sas_reset(); sas.grain = (int)A1_; sas.maxv = (int)A2_ > 32 ? 32 : (int)A2_; sas.outmode = (int)A3_; V0_ = 0; }
void hs_SasCore(sdkcall_t *c){ sas_mix(A1_, 0, 0, 0); V0_ = 0; }
void hs_SasCoreWithMix(sdkcall_t *c){ sas_mix(A1_, A1_, (int)A2_, (int)A3_); V0_ = 0; }
void hs_SasGetEndFlag(sdkcall_t *c){ if (!sas_inited) sas_reset(); u32 f = 0; for (int i = 0; i < sas.maxv && i < 32; i++) if (!sas.v[i].playing) f |= 1u << i; V0_ = f; }
void hs_SasSetVoice(sdkcall_t *c){ VOICE int size = (int)A3_, loop = (int)T0_;
    if (size <= 0 || (size & 15)) { V0_ = 0x80420013u; if (size < 0) { v->type = 0; v->vag = A2_; v->vsize = 0; vag_start(v); V0_ = 0; } return; }
    st_setvoice++; int reset = v->vag != A2_ || v->vsize != (u32)size || v->loop != (loop != 0) || v->type != 0;
    v->type = 0; v->vag = A2_; v->vsize = (u32)size; v->loop = loop != 0; if (v->on) v->playing = 1; if (reset) vag_start(v); V0_ = 0; }
void hs_SasSetVolume(sdkcall_t *c){ VOICE v->vl = (s32)A2_; v->vr = (s32)A3_; v->el = (s32)T0_; v->er = (s32)T1_; V0_ = 0; }
void hs_SasSetPitch(sdkcall_t *c){ VOICE if ((s32)A2_ < 0 || A2_ > 0x4000) { V0_ = 0x80420011u; return; } v->pitch = (int)A2_; V0_ = 0; }
void hs_SasSetKeyOn(sdkcall_t *c){ VOICE if (v->paused || v->on) { V0_ = 0x80420016u; return; }
    st_keyon++; v->est = E_KEYON; if (v->type == 0) vag_start(v); v->playing = 1; v->on = 1; v->paused = 0; v->frac = 0; V0_ = 0; }
void hs_SasSetKeyOff(sdkcall_t *c){ VOICE if (v->paused || !v->on) { V0_ = 0x80420016u; return; } v->on = 0; env_state(v, E_RELEASE); V0_ = 0; }
void hs_SasSetNoise(sdkcall_t *c){ VOICE v->type = 1; if (v->on) v->playing = 1; V0_ = 0; }
void hs_SasSetSL(sdkcall_t *c){ VOICE v->sl = (int)A2_; V0_ = 0; }
void hs_SasSetADSR(sdkcall_t *c){ VOICE int f = (int)A2_; if (f & 1) v->ar = (int)A3_; if (f & 2) v->dr = (int)T0_; if (f & 4) v->sr = (int)T1_; if (f & 8) v->rr = (int)T2_; V0_ = 0; }
void hs_SasSetADSRmode(sdkcall_t *c){ VOICE int f = (int)A2_; if (f & 1) v->at = (int)A3_; if (f & 2) v->dt = (int)T0_; if (f & 4) v->st = (int)T1_; if (f & 8) v->rt = (int)T2_; V0_ = 0; }
void hs_SasSetSimpleADSR(sdkcall_t *c){ VOICE u32 e1 = A2_, e2 = A3_;
    v->ar = simple_rate((int)(e1 >> 8)); v->at = (e1 & 0x8000) ? C_LIN_BENT : C_LIN_INC;
    { int n = (e1 >> 4) & 15; v->dr = n ? (int)(0x80000000u >> n) : 0x7FFFFFFF; } v->dt = C_EXP_DEC;
    v->st = (e2 >> 14) & 3; v->sr = v->st == C_EXP_DEC ? exp_rate((int)(e2 >> 6)) : simple_rate((int)(e2 >> 6));
    v->rt = (e2 & 0x20) ? C_EXP_DEC : C_LIN_DEC;
    { int n = e2 & 31; if (n == 31) v->rr = 0; else if (v->rt == C_LIN_DEC) v->rr = n == 30 ? 0x40000000 : (n == 29 ? 1 : (0x10000000 >> n)); else v->rr = n ? (int)(0x80000000u >> n) : 0x7FFFFFFF; }
    v->sl = ((e1 & 15) + 1) << 26; V0_ = 0; }
void hs_SasGetEnvelopeHeight(sdkcall_t *c){ VOICE V0_ = (u32)env_height(v); }
void hs_SasGetPauseFlag(sdkcall_t *c){ if (!sas_inited) sas_reset(); u32 f = 0; for (int i = 0; i < 32; i++) if (sas.v[i].paused) f |= 1u << i; V0_ = f; }
void hs_SasSetPause(sdkcall_t *c){ if (!sas_inited) sas_reset(); u32 b = A1_; for (int i = 0; i < 32; i++, b >>= 1) if (b & 1) sas.v[i].paused = A2_ != 0; V0_ = 0; }
void hs_SasGetGrain(sdkcall_t *c){ if (!sas_inited) sas_reset(); V0_ = (u32)sas.grain; }
void hs_SasSetGrain(sdkcall_t *c){ if (!sas_inited) sas_reset(); sas.grain = (int)A1_; V0_ = 0; }
void hs_SasGetOutputmode(sdkcall_t *c){ if (!sas_inited) sas_reset(); V0_ = (u32)sas.outmode; }
void hs_SasSetOutputmode(sdkcall_t *c){ if (!sas_inited) sas_reset(); sas.outmode = (int)A1_; V0_ = 0; }

/* =============================================================== ATRAC3 / ATRAC3plus */
void *rs_at3p_alloc(int ch, int ba); int rs_at3p_decode(void *c, float *l, float *r, int *ns, const u8 *buf, int size); void rs_at3p_free(void *c);
void *rs_at3_alloc(int ch, int ba, const u8 *extra, int extra_size); int rs_at3_decode(void *c, float *l, float *r, int *ns, const u8 *buf, int size); void rs_at3_free(void *c);

typedef struct { char path[600]; u32 size; u8 head[512]; int n; } at3file_t;
static at3file_t files[16]; static int nfile;
#include "vfs.h"
void rs_atrac_note_file(const char *host_path){
    size_t l = strlen(host_path); if (l < 4 || strcasecmp(host_path + l - 4, ".at3")) return;
    FILE *f = vfs_fopen(host_path, "rb"); if (!f) return;
    at3file_t *e = &files[nfile++ % 16]; memset(e, 0, sizeof *e); strncpy(e->path, host_path, sizeof e->path - 1);
    e->n = (int)fread(e->head, 1, sizeof e->head, f); fseek(f, 0, SEEK_END); e->size = (u32)ftell(f); fclose(f); }

typedef struct {
    int used, codec, ch, ba; void *dec; FILE *f; u8 *mem; u32 data_off, data_len, nframes, cur, total, skip; int loop_start, loop_end, done;
    u32 buf, bufsize;
} atrac_t;
static atrac_t at[8];
#define ATRAC_ERR_BAD_ID 0x80630005u
#define ATRAC_ERR_ALL_DECODED 0x80630024u
#define ATRAC_ERR_UNKNOWN_FORMAT 0x80630006u

static int riff_parse(const u8 *b, u32 n, atrac_t *a, u8 *extra, int *extra_len){
    if (n < 12 || memcmp(b, "RIFF", 4) || memcmp(b + 8, "WAVE", 4)) return -1;
    u32 p = 12; int have_fmt = 0; a->loop_start = a->loop_end = -1; a->total = 0; a->skip = 0;
    while (p + 8 <= n) { u32 len; memcpy(&len, b + p + 4, 4); const u8 *d = b + p + 8;
        if (!memcmp(b + p, "fmt ", 4) && p + 8 + 16 <= n) { u16 fmt, ch, ba; memcpy(&fmt, d, 2); memcpy(&ch, d + 2, 2); memcpy(&ba, d + 12, 2); a->ch = ch; a->ba = ba;
            a->codec = fmt == 0xFFFE ? 1 : (fmt == 0x270 ? 0 : -1); have_fmt = 1;
            if (a->codec == 0 && extra && len >= 18) { u16 cb; memcpy(&cb, d + 16, 2); int el = cb < 32 ? cb : 32; if (p + 8 + 18 + el <= n) { memcpy(extra, d + 18, el); *extra_len = el; } } }
        else if (!memcmp(b + p, "fact", 4) && p + 16 <= n) { memcpy(&a->total, d, 4); if (len >= 8 && p + 20 <= n) memcpy(&a->skip, d + 4, 4); }
        else if (!memcmp(b + p, "smpl", 4) && len >= 60 && p + 8 + 52 <= n) { u32 nl; memcpy(&nl, d + 28, 4); if (nl) { u32 s, e; memcpy(&s, d + 44, 4); memcpy(&e, d + 48, 4); a->loop_start = (int)s; a->loop_end = (int)e; } }
        else if (!memcmp(b + p, "data", 4)) { a->data_off = p + 8; a->data_len = len; return have_fmt ? 0 : -1; }
        p += 8 + len + (len & 1); }
    return -1; }

void ha_SetDataAndGetID(sdkcall_t *c){
    u32 buf = A0_, size = A1_; const u8 *b = g_mem + GADDR(buf); int id = -1;
    for (int i = 0; i < 8; i++) if (!at[i].used) { id = i; break; }
    if (id < 0) { V0_ = 0x80630003u; return; }
    atrac_t *a = &at[id]; memset(a, 0, sizeof *a); u8 extra[32]; int el = 0;
    if (riff_parse(b, size, a, extra, &el) || a->codec < 0 || a->ba <= 0) { V0_ = ATRAC_ERR_UNKNOWN_FORMAT; return; }
    a->buf = buf; a->bufsize = size;
    u32 riff_total; memcpy(&riff_total, b + 4, 4); riff_total += 8;
    int cmp = size < 512 ? (int)size : 512; const char *match = 0;
    for (int k = 0; k < 16 && !match; k++) { at3file_t *e = &files[(nfile - 1 - k + 64) % 16]; if (!e->path[0]) continue;
        if (e->size == riff_total && e->n >= cmp && !memcmp(e->head, b, (size_t)cmp)) match = e->path; }
    if (match) a->f = vfs_fopen(match, "rb");
    if (!a->f) { if (size >= a->data_off + a->data_len) { a->mem = malloc(size); if (a->mem) memcpy(a->mem, b, size); }   /* whole file in the buffer */
        else fprintf(stderr, "[ATRAC] id %d: no source file found for a streamed buffer (%u of %u bytes) - silent\n", id, size, riff_total); }
    a->nframes = a->data_len / (u32)a->ba; if (!a->total) a->total = a->nframes * (a->codec ? 2048u : 1024u);
    a->dec = a->codec ? rs_at3p_alloc(a->ch, a->ba) : rs_at3_alloc(a->ch, a->ba, el ? extra : 0, el);
    a->used = 1;
    fprintf(stderr, "[ATRAC] id %d: %s, %d ch, %u frames%s%s\n", id, a->codec ? "ATRAC3plus" : "ATRAC3", a->ch, a->nframes, match ? " <- " : "", match ? match : (a->mem ? " (from memory)" : ""));
    V0_ = (u32)id; }
static atrac_t *aid(u32 id){ return id < 8 && at[id].used ? &at[id] : 0; }
void ha_Release(sdkcall_t *c){ atrac_t *a = aid(A0_); if (!a) { V0_ = ATRAC_ERR_BAD_ID; return; }
    if (a->f) fclose(a->f); free(a->mem); if (a->dec) { if (a->codec) rs_at3p_free(a->dec); else rs_at3_free(a->dec); } memset(a, 0, sizeof *a); V0_ = 0; }
void ha_GetSoundSample(sdkcall_t *c){ atrac_t *a = aid(A0_); if (!a) { V0_ = ATRAC_ERR_BAD_ID; return; }
    if (A1_) SW(A1_, a->total ? a->total - 1 : 0); if (A2_) SW(A2_, (u32)a->loop_start); if (A3_) SW(A3_, (u32)a->loop_end); V0_ = 0; }
void ha_GetStreamDataInfo(sdkcall_t *c){ atrac_t *a = aid(A0_); if (!a) { V0_ = ATRAC_ERR_BAD_ID; return; }
    if (A1_) SW(A1_, a->buf); if (A2_) SW(A2_, 0); if (A3_) SW(A3_, 0); V0_ = 0; }     /* everything is "in memory": nothing to stream */
void ha_AddStreamData(sdkcall_t *c){ V0_ = aid(A0_) ? 0 : ATRAC_ERR_BAD_ID; }
void ha_DecodeData(sdkcall_t *c){
    atrac_t *a = aid(A0_); if (!a) { V0_ = ATRAC_ERR_BAD_ID; return; }
    u32 out = A1_, pn = A2_, pfin = A3_, prem = T0_;
    if (a->done || a->cur >= a->nframes) { a->done = 1; if (pn) SW(pn, 0); if (pfin) SW(pfin, 1); if (prem) SW(prem, (u32)-1); V0_ = ATRAC_ERR_ALL_DECODED; return; }
    static u8 fb[4096]; static float L[4096], R[4096]; int ns = 0, ok = 0;
    if (a->ba <= (int)sizeof fb) {
        if (a->f) { fseek(a->f, (long)(a->data_off + a->cur * (u32)a->ba), SEEK_SET); ok = fread(fb, 1, (size_t)a->ba, a->f) == (size_t)a->ba; }
        else if (a->mem) { memcpy(fb, a->mem + a->data_off + a->cur * (u32)a->ba, (size_t)a->ba); ok = 1; } }
    int spf = a->codec ? 2048 : 1024;
    if (ok && a->dec && rs_patch_audio()) { int r = a->codec ? rs_at3p_decode(a->dec, L, R, &ns, fb, a->ba) : rs_at3_decode(a->dec, L, R, &ns, fb, a->ba); if (r < 0) ns = 0; }
    if (ns <= 0) { ns = spf; memset(L, 0, sizeof(float) * (size_t)ns); memset(R, 0, sizeof(float) * (size_t)ns); }
    if (a->ch == 1) memcpy(R, L, sizeof(float) * (size_t)ns);
    if (out) { s16 *o = (s16 *)(g_mem + GADDR(out)); for (int i = 0; i < ns; i++) { int l = (int)(L[i] * 32768.0f), r = (int)(R[i] * 32768.0f); o[i * 2] = clamp16(l); o[i * 2 + 1] = clamp16(r); } }
    a->cur++;
    int fin = a->cur >= a->nframes; if (fin) a->done = 1;
    if (pn) SW(pn, (u32)ns); if (pfin) SW(pfin, (u32)fin); if (prem) SW(prem, (u32)-1);
    V0_ = 0; }
