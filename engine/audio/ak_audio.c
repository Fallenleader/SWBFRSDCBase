/* Audio: banks, VAG decoding, the mixer, music.  See ak_audio.h. */
#include "ak_audio.h"
#include "ak_music.h"
#include "../assets/asura.h"
#include "../core/ak_settings.h"
#include "../platform/plat.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

u32 ak_hash31(const char *s)
{
    u32 h = 0;
    for (; *s; s++) { u8 c = (u8)*s; if (c >= 'A' && c <= 'Z') c += 32; h = h * 31u + c; }
    return h;
}

/* ------------------------------------------------------------------ the bank */
typedef struct { u32 hash; const char *path; s16 *pcm; u32 len, rate; bool level; } snd_sample;   /* path: the RSCF name */
typedef struct {
    u32 hash; bool level; const char *name;
    f32 vol_min, vol_max, pitch_min, pitch_max, dmin, dmax;
    u32 nsamp; u32 samp[16];                           /* sample hashes */
} snd_event;

#define MAX_SAMPLES 1024
#define MAX_EVENTS  1024
static snd_sample samples[MAX_SAMPLES]; static u32 nsamples;
static snd_event  events[MAX_EVENTS];   static u32 nevents;

/* PSP VAG ADPCM -> s16 (a 48-byte big-endian header: data size at 12, rate at 16; 16-byte frames: predictor / shift, flags,
 * 14 bytes of 4-bit samples; flag 7 ends the data) */
static s16 *vag_decode(const u8 *b, u32 size, u32 *len, u32 *rate)
{
    if (size < 64 || memcmp(b, "VAGp", 4)) return NULL;
    u32 dsz = ((u32)b[12] << 24) | ((u32)b[13] << 16) | ((u32)b[14] << 8) | b[15];
    *rate = ((u32)b[16] << 24) | ((u32)b[17] << 16) | ((u32)b[18] << 8) | b[19];
    if (dsz > size - 48) dsz = size - 48;
    if (*rate < 4000 || *rate > 96000) *rate = 22050;
    u32 frames = dsz / 16; s16 *out = ak_plat_alloc(frames * 28 * sizeof(s16) + 2, 16); if (!out) return NULL;
    static const int F[5][2] = { { 0, 0 }, { 60, 0 }, { 115, -52 }, { 98, -55 }, { 122, -60 } };
    int s1 = 0, s2 = 0; u32 n = 0; const u8 *d = b + 48;
    for (u32 f = 0; f < frames; f++, d += 16) {
        int pr = d[0] >> 4, sh = d[0] & 15, fl = d[1];
        if (fl == 7) break;
        if (pr > 4) pr = 0;
        for (int i = 0; i < 14; i++) for (int k = 0; k < 2; k++) {
            int nib = k ? d[2 + i] >> 4 : d[2 + i] & 15;
            int s = (s16)(nib << 12); s >>= sh; s += (s1 * F[pr][0] + s2 * F[pr][1]) >> 6;
            if (s > 32767) s = 32767; else if (s < -32768) s = -32768;
            out[n++] = (s16)s; s2 = s1; s1 = s;
        }
    }
    *len = n; return out;
}

static const char *cstr(const u8 *b, u32 size, u32 *p)       /* a zero-ended string padded to 4 */
{
    if (*p >= size) return NULL;
    const char *s = (const char *)b + *p; size_t n = strnlen(s, size - *p); if (n == size - *p) return NULL;
    *p += (u32)((n + 1 + 3) & ~(size_t)3); return s;
}
static f32 rdf(const u8 *b) { f32 f; u32 v = ak_rd32(b); memcpy(&f, &v, 4); return f; }

static snd_sample *sample_find(u32 h) { for (u32 i = nsamples; i-- > 0;) if (samples[i].hash == h) return &samples[i]; return NULL; }
static snd_event  *event_find(u32 h)  { for (u32 i = nevents; i-- > 0;) if (events[i].hash == h) return &events[i]; return NULL; }   /* (level ones last: they win) */

