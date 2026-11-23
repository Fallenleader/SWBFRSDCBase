/* Audio: banks, VAG decoding, the mixer, music.  See ak_audio.h. */
#include "ak_audio.h"
#include "ak_adp.h"
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
typedef struct { u32 hash; const char *path; s16 *pcm; u32 len, rate; bool level; const u8 *vag; s16 first; u32 aram; } snd_sample;   /* path: the RSCF name */
/* vag (AK_AUDIO_ADPCM, the small-memory consoles' default): no pcm; the voice decodes the VAG frames as it plays them (the same
 * values as the whole-sample decode), from the bank file, which stays loaded.  first: sample 0 (a loop's wrap reads it).
 * aram (AK_HAS_ARAM): the frames are in the GameCube's audio memory instead (vag NULL), read back a block at a time. */
typedef struct {
    u32 hash; bool level; const char *name;
    f32 vol_min, vol_max, pitch_min, pitch_max, dmin, dmax;
    u32 nsamp; u32 samp[16]; bool samp_ev[16];         /* sample hashes (samp_ev: an event's instead) */
    s32 group;                                         /* the SDMX mixer group, -1 = none (Master) */
} snd_event;
/* the mixer (SDMX, in the shared bank): groups under Master, and snapshots of their volumes the game moves between */
#define MAX_GROUPS 16
#define MAX_SNAPS 8
static struct { u32 hash; char name[32]; f32 cur, target, rate; } groups[MAX_GROUPS]; static u32 ngroups;
static struct { u32 hash; f32 vol[MAX_GROUPS]; } snaps[MAX_SNAPS]; static u32 nsnaps;
static s32 group_of(u32 h) { for (u32 i = 0; i < ngroups; i++) if (groups[i].hash == h) return (s32)i; return -1; }

#define MAX_SAMPLES 1024
#define MAX_EVENTS  1024
static snd_sample samples[MAX_SAMPLES]; static u32 nsamples;
#ifdef AK_HAS_ARAM
static u32 aram_shared;                                 /* ARAM's top after the shared bank: a level's sounds start there */
#endif
static snd_event  events[MAX_EVENTS];   static u32 nevents;

/* PSP VAG ADPCM -> s16 (a 48-byte big-endian header: data size at 12, rate at 16; 16-byte frames: predictor / shift, flags,
 * 14 bytes of 4-bit samples; flag 7 ends the data) */
