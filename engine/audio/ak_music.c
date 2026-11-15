/* Streamed music: ATRAC3plus .AT3 files.  See ak_music.h.
 *
 * The files are RIFF WAVE: "fmt " (WAVE_FORMAT_EXTENSIBLE with the ATRAC3plus GUID; 2 channels, 44100 Hz, block align 744: one
 * packet of 2048 samples per channel), "fact" (total samples, then the encoder delay - 2203), "smpl" (one loop: start and end
 * sample, counted in the decoded stream, delay included) and "data" (the packets).  Playback skips the delay, and a looping
 * track jumps back to the loop start when it reaches the loop end: the decoder is flushed, the packet before the loop start is
 * decoded and dropped (it primes the overlap), and the samples before the loop start in its packet are skipped. */
#include "ak_music.h"
#include "../core/ak_settings.h"
#include <string.h>
#include <math.h>
#ifdef AK_HAVE_ATRAC3P
#include <libavcodec/avcodec.h>
#include <libavutil/channel_layout.h>
#include <libavutil/frame.h>
#endif

#ifdef AK_HAVE_ATRAC3P
static struct {
    const u8 *data; u32 size;                          /* the packets */
    u32 block, rate, chans, delay, loop_start, loop_end, total;
    bool loop, on;
    u32 packet, out_pos;                               /* the next packet; the decoded sample index (delay included) */
    u32 skip;                                          /* samples still to drop */
    f32 buf[2][4096]; u32 have, read;                  /* decoded, not yet mixed */
    double frac;                                          /* resampler position between buf[read] and buf[read + 1] */
    AVCodecContext *ctx; AVPacket *pkt; AVFrame *frm;
} m;
static volatile int mlock;
static void lock(void)   { while (__atomic_test_and_set(&mlock, __ATOMIC_ACQUIRE)) {} }
static void unlock(void) { __atomic_clear(&mlock, __ATOMIC_RELEASE); }

static bool open_codec(void)
{
    if (m.ctx) return true;
    const AVCodec *c = avcodec_find_decoder(AV_CODEC_ID_ATRAC3P); if (!c) return false;
    m.ctx = avcodec_alloc_context3(c); if (!m.ctx) return false;
    av_channel_layout_default(&m.ctx->ch_layout, 2);
    m.ctx->sample_rate = 44100; m.ctx->block_align = 744;
    if (avcodec_open2(m.ctx, c, NULL) < 0) { avcodec_free_context(&m.ctx); return false; }
    m.pkt = av_packet_alloc(); m.frm = av_frame_alloc();
    return m.pkt && m.frm;
}

/* one packet into buf (from have); false at the end of the data */
static bool decode_packet(bool keep)
{
    if ((u64)(m.packet + 1) * m.block > m.size) return false;
    m.pkt->data = (u8 *)m.data + (size_t)m.packet * m.block; m.pkt->size = (int)m.block; m.packet++;
    if (avcodec_send_packet(m.ctx, m.pkt) < 0) return true;
    while (avcodec_receive_frame(m.ctx, m.frm) == 0) {
        u32 n = (u32)m.frm->nb_samples, ch = (u32)m.frm->ch_layout.nb_channels;
        const f32 *l = (const f32 *)m.frm->extended_data[0], *r = (const f32 *)m.frm->extended_data[ch > 1 ? 1 : 0];
        for (u32 i = 0; i < n; i++, m.out_pos++) {
            if (!keep) continue;
            if (m.skip) { m.skip--; continue; }
            if (m.loop && m.loop_end && m.out_pos >= m.loop_end) break;
            if (m.have < 4096) { m.buf[0][m.have] = l[i]; m.buf[1][m.have] = r[i]; m.have++; }
        }
    }
    return true;
}

static void seek_to(u32 sample)                       /* decode from the packet before `sample`'s, dropping up to it */
{
    u32 p = sample / 2048; u32 first = p ? p - 1 : 0;
    avcodec_flush_buffers(m.ctx);
    m.packet = first; m.out_pos = first * 2048;
    if (p) decode_packet(false);                       /* prime the overlap */
    m.skip = sample - m.out_pos;
}

