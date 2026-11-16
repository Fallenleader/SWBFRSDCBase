/* Speech: see ak_speech.h. */
#include "ak_speech.h"
#include "ak_audio.h"
#include "../assets/asura.h"
#include "../core/ak_settings.h"
#include "../platform/plat.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct { u32 hash, sound; f32 seconds; char sub[160]; } line_t;          /* hash: h31 of the line's name */
typedef struct { u32 hash; u32 first, n; } event_t;                              /* lines: ev_lines[first .. first + n) */
typedef struct { u32 hash, offset; } bsound_t;

static line_t *lines; static u32 nlines;
static event_t *events; static u32 nevents;
static u32 *ev_lines; static u32 nev_lines;
static bsound_t *bsounds; static u32 nbsounds;
static u32 rng = 0x2468ACEu;

/* a line's name is a path ("AI\Imperial\Trooper\IMP_BC_Attack_01"); the events hash it with '/' for '\' */
static u32 path_hash(const char *s) { u32 h = 0; for (; *s; s++) { u8 ch = (u8)*s; if (ch == '\\') ch = '/'; if (ch >= 'A' && ch <= 'Z') ch += 32; h = h * 31 + ch; } return h; }

static const char *cstr(const u8 *b, u32 size, u32 *p)
{
    if (*p >= size) return NULL;
    const char *s = (const char *)b + *p; size_t n = strnlen(s, size - *p); if (n == size - *p) return NULL;
    *p += (u32)((n + 1 + 3) & ~(size_t)3); return s;
}

bool ak_speech_load(const ak_blob *am, const ak_blob *asr)
{
    u32 pos = 8; ak_chunk c;
    /* GMSND.AM: the lines and the bundle's table (the chunks before the first sound) */
    u32 nl = 0, nb = 0;
    if (am && ak_asura_check(am)) {
        while (ak_asura_next(am, &pos, &c)) { u32 t = ak_chunk_tag(&c); if (t == AK_TAG('D', 'L', 'L', 'N')) nl++; }
        lines = calloc(nl ? nl : 1, sizeof *lines);
        pos = 8;
        for (;;) {
            /* (the bundle chunk is far longer than the part read: ak_asura_next stops there, so it is taken by hand) */
            if (pos + 16 > am->size) break;
            u32 size = ak_rd32(am->data + pos + 4);
            if (!memcmp(am->data + pos, "DLLN", 4) && pos + size <= am->size) {
                const u8 *b = am->data + pos + 16; u32 bs = size - 16, p = 0;
                const char *nm = cstr(b, bs, &p); if (!nm || p + 24 > bs) { pos += size; continue; }
                line_t *l = &lines[nlines++]; memset(l, 0, sizeof *l);
                l->hash = path_hash(nm); l->sound = ak_rd32(b + p + 8);
                u32 sec = ak_rd32(b + p + 16); memcpy(&l->seconds, &sec, 4);
                u32 nc = ak_rd32(b + p + 20), k = 0;
                for (u32 i = 0; i < nc && p + 24 + 2 * i + 1 < bs && k + 1 < sizeof l->sub; i++) {
                    u16 ch = ak_rd16(b + p + 24 + 2 * i); if (!ch) break;
                    l->sub[k++] = ch < 128 ? (char)ch : (ch == 0x2019 ? '\'' : '?');
                }
                l->sub[k] = 0;
            } else if (!memcmp(am->data + pos, "RSCF", 4)) {
                const u8 *b = am->data + pos + 16; u32 avail = am->size - pos - 16, p = 12;
                const char *nm = cstr(b, avail, &p);
                if (nm && !strcmp(nm, "streamed sounds") && p + 8 <= avail) {
                    u32 n = ak_rd32(b + p + 4); bsounds = calloc(n ? n : 1, sizeof *bsounds);
                    for (u32 i = 0; i < n && p + 8 + i * 12 + 8 <= avail; i++) { bsounds[i].hash = ak_rd32(b + p + 8 + i * 12); bsounds[i].offset = ak_rd32(b + p + 12 + i * 12); nb++; }
                    nbsounds = nb;
                }
                break;
            }
            if (size < 16) break;
            pos += size;
        }
    }
    /* GMSND.ASR: the events */
    u32 ne = 0, nel = 0;
    if (asr && ak_asura_check(asr)) {
        pos = 8; while (ak_asura_next(asr, &pos, &c)) if (ak_chunk_tag(&c) == AK_TAG('D', 'L', 'E', 'V')) { ne++; nel += 64; }
        events = calloc(ne ? ne : 1, sizeof *events); ev_lines = calloc(nel ? nel : 1, sizeof *ev_lines);
        pos = 8;
        while (ak_asura_next(asr, &pos, &c)) {
            if (ak_chunk_tag(&c) != AK_TAG('D', 'L', 'E', 'V')) continue;
            /* name (padded to 4); u32 kind; 0; u32 0x16464; 0; 0; 3 x u8 0; u32 n (+23, unaligned);
               n x { u32 line hash; 0; 0; 1; 0; u8 0; line name; 3 x u8 0 } - byte-packed */
            u32 p = 0; const char *nm = cstr(c.body, c.size, &p); if (!nm || p + 27 > c.size) continue;
            u32 n = ak_rd32(c.body + p + 23); p += 27;
            event_t *e = &events[nevents++]; e->hash = ak_hash31(nm); e->first = nev_lines; e->n = 0;
            for (u32 i = 0; i < n && p + 22 <= c.size && nev_lines < nel; i++) {
                ev_lines[nev_lines++] = ak_rd32(c.body + p); e->n++;
                p += 21; p += (u32)strnlen((const char *)c.body + p, c.size - p) + 1 + 3;
            }
        }
    }
    AK_INFO("speech", "%u lines, %u sounds in the bundle, %u dialogue events", nlines, nbsounds, nevents);
    return nlines && nevents;
}