u32 ak_audio_bank_add(const ak_blob *f, bool level)
{
    if (!ak_asura_check(f)) return 0;
    /* the RSCF sounds first (by name), then the samples that name them, then the events */
    typedef struct { const char *name; const u8 *data; u32 size; } res;
    static res rs[1024]; u32 nr = 0, added = 0;
    u32 pos = 8; ak_chunk c;
    while (ak_asura_next(f, &pos, &c)) {
        if (ak_chunk_tag(&c) == AK_TAG('R', 'S', 'C', 'F')) {
            ak_rscf r; if (ak_rscf_parse(&c, &r) && r.type == AK_RSCF_SOUND && nr < 1024) rs[nr++] = (res){ r.name, r.data, r.size };
        }
    }
    pos = 8;
    while (ak_asura_next(f, &pos, &c)) {
        u32 tag = ak_chunk_tag(&c), p = 0;
        if (tag == AK_TAG('S', 'D', 'S', 'M') && nsamples < MAX_SAMPLES) {
            const char *nm = cstr(c.body, c.size, &p); p += 4; const char *path = cstr(c.body, c.size, &p);
            if (!nm || !path) continue;
            for (u32 i = 0; i < nr; i++) if (!strcmp(rs[i].name, path)) {
                snd_sample *s = &samples[nsamples]; memset(s, 0, sizeof *s);
                s->pcm = vag_decode(rs[i].data, rs[i].size, &s->len, &s->rate);
                if (s->pcm && s->len) { s->hash = ak_hash31(nm); s->path = path; s->level = level; nsamples++; added++; }
                break;
            }
        } else if (tag == AK_TAG('S', 'D', 'E', 'V') && nevents < MAX_EVENTS) {
            /* name; volume min, max; pitch min, max; 0; 0; 0.5; 1; 1; u32 (2..4); u32 0x100; 0; distance min, max; n; n x {hash, 0} */
            const char *nm = cstr(c.body, c.size, &p);
            if (!nm || p + 64 > c.size) continue;
            const u8 *b = c.body + p; snd_event *e = &events[nevents]; memset(e, 0, sizeof *e);
            e->hash = ak_hash31(nm); e->level = level; e->name = nm;
            e->vol_min = rdf(b); e->vol_max = rdf(b + 4); e->pitch_min = rdf(b + 8); e->pitch_max = rdf(b + 12);
            e->dmin = rdf(b + 52); e->dmax = rdf(b + 56);
            u32 n = ak_rd32(b + 60); if (n > 16) n = 16;
            for (u32 i = 0; i < n && p + 64 + i * 8 + 4 <= c.size; i++) e->samp[e->nsamp++] = ak_rd32(b + 64 + i * 8);
            if (!(e->dmax > e->dmin)) e->dmax = e->dmin + 30.0f;
            if (e->vol_max < e->vol_min) e->vol_max = e->vol_min;
            nevents++; added++;
        }
    }
    return added;
}

/* ------------------------------------------------------------------ the mixer */
#define MAX_VOICES 48
typedef struct {
    u32 id; const snd_sample *s; u64 pos, step;        /* 32.32 fixed point */
    f32 gain, pan, user_gain, dmin, dmax, gl, gr;
    f32 p[3]; bool pos3d, loop, live;
} voice;
static voice voices[MAX_VOICES];
static u32 next_id = 1;
static f32 lis_pos[3], lis_yaw;
static f32 sfx_volume = 1.0f, music_volume = 0.6f;
static volatile int lock_flag;
static bool opened;
static u32 rng = 0x1234567u;

static void lock(void)   { while (__atomic_test_and_set(&lock_flag, __ATOMIC_ACQUIRE)) {} }
static void unlock(void) { __atomic_clear(&lock_flag, __ATOMIC_RELEASE); }
static f32 frand(void)   { rng = rng * 1664525u + 1013904223u; return (rng >> 8) / 16777216.0f; }

static void voice_gains(voice *v)                     /* distance fade and the pan to the listener */
{
    f32 g = v->gain * v->user_gain, pan = v->pan;
    if (v->pos3d) {
        f32 dx = v->p[0] - lis_pos[0], dy = v->p[1] - lis_pos[1], dz = v->p[2] - lis_pos[2], d = sqrtf(dx * dx + dy * dy + dz * dz);
        f32 a = d <= v->dmin ? 1.0f : d >= v->dmax ? 0.0f : 1.0f - (d - v->dmin) / (v->dmax - v->dmin);
        g *= a * a;                                    /* (a soft fall-off between the event's two distances) */
        f32 s = sinf(lis_yaw), c = cosf(lis_yaw), rx = c * dx - s * dz;   /* the listener's right is (cos yaw, 0, -sin yaw) */
        pan = d > 0.5f ? rx / d : 0.0f;
    }
    pan = pan < -1 ? -1 : pan > 1 ? 1 : pan;
    v->gl = g * sqrtf(0.5f * (1.0f - pan)); v->gr = g * sqrtf(0.5f * (1.0f + pan));
}

