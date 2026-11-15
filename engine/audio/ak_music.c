/* Streamed music: the converted copies of the game's music.  See ak_music.h.
 *
 * The game's music is ATRAC3plus (.AT3); the project plays it from converted copies only - 16-bit PCM WAV files written once by
 * the project's media conversion (the Vita's first-boot conversion screen, the PC conversion tool), at
 * converted/PSP_GAME/USRDIR/SOUNDS/MUSIC/<NAME>.AT3.wav in a data folder.  Each holds every ATRAC frame in order (2048 samples
 * per frame, 44.1 kHz, stereo), so the original's sample positions still hold: the encoder delay (the .AT3's fact chunk) is
 * skipped at the start, and a looping track goes back from the loop end to the loop start (its smpl chunk).  Those three
 * numbers are read from the original file's header by the caller; nothing of the original is decoded at run time.
 *
 * The file is read on the audio thread in 32 KB pieces (about 0.19 s) as the mixer drains them, and resampled to 48 kHz. */
#include "ak_music.h"
#include <stdio.h>
#include <string.h>

static struct {
    FILE *f; u32 data_off, frames, rate;               /* frames: in the WAV */
    u32 start, loop_start, loop_end; bool loop, on;
    u32 next;                                          /* the next frame to read */
    s16 buf[2 * 8192]; u32 have, read;                 /* interleaved stereo, not yet mixed */
    double frac;
} m;
static volatile int mlock;
static void lock(void)   { while (__atomic_test_and_set(&mlock, __ATOMIC_ACQUIRE)) {} }
static void unlock(void) { __atomic_clear(&mlock, __ATOMIC_RELEASE); }

void ak_music_stop(void) { lock(); m.on = false; if (m.f) fclose(m.f); m.f = NULL; unlock(); }

bool ak_music_play_wav(const char *path, bool loop, u32 delay, u32 loop_start, u32 loop_end)
{
    ak_music_stop();
    FILE *f = path ? fopen(path, "rb") : NULL; if (!f) return false;
    u8 h[512]; size_t n = fread(h, 1, sizeof h, f);
    if (n < 44 || memcmp(h, "RIFF", 4) || memcmp(h + 8, "WAVE", 4)) { fclose(f); return false; }
    u32 rate = 0, chans = 0, bits = 0, doff = 0, dlen = 0;
    for (u32 p = 12; p + 8 <= n;) {
        u32 len = ak_rd32(h + p + 4);
        if (!memcmp(h + p, "fmt ", 4) && p + 24 <= n) { chans = ak_rd16(h + p + 10); rate = ak_rd32(h + p + 12); bits = ak_rd16(h + p + 22); }
        else if (!memcmp(h + p, "data", 4)) { doff = p + 8; dlen = len; break; }
        p += 8 + len + (len & 1);
    }
    if (!doff || chans != 2 || bits != 16 || !rate) { fclose(f); AK_WARN("music", "%s: not 16-bit stereo PCM", path); return false; }
    lock();
    m.f = f; m.data_off = doff; m.frames = dlen / 4; m.rate = rate; m.loop = loop;
    m.start = delay < m.frames ? delay : 0;
    m.loop_start = loop_start && loop_start < m.frames ? loop_start : m.start;
    m.loop_end = loop_end && loop_end <= m.frames && loop_end > m.loop_start ? loop_end : m.frames;
    m.next = m.start; fseek(f, (long)(doff + m.start * 4u), SEEK_SET);
    m.have = m.read = 0; m.frac = 0; m.on = true;
    unlock();
    return true;
}

bool ak_music_active(void) { return m.on; }

static void refill(void)                               /* (called with the lock held) */
{
    if (m.read) { memmove(m.buf, m.buf + 2 * m.read, (m.have - m.read) * 4); m.have -= m.read; m.read = 0; }
    while (m.on && m.have < 8192 - 64) {
        u32 end = m.loop ? m.loop_end : m.frames;
        if (m.next >= end) {
            if (!m.loop) { if (m.have < 2) m.on = false; return; }
            m.next = m.loop_start; fseek(m.f, (long)(m.data_off + m.next * 4u), SEEK_SET);
        }
        u32 want = 8192 - m.have; if (want > end - m.next) want = end - m.next;
        size_t got = fread(m.buf + 2 * m.have, 4, want, m.f);
        if (!got) { m.next = end; if (!m.loop) { if (m.have < 2) m.on = false; return; } continue; }
        m.have += (u32)got; m.next += (u32)got;
    }
}

void ak_music_mix(s32 *acc, u32 frames, f32 volume)
{
    lock();
    if (m.on) {
        double step = (double)m.rate / 48000.0; s32 g = (s32)(volume * 4096);
        for (u32 k = 0; k < frames; k++) {
            if (m.read + 2 > m.have) { refill(); if (m.read + 2 > m.have) break; }
            s32 t = (s32)(m.frac * 4096);
            const s16 *a = m.buf + 2 * m.read, *b = a + 2;
            s32 l = a[0] + (((b[0] - a[0]) * t) >> 12), r = a[1] + (((b[1] - a[1]) * t) >> 12);
            acc[2 * k] += (l * g) >> 12; acc[2 * k + 1] += (r * g) >> 12;
            m.frac += step; while (m.frac >= 1.0) { m.frac -= 1.0; m.read++; }
        }
    }
    unlock();
}