static const event_t *find_event(u32 h) { for (u32 i = 0; i < nevents; i++) if (events[i].hash == h) return &events[i]; return NULL; }
static const line_t *find_line(u32 h)   { for (u32 i = 0; i < nlines; i++) if (lines[i].hash == h) return &lines[i]; return NULL; }
static s64 find_sound(u32 h)            { for (u32 i = 0; i < nbsounds; i++) if (bsounds[i].hash == h) return bsounds[i].offset; return -1; }

bool ak_speech_has(const char *event) { return event && *event && find_event(ak_hash31(event)) != NULL; }

u32 ak_speech_play(const char *event, const f32 *pos, f32 gain, const char **subtitle, f32 *seconds)
{
    if (subtitle) *subtitle = NULL;
    if (seconds) *seconds = 0;
    if (!event || !*event) return 0;
    const event_t *e = find_event(ak_hash31(event));
    if (!e || !e->n) return 0;
    rng = rng * 1664525u + 1013904223u;
    u32 pick = (rng >> 8) % e->n;
    for (u32 t = 0; t < e->n; t++) {
        const line_t *l = find_line(ev_lines[e->first + (pick + t) % e->n]);
        s64 off = l ? find_sound(l->sound) : -1;
        if (off < 0) continue;
        int nd; const char *const *dirs = ak_plat_data_dirs(&nd);
        for (int i = 0; i < nd; i++) {
            char path[512]; snprintf(path, sizeof path, "%s/converted/PSP_GAME/USRDIR/SOUNDS/GMSND.AM.d/%08X.wav", dirs[i], (u32)off);
            /* (narration: flat; chatter: the game's "AI Speech" dialogue list - full to 1 m... gone at 50 m) */
            u32 h = ak_audio_play_wav(path, pos, gain, 1.0f, 50.0f, 0);
            if (h && ak_setting_int("AK_DEBUG_SPEECH", 0)) AK_INFO("speech", "%s%s: \"%s\"", event, pos ? "" : " (narrator)", l->sub);
            if (h) { if (subtitle) *subtitle = l->sub[0] ? l->sub : NULL; if (seconds) *seconds = l->seconds; return h; }
        }
        static int warned; if (!warned++) AK_WARN("speech", "no converted voice files (converted/PSP_GAME/USRDIR/SOUNDS/GMSND.AM.d): run the media conversion");
        return 0;
    }
    return 0;
}