static u32 start(const char *event, const f32 *pos, f32 pan, f32 gain, bool loop)
{
    if (!event || !*event) return 0;
    snd_event *e = event_find(ak_hash31(event)); if (!e || !e->nsamp) return 0;
    const snd_sample *s = NULL;
    u32 first = e->nsamp > 1 ? (u32)(frand() * e->nsamp) : 0;               /* a random one of the event's samples */
    for (u32 tries = 0; tries < e->nsamp && !s; tries++) s = sample_find(e->samp[(first + tries) % e->nsamp]);
    if (!s) return 0;
    if (pos) {                                         /* out of earshot: not worth a voice (unless it loops: it may come near) */
        f32 dx = pos[0] - lis_pos[0], dy = pos[1] - lis_pos[1], dz = pos[2] - lis_pos[2];
        if (!loop && dx * dx + dy * dy + dz * dz > e->dmax * e->dmax) return 0;
    }
    lock();
    voice *v = NULL;
    for (u32 i = 0; i < MAX_VOICES && !v; i++) if (!voices[i].live) v = &voices[i];
    if (!v) {                                           /* all busy: take the quietest one-shot */
        f32 best = 1e9f;
        for (u32 i = 0; i < MAX_VOICES; i++) { f32 g = voices[i].gl + voices[i].gr; if (!voices[i].loop && g < best) { best = g; v = &voices[i]; } }
    }
    u32 id = 0;
    if (v) {
        memset(v, 0, sizeof *v);
        f32 pitch = e->pitch_min + (e->pitch_max - e->pitch_min) * frand();
        v->s = s; v->step = (u64)((double)s->rate * pitch / AK_AUDIO_RATE * 4294967296.0);
        v->gain = e->vol_min + (e->vol_max - e->vol_min) * frand(); v->user_gain = gain; v->pan = pan;
        v->dmin = e->dmin; v->dmax = e->dmax; v->loop = loop; v->live = true;
        if (pos) { memcpy(v->p, pos, 12); v->pos3d = true; }
        v->id = id = next_id++; if (!next_id) next_id = 1;
        voice_gains(v);
    }
    unlock();
    return id;
}

u32  ak_audio_play(const char *event, const f32 *pos, bool loop)        { return start(event, pos, 0, 1, loop); }
u32  ak_audio_play2d(const char *event, f32 pan, f32 gain, bool loop)   { return start(event, NULL, pan, gain, loop); }
const char *ak_audio_find(const char *prefix, const char *suffix, u32 nth)
{
    size_t lp = strlen(prefix), ls = strlen(suffix);
    for (u32 i = nevents; i-- > 0;) {
        const char *n = events[i].name; size_t l = n ? strlen(n) : 0;
        if (l >= lp + ls && !strncmp(n, prefix, lp) && !strcmp(n + l - ls, suffix) && nth-- == 0) return n;
    }
    return NULL;
}
bool ak_audio_has(const char *event) { return event && event_find(ak_hash31(event)) != NULL; }

static voice *by_id(u32 id) { if (!id) return NULL; for (u32 i = 0; i < MAX_VOICES; i++) if (voices[i].live && voices[i].id == id) return &voices[i]; return NULL; }
void ak_audio_move(u32 h, const f32 *pos) { lock(); voice *v = by_id(h); if (v && pos) { memcpy(v->p, pos, 12); v->pos3d = true; voice_gains(v); } unlock(); }
void ak_audio_gain(u32 h, f32 g)          { lock(); voice *v = by_id(h); if (v) { v->user_gain = g; voice_gains(v); } unlock(); }
void ak_audio_stop(u32 h)                 { lock(); voice *v = by_id(h); if (v) v->live = false; unlock(); }
bool ak_audio_playing(u32 h)              { lock(); bool r = by_id(h) != NULL; unlock(); return r; }

void ak_audio_listener(const f32 *pos, f32 yaw)
{
    lock(); memcpy(lis_pos, pos, 12); lis_yaw = yaw;
    for (u32 i = 0; i < MAX_VOICES; i++) if (voices[i].live) voice_gains(&voices[i]);
    unlock();
}

void ak_audio_level_reset(void)
{
    ak_audio_music(NULL, 0, false);
    lock();
    for (u32 i = 0; i < MAX_VOICES; i++) voices[i].live = false;
    u32 n = 0;
    for (u32 i = 0; i < nsamples; i++) { if (samples[i].level) ak_plat_free(samples[i].pcm); else samples[n++] = samples[i]; }
    nsamples = n; n = 0;
    for (u32 i = 0; i < nevents; i++) if (!events[i].level) events[n++] = events[i];
    nevents = n;
    unlock();
}