static void refill(void)
{
    if (m.read) { memmove(m.buf[0], m.buf[0] + m.read, (m.have - m.read) * 4); memmove(m.buf[1], m.buf[1] + m.read, (m.have - m.read) * 4); m.have -= m.read; m.read = 0; }
    while (m.on && m.have < 2048 + 2) {
        bool at_end = (m.loop && m.loop_end && m.out_pos >= m.loop_end) || !decode_packet(true);
        if (at_end) {
            if (!m.loop) { if (m.have < 2) m.on = false; return; }
            seek_to(m.loop_start ? m.loop_start : m.delay);
        }
    }
}
#endif

void ak_music_start(const u8 *data, u32 size, bool loop)
{
#ifdef AK_HAVE_ATRAC3P
    lock(); m.on = false; unlock();
    if (!data || size < 44 || memcmp(data, "RIFF", 4) || memcmp(data + 8, "WAVE", 4)) return;
    u32 block = 0, rate = 0, chans = 0, delay = 0, ls = 0, le = 0, total = 0; const u8 *pk = NULL; u32 pksz = 0;
    for (u32 p = 12; p + 8 <= size;) {
        u32 n = ak_rd32(data + p + 4); const u8 *b = data + p + 8; if (p + 8 + n > size) n = size - p - 8;
        if (!memcmp(data + p, "fmt ", 4) && n >= 16) { chans = ak_rd16(b + 2); rate = ak_rd32(b + 4); block = ak_rd16(b + 12); }
        else if (!memcmp(data + p, "fact", 4) && n >= 8) { total = ak_rd32(b); delay = ak_rd32(b + 4); }
        else if (!memcmp(data + p, "smpl", 4) && n >= 60 && ak_rd32(b + 28) > 0) { ls = ak_rd32(b + 44); le = ak_rd32(b + 48); }
        else if (!memcmp(data + p, "data", 4)) { pk = b; pksz = n; break; }
        p += 8 + n + (n & 1);
    }
    if (!pk || block != 744 || chans != 2) { AK_WARN("music", "not an ATRAC3plus stereo file"); return; }
    lock();
    if (!open_codec()) { unlock(); AK_WARN("music", "no ATRAC3plus decoder"); return; }
    m.data = pk; m.size = pksz; m.block = block; m.rate = rate ? rate : 44100; m.chans = chans;
    m.delay = delay; m.loop_start = ls ? ls : delay; m.loop_end = le; m.total = total; m.loop = loop;
    m.have = m.read = 0; m.frac = 0;
    avcodec_flush_buffers(m.ctx); m.packet = 0; m.out_pos = 0; m.skip = delay;
    m.on = true;
    unlock();
#else
    (void)data; (void)size; (void)loop;
#endif
}

bool ak_music_active(void)
{
#ifdef AK_HAVE_ATRAC3P
    return m.on;
#else
    return false;
#endif
}

void ak_music_mix(s32 *acc, u32 frames, f32 volume)
{
#ifdef AK_HAVE_ATRAC3P
    lock();
    if (m.on) {
        double step = (double)m.rate / 48000.0; f32 g = volume * 32767.0f;
        for (u32 k = 0; k < frames; k++) {
            if (m.read + 2 > m.have) { refill(); if (m.read + 2 > m.have) break; }
            f32 t = (f32)m.frac, l = m.buf[0][m.read] + (m.buf[0][m.read + 1] - m.buf[0][m.read]) * t, r = m.buf[1][m.read] + (m.buf[1][m.read + 1] - m.buf[1][m.read]) * t;
            acc[2 * k] += (s32)(l * g); acc[2 * k + 1] += (s32)(r * g);
            m.frac += step; while (m.frac >= 1.0) { m.frac -= 1.0; m.read++; }
        }
    }
    unlock();
#else
    (void)acc; (void)frames; (void)volume;
#endif
}