static void vag_frame(const u8 *d, s16 *out, s32 *h1, s32 *h2)   /* one 16-byte frame: 28 samples */
{
    static const int F[5][2] = { { 0, 0 }, { 60, 0 }, { 115, -52 }, { 98, -55 }, { 122, -60 } };
    int pr = d[0] >> 4, sh = d[0] & 15; s32 s1 = *h1, s2 = *h2;
    if (pr > 4) pr = 0;
    for (int i = 0; i < 14; i++) for (int k = 0; k < 2; k++) {
        int nib = k ? d[2 + i] >> 4 : d[2 + i] & 15;
        int s = (s16)(nib << 12); s >>= sh; s += (s1 * F[pr][0] + s2 * F[pr][1]) >> 6;
        if (s > 32767) s = 32767; else if (s < -32768) s = -32768;
        *out++ = (s16)s; s2 = s1; s1 = s;
    }
    *h1 = s1; *h2 = s2;
}
static s16 *vag_decode(const u8 *b, u32 size, u32 *len, u32 *rate, const u8 **out_frames)
{
    if (size < 64 || memcmp(b, "VAGp", 4)) return NULL;
    u32 dsz = ((u32)b[12] << 24) | ((u32)b[13] << 16) | ((u32)b[14] << 8) | b[15];
    *rate = ((u32)b[16] << 24) | ((u32)b[17] << 16) | ((u32)b[18] << 8) | b[19];
    if (dsz > size - 48) dsz = size - 48;
    if (*rate < 4000 || *rate > 96000) *rate = 22050;
    u32 frames = dsz / 16;
    if (out_frames) {                                   /* (decode as it plays: the frames up to the end flag) */
        u32 n = 0; while (n < frames && b[48 + 16 * n + 1] != 7) n++;
        *out_frames = b + 48; *len = n * 28; return NULL;
    }
    s16 *out = ak_plat_alloc(frames * 28 * sizeof(s16) + 2, 16); if (!out) return NULL;
    s32 s1 = 0, s2 = 0; u32 n = 0; const u8 *d = b + 48;
    for (u32 f = 0; f < frames; f++, d += 16) {
        if (d[1] == 7) break;
        vag_frame(d, out + n, &s1, &s2); n += 28;
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
    static ak_rscf rs[1024]; u32 nr = 0, added = 0;   /* (the data read when used: a streamed bank's are on the disc) */
    u32 pos = 8; ak_chunk c;
    while (ak_asura_next(f, &pos, &c)) {
        if (ak_chunk_tag(&c) == AK_TAG('R', 'S', 'C', 'F')) {
            ak_rscf r; if (ak_rscf_parse(&c, &r) && r.type == AK_RSCF_SOUND && nr < 1024) rs[nr++] = r;
        }
    }
#ifdef AK_HAS_ARAM
    if (!level) aram_shared = 0; else if (!aram_shared) aram_shared = ak_plat_aram_mark();   /* (a level's go back at its reset) */
#endif
    pos = 8;                                            /* the mixer first: the events name its groups */
    while (ak_asura_next(f, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('S', 'D', 'M', 'X') || c.size < 8) continue;
        /* f32 master; u32 n; n x { name, parent name, f32 volume, f32, f32, u32 }; u32 snapshots; each: name, u32 0, u32 n, n x { group
         * name, u32 hash, f32 volume, f32, f32, u32 } (func 0882D090) */
        u32 q = 4, n = ak_rd32(c.body + 4); q = 8; ngroups = 0; nsnaps = 0;
        if (ak_setting_int("AK_DEBUG_AUDIO", 0)) AK_INFO("audio", "mixer master %.3f", rdf(c.body));
        for (u32 i = 0; i < n && q < c.size; i++) {
            const char *g = cstr(c.body, c.size, &q), *par = cstr(c.body, c.size, &q); if (!g || q + 16 > c.size) break;
            if (ak_setting_int("AK_DEBUG_AUDIO", 0)) AK_INFO("audio", "group %s under %s: %.3f %.3f %.3f %u", g, par ? par : "-", rdf(c.body + q), rdf(c.body + q + 4), rdf(c.body + q + 8), ak_rd32(c.body + q + 12));
            if (ngroups < MAX_GROUPS) { u32 k = ngroups++; snprintf(groups[k].name, sizeof groups[k].name, "%s", g); groups[k].hash = ak_hash31(g);
                                        groups[k].cur = groups[k].target = rdf(c.body + q); groups[k].rate = 0; }
            q += 16;
        }
        u32 ns = q + 4 <= c.size ? ak_rd32(c.body + q) : 0; q += 4;
        for (u32 s = 0; s < ns && q < c.size; s++) {
            const char *sn = cstr(c.body, c.size, &q); if (!sn || q + 8 > c.size) break;
            u32 m = ak_rd32(c.body + q + 4); q += 8;                              /* (u32 0, then the count) */
            u32 k = nsnaps < MAX_SNAPS ? nsnaps++ : MAX_SNAPS - 1; snaps[k].hash = ak_hash31(sn);
            if (ak_setting_int("AK_DEBUG_AUDIO", 0)) AK_INFO("audio", "snapshot %s: %u groups", sn, m);
            for (u32 j = 0; j < MAX_GROUPS; j++) snaps[k].vol[j] = 1.0f;
            for (u32 j = 0; j < m && q < c.size; j++) {
                cstr(c.body, c.size, &q); if (q + 20 > c.size) break;
                s32 gi = group_of(ak_rd32(c.body + q)); if (gi >= 0) snaps[k].vol[gi] = rdf(c.body + q + 4);
                q += 20;
            }
        }
        AK_INFO("audio", "mixer: %u groups, %u snapshots", ngroups, nsnaps);
    }
    pos = 8;
    while (ak_asura_next(f, &pos, &c)) {
        u32 tag = ak_chunk_tag(&c), p = 0;
        if (tag == AK_TAG('S', 'D', 'S', 'M') && nsamples < MAX_SAMPLES) {
            const char *nm = cstr(c.body, c.size, &p); p += 4; const char *path = cstr(c.body, c.size, &p);
            if (!nm || !path) continue;
            for (u32 i = 0; i < nr; i++) if (!strcmp(rs[i].name, path)) {
                snd_sample *s = &samples[nsamples]; memset(s, 0, sizeof *s);
                static int adpcm = -1; if (adpcm < 0) adpcm = ak_setting_int("AK_AUDIO_ADPCM", AK_SMALL_MEMORY);
                const u8 *vb = ak_rscf_bytes(&rs[i]); if (!vb) break;
                s->pcm = vag_decode(vb, rs[i].size, &s->len, &s->rate, adpcm ? &s->vag : NULL);
                if (s->vag && s->len) { s16 f0[28]; s32 h1 = 0, h2 = 0; vag_frame(s->vag, f0, &h1, &h2); s->first = f0[0]; }
#ifdef AK_HAS_ARAM
                static int to_aram = -1; if (to_aram < 0) to_aram = ak_setting_int("AK_AUDIO_ARAM", 1);
                if (to_aram && s->vag && s->len && (s->aram = ak_plat_aram_store(s->vag, (s->len / 28) * 16))) s->vag = NULL;
                else if (s->vag && !rs[i].data) { s->vag = NULL; s->len = 0; }          /* (ARAM full: a streamed one's bytes do not stay) */
#endif
                if ((s->pcm || s->vag || s->aram) && s->len) { s->hash = ak_hash31(nm); s->path = path; s->level = level; nsamples++; added++; }
                break;
            }
        } else if (tag == AK_TAG('S', 'D', 'E', 'V') && nevents < MAX_EVENTS) {
            /* (the game's loader, func 0882C824, version 4) name; 9 f32: volume min, max, pitch min, max, ...; u32 kind; 4 u8;
             * u32; f32 distance min, max; u32 n; n x { u32 hash, u32 0 = a sample / else an event }; kind 5: 6 f32; the mixer
             * group's name ("Master": none); two names more, u8, u8, a name */
            const char *nm = cstr(c.body, c.size, &p);
            if (!nm || p + 0x3C > c.size) continue;
            const u8 *b = c.body + p; snd_event *e = &events[nevents]; memset(e, 0, sizeof *e);
            e->hash = ak_hash31(nm); e->level = level; e->name = nm; e->group = -1;
            e->vol_min = rdf(b); e->vol_max = rdf(b + 4); e->pitch_min = rdf(b + 8); e->pitch_max = rdf(b + 12);
            e->dmin = rdf(b + 0x30); e->dmax = rdf(b + 0x34);
            u32 kind = ak_rd32(b + 0x24), n = ak_rd32(b + 0x38), q = p + 0x3C;
            for (u32 i = 0; i < n && q + 8 <= c.size; i++, q += 8) if (e->nsamp < 16) { e->samp_ev[e->nsamp] = ak_rd32(c.body + q + 4) != 0; e->samp[e->nsamp++] = ak_rd32(c.body + q); }
            if (kind == 5) q += 24;
            if (q < c.size) { const char *g = cstr(c.body, c.size, &q); if (g) e->group = group_of(ak_hash31(g)); }
            if (!(e->dmax > e->dmin)) e->dmax = e->dmin + 30.0f;
            if (e->vol_max < e->vol_min) e->vol_max = e->vol_min;
            if (ak_setting_int("AK_DEBUG_AUDIO", 0) > 1) AK_INFO("audio", "event %s: dist %.1f..%.1f, %u samples, group %d, first found %d", nm, e->dmin, e->dmax, e->nsamp, e->group, e->nsamp && (e->samp_ev[0] || sample_find(e->samp[0])));
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
    f32 p[3]; bool pos3d, loop, live; s32 group;
    u32 wf1; s32 h1, h2; s16 win[56];                   /* a VAG sample's: frames wf1 - 1 and wf1 decoded (0: none), the history after them */
#ifdef AK_HAS_ARAM
    u8 blk[512] __attribute__((aligned(32))); u32 blk_f1; /* an ARAM sample's: 32 frames from frame blk_f1 - 1 (0: none) */
#endif
} voice;
static void vag_next(voice *v, s16 *out, u32 f)        /* frame f (silence past the end) */
{
    if (f >= v->s->len / 28) { memset(out, 0, 28 * sizeof(s16)); return; }
#ifdef AK_HAS_ARAM
    if (!v->s->vag) {
        if (!v->blk_f1 || f + 1 < v->blk_f1 || f >= v->blk_f1 - 1 + 32) { u32 f0 = f & ~1u; ak_plat_aram_read(v->blk, v->s->aram + 16 * f0, sizeof v->blk); v->blk_f1 = f0 + 1; }
        vag_frame(v->blk + 16 * (f - (v->blk_f1 - 1)), out, &v->h1, &v->h2); return;
    }
#endif
    vag_frame(v->s->vag + 16 * f, out, &v->h1, &v->h2);
}
static s32 vag_at(voice *v, u32 i)                      /* sample i of a VAG voice: decoded forward, two frames held */
{
    u32 f = i / 28;
    if (!v->wf1 || f + 1 < v->wf1) {                    /* (start, or back to the start after a loop) */
        v->h1 = v->h2 = 0; vag_next(v, v->win, 0); vag_next(v, v->win + 28, 1); v->wf1 = 1;
    }
    while (f >= v->wf1 + 1) {
        memcpy(v->win, v->win + 28, 28 * sizeof(s16)); v->wf1++;
        vag_next(v, v->win + 28, v->wf1);
    }
    return v->win[i - 28 * (v->wf1 - 1)];
}
static voice voices[MAX_VOICES];
static u32 next_id = 1;
static f32 lis_pos[3], lis_yaw;
static f32 sfx_volume = 1.0f, music_volume = 0.5625f, user_master = 1.0f, user_music = 1.0f, user_sfx = 1.0f;   /* user_*: the profile's volumes (options menu) */
void ak_audio_set_volumes(f32 master, f32 music, f32 sfx) { user_master = master; user_music = music; user_sfx = sfx; }
static volatile int lock_flag;
static bool opened;
static u32 rng = 0x1234567u;

static void lock(void)                          /* (yields after a while: on one core a spinning thread would starve the holder) */
{
    for (u32 n = 0; __atomic_test_and_set(&lock_flag, __ATOMIC_ACQUIRE); n++) if (n > 64) ak_plat_sleep_us(50);
}
static void unlock(void) { __atomic_clear(&lock_flag, __ATOMIC_RELEASE); }
static f32 frand(void)   { rng = rng * 1664525u + 1013904223u; return (rng >> 8) / 16777216.0f; }

static void voice_gains(voice *v)                     /* distance fade and the pan to the listener */
{
    f32 g = v->gain * v->user_gain, pan = v->pan;
    if (v->pos3d) {
        f32 dx = v->p[0] - lis_pos[0], dy = v->p[1] - lis_pos[1], dz = v->p[2] - lis_pos[2], d = sqrtf(dx * dx + dy * dy + dz * dz);
        f32 a = d <= v->dmin ? 1.0f : d >= v->dmax ? 0.0f : 1.0f - (d - v->dmin) / (v->dmax - v->dmin);
        g *= a;                                        /* (linear between the event's two distances: 088DC6BC - 1 inside the near one,
                                                          (max - d) / (max - min) between, 0 beyond; no Doppler, no occlusion) */
        f32 s = sinf(lis_yaw), c = cosf(lis_yaw), rx = c * dx - s * dz;   /* the listener's right is (cos yaw, 0, -sin yaw) */
        pan = d > 0.5f ? rx / d : 0.0f;
    }
    pan = pan < -1 ? -1 : pan > 1 ? 1 : pan;
    v->gl = g * sqrtf(0.5f * (1.0f - pan)); v->gr = g * sqrtf(0.5f * (1.0f + pan));
}

static u32 start(const char *event, const f32 *pos, f32 pan, f32 gain, bool loop)
{
    if (!event || !*event) return 0;
    snd_event *e = event_find(ak_hash31(event)); if (!e || !e->nsamp) { AK_VERBOSE("audio", "event %s: none", event); return 0; }
    AK_VERBOSE("audio", "event %s%s", event, pos ? "" : " (2D)");
    const snd_sample *s = NULL;
    u32 first = e->nsamp > 1 ? (u32)(frand() * e->nsamp) : 0;               /* a random one of the event's samples */
    for (u32 tries = 0; tries < e->nsamp && !s; tries++) {
        u32 k = (first + tries) % e->nsamp;
        if (!e->samp_ev[k]) s = sample_find(e->samp[k]);
        else { const snd_event *x = event_find(e->samp[k]); for (u32 j = 0; x && j < x->nsamp && !s; j++) if (!x->samp_ev[j]) s = sample_find(x->samp[j]); }
    }
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
        v->dmin = e->dmin; v->dmax = e->dmax; v->loop = loop; v->live = true; v->group = e->group;
        if (pos) { memcpy(v->p, pos, 12); v->pos3d = true; }
        v->id = id = next_id++; if (!next_id) next_id = 1;
        voice_gains(v);
    }
    unlock();
    return id;
}

/* ---- sounds played from converted WAV files (speech): loaded on first use, kept while memory allows (8 MB), least recently
 * used first out - never one a voice is playing */
#define MAX_FILES 96
static struct { char path[192]; snd_sample s; u32 used; u32 bytes; } files[MAX_FILES]; static u32 nfiles, file_clock, file_bytes;
static bool sample_busy(const snd_sample *s) { for (u32 i = 0; i < MAX_VOICES; i++) if (voices[i].live && voices[i].s == s) return true; return false; }
static const snd_sample *file_add(const char *path, s16 *pcm, u32 frames, u32 rate);
static const snd_sample *file_sample(const char *path)
{
    for (u32 i = 0; i < nfiles; i++) if (!strcmp(files[i].path, path)) { files[i].used = ++file_clock; return &files[i].s; }
    FILE *f = fopen(path, "rb");
    if (!f) {                                          /* the 3DS's converted copies are DSP-ADPCM (.adp) where the others have .wav */
        size_t pl = strlen(path); char ap[256];
        if (pl < 4 || pl >= sizeof ap || strcmp(path + pl - 4, ".wav")) return NULL;
        memcpy(ap, path, pl - 4); memcpy(ap + pl - 4, ".adp", 5);
        u32 fr = 0, rt = 0; s16 *pc = ak_adp_load_mono(ap, &fr, &rt);
        return pc ? file_add(path, pc, fr, rt) : NULL;
    }
    u8 h[256]; size_t n = fread(h, 1, sizeof h, f);
    u32 rate = 0, ch = 0, bits = 0, doff = 0, dlen = 0;
    if (n >= 44 && !memcmp(h, "RIFF", 4) && !memcmp(h + 8, "WAVE", 4))
        for (u32 p = 12; p + 8 <= n;) {
            u32 len = ak_rd32(h + p + 4);
            if (!memcmp(h + p, "fmt ", 4) && p + 24 <= n) { ch = ak_rd16(h + p + 10); rate = ak_rd32(h + p + 12); bits = ak_rd16(h + p + 22); }
            else if (!memcmp(h + p, "data", 4)) { doff = p + 8; dlen = len; break; }
            p += 8 + len + (len & 1);
        }
    if (!doff || bits != 16 || (ch != 1 && ch != 2) || !rate) { fclose(f); return NULL; }
    u32 frames = dlen / (2 * ch); s16 *pcm = ak_plat_alloc((size_t)frames * 2 + 2, 16), *tmp = ch == 2 ? ak_plat_alloc((size_t)frames * 4, 16) : NULL;
    if (!pcm || (ch == 2 && !tmp)) { fclose(f); if (pcm) ak_plat_free(pcm); if (tmp) ak_plat_free(tmp); return NULL; }
    fseek(f, (long)doff, SEEK_SET);
    if (ch == 1) { frames = (u32)fread(pcm, 2, frames, f); if (AK_BIG_ENDIAN) for (u32 i = 0; i < frames; i++) pcm[i] = (s16)ak_le16((u16)pcm[i]); }
    else { frames = (u32)fread(tmp, 4, frames, f);
           for (u32 i = 0; i < frames; i++) pcm[i] = (s16)(((s16)ak_le16((u16)tmp[2 * i]) + (s16)ak_le16((u16)tmp[2 * i + 1])) / 2); ak_plat_free(tmp); }
    fclose(f);
    return file_add(path, pcm, frames, rate);
}
static const snd_sample *file_add(const char *path, s16 *pcm, u32 frames, u32 rate)
{
    u32 bytes = frames * 2;
    lock();
    while ((nfiles == MAX_FILES || file_bytes + bytes > ((u32)ak_setting_int("AK_SPEECH_CACHE_MB", 8) << 20)) && nfiles) {   /* make room: the least recently used idle one */
        s32 old = -1; for (u32 i = 0; i < nfiles; i++) if (!sample_busy(&files[i].s) && (old < 0 || files[i].used < files[(u32)old].used)) old = (s32)i;
        if (old < 0) break;
        ak_plat_free(files[old].s.pcm); file_bytes -= files[old].bytes; files[old] = files[--nfiles];
    }
    const snd_sample *r = NULL;
    if (nfiles < MAX_FILES) {
        u32 i = nfiles++; snprintf(files[i].path, sizeof files[i].path, "%s", path);
        files[i].s = (snd_sample){ 0, files[i].path, pcm, frames, rate, false }; files[i].used = ++file_clock; files[i].bytes = bytes;
        file_bytes += bytes; r = &files[i].s;
    } else ak_plat_free(pcm);
    unlock();
    return r;
}

u32 ak_audio_play_wav(const char *path, const char *group, const f32 *pos, f32 gain, f32 dmin, f32 dmax, u32 skip)
{
    const snd_sample *s = file_sample(path); if (!s) return 0;
    lock();
    voice *v = NULL; for (u32 i = 0; i < MAX_VOICES && !v; i++) if (!voices[i].live) v = &voices[i];
    u32 id = 0;
    if (v) {
        memset(v, 0, sizeof *v);
        v->s = s; v->step = (u64)((double)s->rate / AK_AUDIO_RATE * 4294967296.0); v->pos = (u64)(skip < s->len ? skip : 0) << 32;
        v->gain = 1.0f; v->user_gain = gain; v->dmin = dmin; v->dmax = dmax > dmin ? dmax : dmin + 1; v->live = true;
        v->group = group ? group_of(ak_hash31(group)) : -1;
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
    ak_music_stop();
    lock();
    for (u32 i = 0; i < MAX_VOICES; i++) voices[i].live = false;
    u32 n = 0;
    for (u32 i = 0; i < nsamples; i++) { if (samples[i].level) ak_plat_free(samples[i].pcm); else samples[n++] = samples[i]; }
#ifdef AK_HAS_ARAM
    if (aram_shared) ak_plat_aram_release(aram_shared);
    aram_shared = 0;
#endif
    nsamples = n; n = 0;
    for (u32 i = 0; i < nevents; i++) if (!events[i].level) events[n++] = events[i];
    nevents = n;
    unlock();
}

/* the mix: every live voice, resampled (linear) to 48 kHz, plus the music; s32 accumulators, clipped once */
/* ---- a movie's sound: a ring of source frames, resampled into the mix (linear, as the voices) */
#define MV_RING (1u << 17)
static s16 *mv_ring; static volatile u32 mv_w, mv_r; static u64 mv_pos, mv_step; static volatile u64 mv_played; static f32 mv_gain; static bool mv_open;
bool ak_audio_movie_open(u32 rate, f32 gain)
{
    if (!opened || !rate) return false;
    if (!mv_ring && !(mv_ring = (s16 *)malloc(MV_RING * 4))) return false;
    lock(); mv_w = mv_r = 0; mv_pos = 0; mv_played = 0; mv_step = ((u64)rate << 32) / AK_AUDIO_RATE; mv_gain = gain; mv_open = true; unlock();
    return true;
}
u32 ak_audio_movie_push(const s16 *pcm, u32 frames)
{
    if (!mv_open) return 0;
    u32 room = MV_RING - 1 - (mv_w - mv_r), n = frames < room ? frames : room, w = mv_w;
    for (u32 i = 0; i < n; i++) { u32 k = (w + i) & (MV_RING - 1); mv_ring[2 * k] = pcm[2 * i]; mv_ring[2 * k + 1] = pcm[2 * i + 1]; }
    __atomic_store_n(&mv_w, w + n, __ATOMIC_RELEASE);
    return n;
}
u64 ak_audio_movie_played(void) { return mv_open ? __atomic_load_n(&mv_played, __ATOMIC_ACQUIRE) : 0; }
u32 ak_audio_movie_queued(void) { return mv_open ? mv_w - mv_r : 0; }
void ak_audio_movie_close(void) { lock(); mv_open = false; unlock(); }
static void movie_mix(s32 *acc, u32 n)
{
    if (!mv_open) return;
    s32 g = (s32)(mv_gain * user_master * 4096);
    u32 r = mv_r, w = __atomic_load_n(&mv_w, __ATOMIC_ACQUIRE);
    for (u32 k = 0; k < n; k++) {
        u32 ip = (u32)(mv_pos >> 32);
        if (w - r < ip + 2) break;                                    /* (starved: silence until more comes) */
        u32 a = (r + ip) & (MV_RING - 1), b = (r + ip + 1) & (MV_RING - 1), fr = (u32)(mv_pos >> 20) & 4095;
        for (int c = 0; c < 2; c++) { s32 x = mv_ring[2 * a + c], y = mv_ring[2 * b + c]; acc[2 * k + c] += ((x + (((y - x) * (s32)fr) >> 12)) * g) >> 12; }
        mv_pos += mv_step;
        u32 adv = (u32)(mv_pos >> 32); if (adv) { r += adv; mv_pos &= 0xFFFFFFFFull; mv_played += adv; }
    }
    __atomic_store_n(&mv_r, r, __ATOMIC_RELEASE);
}

void ak_audio_mix(s16 *out, u32 frames)
{
    static s32 acc[2 * 1024];
    while (frames) {
        u32 n = frames > 1024 ? 1024 : frames;
        memset(acc, 0, n * 2 * sizeof(s32));
        lock();
        for (u32 g = 0; g < ngroups; g++) if (groups[g].cur != groups[g].target) {   /* snapshot fades */
            f32 d = groups[g].rate * (f32)n / AK_AUDIO_RATE, t = groups[g].target;
            groups[g].cur = groups[g].cur < t ? (groups[g].cur + d > t ? t : groups[g].cur + d) : (groups[g].cur - d < t ? t : groups[g].cur - d);
        }
        for (u32 i = 0; i < MAX_VOICES; i++) {
            voice *v = &voices[i]; if (!v->live) continue;
            const s16 *pcm = v->s->pcm; u64 len = (u64)v->s->len << 32;
            f32 gv = user_master * user_sfx * sfx_volume * (v->group >= 0 && (u32)v->group < ngroups ? groups[v->group].cur : 1.0f);
            s32 gl = (s32)(v->gl * gv * 4096), gr = (s32)(v->gr * gv * 4096);
            for (u32 k = 0; k < n; k++) {
                if (v->pos >= len) { if (v->loop) v->pos -= len; else { v->live = false; break; } }
                u32 ip = (u32)(v->pos >> 32), fr = (u32)(v->pos >> 20) & 4095;
                s32 a, b;
                if (pcm) { a = pcm[ip]; b = ip + 1 < v->s->len ? pcm[ip + 1] : (v->loop ? pcm[0] : 0); }
                else { a = vag_at(v, ip); b = ip + 1 < v->s->len ? vag_at(v, ip + 1) : (v->loop ? v->s->first : 0); }
                s32 smp = a + (((b - a) * (s32)fr) >> 12);
                acc[2 * k] += (smp * gl) >> 12; acc[2 * k + 1] += (smp * gr) >> 12;
                v->pos += v->step;
            }
        }
        s32 mg = group_of(0x0636EE25u);                 /* "Music" */
        f32 mv = user_master * user_music * music_volume * (mg >= 0 ? groups[mg].cur : 1.0f);
        unlock();
        ak_music_mix(acc, n, mv);
        lock(); movie_mix(acc, n); unlock();
        for (u32 k = 0; k < 2 * n; k++) { s32 s = acc[k]; out[k] = (s16)(s > 32767 ? 32767 : s < -32768 ? -32768 : s); }
        out += 2 * n; frames -= n;
    }
}

/* move the mixer to a snapshot ("default", "Dipping for speech", "UI Dip") over `fade` seconds, as the game does (func 088E0790) */
void ak_audio_snapshot(const char *name, f32 fade)
{
    u32 h = ak_hash31(name); lock();
    for (u32 s = 0; s < nsnaps; s++) if (snaps[s].hash == h)
        for (u32 g = 0; g < ngroups; g++) {
            groups[g].target = snaps[s].vol[g];
            f32 d = fabsf(groups[g].target - groups[g].cur); groups[g].rate = fade > 0 ? d / fade : 1e9f;
        }
    unlock();
}

static void platform_cb(s16 *out, u32 frames, void *u) { (void)u; ak_audio_mix(out, frames); }

bool ak_audio_init(void)
{
    sfx_volume = ak_setting_float("AK_SFX_VOLUME", 1.0f);
    /* the music's level (PARITY 7.1): measured against the original's own mix (harness RS_WAV_DUMP, Hoth's MXALLHOT01_AMB02:
       a least-squares fit of the track to the output, 0.555..0.567 over its loud passages) - 0.5625; the game's music mixer
       (0891260C) holds a master gain of 0.75 with one stream playing (0.5 while two cross-fade, moving 0.02 a step), times
       the stream's own volume.  The profile's volumes (master, music, sfx: +148 / +152 / +156) default to 1.0 (08977808). */
    music_volume = ak_setting_float("AK_MUSIC_VOLUME", 0.5625f);
    if (!ak_setting_int("AK_AUDIO", 1)) return false;
    if (getenv("AK_AUDIO_DUMP")) return false;                    /* (tests render the mix to a file instead) */
    opened = ak_plat_audio_open(AK_AUDIO_RATE, platform_cb, NULL);
    if (!opened) AK_WARN("audio", "no audio output; running silent");
    return opened;
}
void ak_audio_shutdown(void) { if (opened) ak_plat_audio_close(); opened = false; ak_audio_level_reset(); }

/* music: the converted WAV of a track (converted/<game path>.wav in a data folder); the original's header gives the encoder delay
 * (fact) and the loop (smpl), in the decoded stream's samples, which the converted copy keeps */
bool ak_audio_music_play(const char *game_path, const u8 *head, u32 hsize, bool loop)
{
    u32 delay = 0, ls = 0, le = 0;
    if (head && hsize >= 12 && !memcmp(head, "RIFF", 4))
        for (u32 p = 12; p + 8 <= hsize;) {
            u32 n = ak_rd32(head + p + 4); const u8 *b = head + p + 8;
            if (!memcmp(head + p, "fact", 4) && n >= 8 && p + 16 <= hsize) delay = ak_rd32(b + 4);
            else if (!memcmp(head + p, "smpl", 4) && n >= 60 && p + 68 <= hsize && ak_rd32(b + 28) > 0) { ls = ak_rd32(b + 44); le = ak_rd32(b + 48) + 1; }
            else if (!memcmp(head + p, "data", 4)) break;
            p += 8 + n + (n & 1);
        }
    int nd; const char *const *dirs = ak_plat_data_dirs(&nd);
    for (int i = 0; i < nd; i++) {
        char path[512]; int o = snprintf(path, sizeof path, "%s/converted/", dirs[i]);   /* (the converter writes the game path upper case) */
        for (const char *q = game_path; *q && o < (int)sizeof path - 5; q++) path[o++] = (*q >= 'a' && *q <= 'z') ? (char)(*q - 32) : *q;
        snprintf(path + o, sizeof path - (size_t)o, ".wav");
        if (ak_music_play_wav(path, loop, delay, ls, le)) { AK_INFO("audio", "music %s", path); return true; }
        snprintf(path + o, sizeof path - (size_t)o, ".adp");                          /* (the 3DS's DSP-ADPCM copies) */
        if (ak_music_play_adp(path, loop, delay, ls, le)) { AK_INFO("audio", "music %s", path); return true; }
    }
    AK_WARN("audio", "no converted copy of %s (run the media conversion: it writes converted/%s.wav)", game_path, game_path);
    return false;
}
void ak_audio_music_stop(void) { ak_music_stop(); }
bool ak_audio_music_playing(void) { return ak_music_active(); }

/* ---- which music the level starts, as the game decides it (traced).  In a game this console runs (single player, or the
 * host: the session's script callback set, func 08970FB0), the level script picks it: a timer entity (type 1, 0 s) fires a
 * message group (SMSG) that activates a selector (type 0xB, flags 1: a weighted random pick, func 08870E0C), whose six entries
 * are groups that each activate one music entity (type 0x1F: the list hash and flags - 0x10 play the list, then state 4 / 7 / 10
 * for flag 2 / 4 / 8; func 0886F41C).  A list's states 4, 7 and 10 are its loops, one file each (MMUS).  Without a script
 * the code picks "OGM Music 1" or "2" itself at state 4 (func 08972170).
 * SMSG (the entities use side 0): u32 groups; u32 side (version >= 2); a u8 count per group; then messages: u16 type, u16 extra
 * size, u32 target entity, three u32 more (version 6); then the extra bytes, padded to 4, when the chunk's flag 1 is clear.
 * ENTI: u32 id, u32 type, 16 bytes common; type 0x1F: u32 version, u32 list hash, u32 flags; type 0xB: u32 version, u32 flags,
 * u32 n, n x { u32 group | 0x10000 enabled, u32 weight }; type 1: u32 version (4), 5 x s16 groups (the one fired: [2]),
 * f32 time (+0x30). */
typedef struct { u16 type; u32 target; } smsg_t;
static u32 mrng;
static u32 music_rand(void) { mrng = mrng * 1664525u + 1013904223u; return mrng >> 8; }

static bool script_fire(const ak_blob *f, const smsg_t *msg, const u32 *gfirst, const u8 *gcount, u32 ngroups, s32 g, u32 depth,
                        u32 *hash, u32 *state)
{
    if (g < 0 || (u32)g >= ngroups || depth > 8) return false;
    for (u32 m = 0; m < gcount[g]; m++) {
        const smsg_t *s = &msg[gfirst[g] + m]; if (s->type != 5) continue;          /* 5: activate */
        u32 pos = 8; ak_chunk c;
        while (ak_asura_next(f, &pos, &c)) {
            if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 0x24 || ak_rd32(c.body) != s->target) continue;
            u32 type = ak_rd32(c.body + 4);
            if (type == 0x1F) {
                u32 fl = ak_rd32(c.body + 0x20); if (!(fl & 0x10)) break;
                *hash = ak_rd32(c.body + 0x1C); *state = (fl & 2) ? 4 : (fl & 4) ? 7 : (fl & 8) ? 10 : 0;
                return true;
            }
            if (type == 0xB) {
                u32 fl = ak_rd32(c.body + 0x1C), n = ak_rd32(c.body + 0x20), total = 0;
                if (0x24 + n * 8 > c.size) break;
                for (u32 i = 0; i < n; i++) if (ak_rd32(c.body + 0x24 + i * 8) & 0x10000) total += ak_rd32(c.body + 0x28 + i * 8);
                if ((fl & 1) && total) {                                             /* a weighted random pick */
                    u32 r = music_rand() % total;
                    for (u32 i = 0; i < n; i++) {
                        u32 e = ak_rd32(c.body + 0x24 + i * 8), w = ak_rd32(c.body + 0x28 + i * 8); if (!(e & 0x10000)) continue;
                        if (r < w) return script_fire(f, msg, gfirst, gcount, ngroups, (s32)(e & 0xFFFF), depth + 1, hash, state);
                        r -= w;
                    }
                } else for (u32 i = 0; i < n; i++) {                                 /* (all, or in turn: the first) */
                    u32 e = ak_rd32(c.body + 0x24 + i * 8);
                    if ((e & 0x10000) && script_fire(f, msg, gfirst, gcount, ngroups, (s32)(e & 0xFFFF), depth + 1, hash, state)) return true;
                }
            }
            break;
        }
    }
    return false;
}

bool ak_audio_level_music_start(const ak_blob *f, u32 seed, u32 *hash, u32 *state)
{
    mrng = seed ? seed : 1u;
    if (!ak_asura_check(f)) return false;
    u32 pos = 8; ak_chunk c; bool found = false;
    while (!found && ak_asura_next(f, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('S', 'M', 'S', 'G') || c.size < 8) continue;
        u32 ver = c.version & 0xFFFF, ng = ak_rd32(c.body), p = 4, side = 0;
        if (ver >= 2) { side = ak_rd32(c.body + 4); p = 8; }
        if (side != 0 || ng > 4096 || p + ng > c.size) continue;
        u32 msz = 8 + (ver >= 3 ? 4 : 0) + (ver > 4 ? 4 : 0) + (ver > 5 ? 4 : 0), nm = 0;
        const u8 *cnt = c.body + p; p += ng;
        for (u32 g = 0; g < ng; g++) nm += cnt[g];
        smsg_t *msg = malloc((nm ? nm : 1) * sizeof *msg); u32 *first = malloc((ng ? ng : 1) * sizeof *first);
        if (!msg || !first) { free(msg); free(first); return false; }
        u32 k = 0; bool ok = true;
        for (u32 g = 0; g < ng && ok; g++) {
            first[g] = k;
            for (u32 m = 0; m < cnt[g]; m++) {
                if (p + msz > c.size) { ok = false; break; }
                u16 ex = ak_rd16(c.body + p + 2);
                msg[k].type = ak_rd16(c.body + p); msg[k].target = ak_rd32(c.body + p + 4); k++;
                p += msz + (!(c.flags & 1) ? ((ex + 3u) & ~3u) : 0);
            }
        }
        if (ok) {                                                                    /* the timers: each fires its group [2] */
            u32 ep = 8; ak_chunk e;
            while (!found && ak_asura_next(f, &ep, &e))
                if (ak_chunk_tag(&e) == AK_TAG('E', 'N', 'T', 'I') && e.size >= 0x34 && ak_rd32(e.body + 4) == 1 && ak_rd32(e.body + 0x1C) >= 4)
                    found = script_fire(f, msg, first, cnt, ng, (s16)ak_rd16(e.body + 0x24), 0, hash, state);
        }
        free(msg); free(first);
    }
    if (!found) { *hash = (music_rand() >> 4) & 1 ? 0x4A32E16Bu : 0x4A32E16Cu; *state = 4; }   /* (no script: the code's own pick) */
    return found;
}

/* a list's record in MMUS: name (padded to 4); u32 hash; 9 words (word 10 of the record: the start state); 13 states x
 * { u32 exists, 0, 0, u32 file - 1-based }; its files follow.  -> the list's name and the file (0-based) for the state */
bool ak_audio_level_music_state(const ak_blob *f, u32 hash, u32 state, char *list, u32 lsize, u32 *nth)
{
    if (!ak_asura_check(f) || state > 12) return false;
    u32 pos = 8; ak_chunk c;
    while (ak_asura_next(f, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('M', 'M', 'U', 'S')) continue;
        for (u32 p = 4; p + 8 <= c.size; p += 4) {
            if (ak_rd32(c.body + p) != hash || p < 8) continue;
            u32 s = p; while (s > 4 && c.body[s - 1] == 0) s--; while (s > 4 && c.body[s - 1] >= 32 && c.body[s - 1] < 127) s--; s = (s + 3) & ~3u;                    /* (names start 4-aligned) */
            if (p + 64 * 4 > c.size) return false;
            u32 n = 0; while (s + n < p && c.body[s + n] && n + 1 < lsize) { list[n] = (char)c.body[s + n]; n++; } list[n] = 0;
            while (n && list[n - 1] == ' ') list[--n] = 0;
            u32 st = state ? state : ak_rd32(c.body + p + 40);
            if (st > 12 || !ak_rd32(c.body + p + 48 + st * 16)) return false;
            u32 file = ak_rd32(c.body + p + 60 + st * 16); *nth = file ? file - 1 : 0;
            return n > 0;
        }
    }
    return false;
}

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