/* the mix: every live voice, resampled (linear) to 48 kHz, plus the music; s32 accumulators, clipped once */
void ak_audio_mix(s16 *out, u32 frames)
{
    static s32 acc[2 * 1024];
    while (frames) {
        u32 n = frames > 1024 ? 1024 : frames;
        memset(acc, 0, n * 2 * sizeof(s32));
        lock();
        for (u32 i = 0; i < MAX_VOICES; i++) {
            voice *v = &voices[i]; if (!v->live) continue;
            const s16 *pcm = v->s->pcm; u64 len = (u64)v->s->len << 32;
            s32 gl = (s32)(v->gl * sfx_volume * 4096), gr = (s32)(v->gr * sfx_volume * 4096);
            for (u32 k = 0; k < n; k++) {
                if (v->pos >= len) { if (v->loop) v->pos -= len; else { v->live = false; break; } }
                u32 ip = (u32)(v->pos >> 32), fr = (u32)(v->pos >> 20) & 4095;
                s32 a = pcm[ip], b = ip + 1 < v->s->len ? pcm[ip + 1] : (v->loop ? pcm[0] : 0);
                s32 smp = a + (((b - a) * (s32)fr) >> 12);
                acc[2 * k] += (smp * gl) >> 12; acc[2 * k + 1] += (smp * gr) >> 12;
                v->pos += v->step;
            }
        }
        unlock();
        ak_music_mix(acc, n, music_volume);
        for (u32 k = 0; k < 2 * n; k++) { s32 s = acc[k]; out[k] = (s16)(s > 32767 ? 32767 : s < -32768 ? -32768 : s); }
        out += 2 * n; frames -= n;
    }
}

static void platform_cb(s16 *out, u32 frames, void *u) { (void)u; ak_audio_mix(out, frames); }

bool ak_audio_init(void)
{
    sfx_volume = ak_setting_float("AK_SFX_VOLUME", 1.0f);
    music_volume = ak_setting_float("AK_MUSIC_VOLUME", 0.6f);
    if (!ak_setting_int("AK_AUDIO", 1)) return false;
    if (getenv("AK_AUDIO_DUMP")) return false;                    /* (tests render the mix to a file instead) */
    opened = ak_plat_audio_open(AK_AUDIO_RATE, platform_cb, NULL);
    if (!opened) AK_WARN("audio", "no audio output; running silent");
    return opened;
}
void ak_audio_shutdown(void) { if (opened) ak_plat_audio_close(); opened = false; ak_audio_level_reset(); }

void ak_audio_music(const u8 *data, u32 size, bool loop) { ak_music_start(data, size, loop); }
bool ak_audio_music_playing(void) { return ak_music_active(); }

/* MMUS: u32 lists; per list a name, a hash, a block of state words, then its files - "Sounds\\Music\\mxAllHot01_Amb02_lp.wav"
 * and an f32 each.  The files live as SOUNDS/MUSIC/<NAME>.AT3 (upper case, ATRAC3plus).  This walks the strings in order. */
bool ak_audio_level_music(const ak_blob *f, const char *list, u32 nth, char *path, u32 size)
{
    if (!ak_asura_check(f)) return false;
    u32 pos = 8; ak_chunk c;
    while (ak_asura_next(f, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('M', 'M', 'U', 'S')) continue;
        bool in = false; u32 k = 0;
        for (u32 p = 4; p + 4 <= c.size; ) {
            const char *s = (const char *)c.body + p; u32 n = 0;
            while (p + n < c.size && s[n] >= 32 && s[n] < 127) n++;
            if (n >= 4 && p + n < c.size && s[n] == 0) {
                bool file = !strncmp(s, "Sounds\\", 7) || !strncmp(s, "sounds\\", 7);
                if (!file) { char nm[64]; u32 m = n < 63 ? n : 63; memcpy(nm, s, m); nm[m] = 0; while (m && nm[m - 1] == ' ') nm[--m] = 0; in = !strcmp(nm, list); k = 0; }
                else if (in && k++ == nth) {
                    const char *b = strrchr(s, '\\'); b = b ? b + 1 : s;
                    u32 o = (u32)snprintf(path, size, "PSP_GAME/USRDIR/SOUNDS/MUSIC/");
                    for (; *b && *b != '.' && o + 5 < size; b++) path[o++] = (*b >= 'a' && *b <= 'z') ? (char)(*b - 32) : *b;
                    snprintf(path + o, size - o, ".AT3");
                    return true;
                }
                p += (n + 1 + 3) & ~3u; continue;
            }
            p += 4;
        }
    }
    return false;
}
