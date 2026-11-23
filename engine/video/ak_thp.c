/* THP movies: container, pictures, sound.  See ak_thp.h.
 *
 * Container (big-endian; libavformat/thp.c, tools/conversion_tool/thp.c): "THP\0", version, max frame size, max audio samples per
 * frame, fps (f32), frame count, first frame size, data size, component offset, offset-data offset, first frame offset, last frame
 * offset; at the component offset: count, 16 type bytes (0 video, 1 audio), then each component's info (video: width, height and,
 * from version 1.1, a type word; audio: channels, frequency, samples and, from 1.1, a track count).  A frame: next frame size,
 * previous frame size, one size per component, then the components' data.
 *
 * Pictures: baseline JPEG (DQT, SOF0, DHT, SOS), Y at 2x2 and Cb, Cr at 1x1 (4:2:0), Huffman-coded scan data WITHOUT the stuffed
 * zero after each 0xFF (THP stores it so; FFmpeg's THP decoder copies the scan raw, libavcodec/mjpegdec.c).  The inverse DCT is the
 * AAN float one (IJG jidctflt) with the scale factors folded into the dequantisation tables.
 *
 * Sound: per frame u32 channel size, u32 samples, 16 predictor coefficients per channel, the history (h1, h2) per channel, then each
 * channel's 8-byte DSP-ADPCM frames (14 samples each). */
#include "ak_thp.h"
#include <string.h>

static u32 be32(const u8 *p) { return (u32)p[0] << 24 | (u32)p[1] << 16 | (u32)p[2] << 8 | p[3]; }
static s16 be16s(const u8 *p) { return (s16)((u16)p[0] << 8 | p[1]); }

bool ak_thp_info_parse(const u8 *h, u32 n, ak_thp_info *t)
{
    memset(t, 0, sizeof *t);
    if (n < 0x30 || memcmp(h, "THP\0", 4)) return false;
    t->version = be32(h + 4); t->max_frame = be32(h + 8); t->max_samples = be32(h + 12);
    u32 f = be32(h + 16); memcpy(&t->fps, &f, 4);
    t->nframes = be32(h + 20); t->first_size = be32(h + 24);
    u32 comp = be32(h + 32); t->first_off = be32(h + 40); t->last_off = be32(h + 44);
    if (comp + 20 > n || !(t->fps > 1.0f && t->fps < 121.0f)) return false;
    u32 nc = be32(h + comp); if (nc > 16) return false;
    const u8 *types = h + comp + 4; u32 p = comp + 20; bool v11 = t->version >= 0x11000;
    for (u32 i = 0; i < nc; i++) {
        if (types[i] == 0) { if (p + 8 > n) return false; t->has_video = true; t->width = be32(h + p); t->height = be32(h + p + 4); p += v11 ? 12 : 8; }
        else if (types[i] == 1) { if (p + 12 > n) return false; t->has_audio = true; t->channels = be32(h + p); t->rate = be32(h + p + 4); t->samples = be32(h + p + 8); p += v11 ? 16 : 12; }
        else break;
    }
    if (t->has_audio && (t->channels < 1 || t->channels > 2 || t->rate < 8000)) t->has_audio = false;
    return t->has_video && t->width && t->height && !(t->width & 15) && !(t->height & 15);
}

bool ak_thp_frame_parse(const ak_thp_info *t, const u8 *f, u32 n, ak_thp_frame *o)
{
    u32 hl = 8 + 4u * (1 + (t->has_audio ? 1 : 0));
    if (n < hl) return false;
    o->next_size = be32(f); o->jpeg_len = be32(f + 8); o->audio_len = t->has_audio ? be32(f + 12) : 0;
    if (hl + o->jpeg_len + o->audio_len > n) return false;
    o->jpeg = f + hl; o->audio = t->has_audio ? f + hl + o->jpeg_len : NULL;
    return true;
}

/* ---------------------------------------------------------------- JPEG */
typedef struct { u16 fast[512]; s32 maxcode[18]; s32 delta[17]; u8 vals[256]; } huff;   /* fast: (length << 8 | value) for codes <= 9 bits */
static const u8 zz[64] = { 0, 1, 8, 16, 9, 2, 3, 10, 17, 24, 32, 25, 18, 11, 4, 5, 12, 19, 26, 33, 40, 48, 41, 34, 27, 20, 13, 6, 7, 14, 21,
    28, 35, 42, 49, 56, 57, 50, 43, 36, 29, 22, 15, 23, 30, 37, 44, 51, 58, 59, 52, 45, 38, 31, 39, 46, 53, 60, 61, 54, 47, 55, 62, 63 };

static void huff_build(huff *h, const u8 *counts, const u8 *vals, int nv)
{
    memset(h->fast, 0, sizeof h->fast); memcpy(h->vals, vals, (size_t)nv);
    int code = 0, k = 0;
    for (int l = 1; l <= 16; l++) {
        h->delta[l] = k - code;
        for (int i = 0; i < counts[l - 1]; i++, k++, code++)
            if (l <= 9) { int s = code << (9 - l), e = s + (1 << (9 - l)); for (int j = s; j < e; j++) h->fast[j] = (u16)(l << 8 | vals[k]); }
        h->maxcode[l] = counts[l - 1] ? code - 1 : -1; code <<= 1;
    }
    h->maxcode[17] = 0x7FFFFFFF;
}

typedef struct { const u8 *p, *end; u32 buf; int bits; } bitrd;
static inline void br_fill(bitrd *b) { while (b->bits <= 24) { u32 c = b->p < b->end ? *b->p++ : 0; b->buf |= c << (24 - b->bits); b->bits += 8; } }
static inline u32 br_peek(bitrd *b, int n) { return b->buf >> (32 - n); }
static inline void br_skip(bitrd *b, int n) { b->buf <<= n; b->bits -= n; }
static inline int huff_dec(bitrd *b, const huff *h)
{
    br_fill(b);
    u16 f = h->fast[br_peek(b, 9)];
    if (f) { br_skip(b, f >> 8); return f & 0xFF; }
    for (int l = 10; l <= 16; l++) { s32 c = (s32)br_peek(b, l); if (c <= h->maxcode[l]) { br_skip(b, l); return h->vals[c + h->delta[l]]; } }
    br_skip(b, 16); return 0;                                    /* (corrupt) */
}
static inline int receive_extend(bitrd *b, int s)
{
    if (!s) return 0;
    br_fill(b); int v = (int)br_peek(b, s); br_skip(b, s);
    return v < (1 << (s - 1)) ? v - (1 << s) + 1 : v;
}

/* the AAN inverse DCT of one block (dequantised coefficients, the scale factors folded in) -> 8 x 8 samples */
static void idct8(const f32 *in, u8 *out, int pitch, bool tiled)
{
    f32 ws[64];
    for (int c = 0; c < 8; c++) {
        const f32 *s = in + c; f32 *w = ws + c;
        if (s[8] == 0 && s[16] == 0 && s[24] == 0 && s[32] == 0 && s[40] == 0 && s[48] == 0 && s[56] == 0) {
            f32 d = s[0]; for (int k = 0; k < 8; k++) w[k * 8] = d; continue; }
        f32 t0 = s[0], t1 = s[16], t2 = s[32], t3 = s[48];
        f32 t10 = t0 + t2, t11 = t0 - t2, t13 = t1 + t3, t12 = (t1 - t3) * 1.414213562f - t13;
        t0 = t10 + t13; t3 = t10 - t13; t1 = t11 + t12; t2 = t11 - t12;
        f32 t4 = s[8], t5 = s[24], t6 = s[40], t7 = s[56];
        f32 z13 = t6 + t5, z10 = t6 - t5, z11 = t4 + t7, z12 = t4 - t7;
        t7 = z11 + z13; t11 = (z11 - z13) * 1.414213562f;
        f32 z5 = (z10 + z12) * 1.847759065f; t10 = 1.082392200f * z12 - z5; t12 = -2.613125930f * z10 + z5;
        t6 = t12 - t7; t5 = t11 - t6; t4 = t10 + t5;
        w[0] = t0 + t7; w[56] = t0 - t7; w[8] = t1 + t6; w[48] = t1 - t6; w[16] = t2 + t5; w[40] = t2 - t5; w[32] = t3 + t4; w[24] = t3 - t4;
    }
    for (int r = 0; r < 8; r++) {
        const f32 *w = ws + r * 8; f32 o[8];
        f32 t10 = w[0] + w[4], t11 = w[0] - w[4], t13 = w[2] + w[6], t12 = (w[2] - w[6]) * 1.414213562f - t13;
        f32 t0 = t10 + t13, t3 = t10 - t13, t1 = t11 + t12, t2 = t11 - t12;
        f32 z13 = w[5] + w[3], z10 = w[5] - w[3], z11 = w[1] + w[7], z12 = w[1] - w[7];
        f32 t7 = z11 + z13; t11 = (z11 - z13) * 1.414213562f;
        f32 z5 = (z10 + z12) * 1.847759065f; t10 = 1.082392200f * z12 - z5; t12 = -2.613125930f * z10 + z5;
        f32 t6 = t12 - t7, t5 = t11 - t6, t4 = t10 + t5;
        o[0] = t0 + t7; o[7] = t0 - t7; o[1] = t1 + t6; o[6] = t1 - t6; o[2] = t2 + t5; o[5] = t2 - t5; o[4] = t3 + t4; o[3] = t3 - t4;
        /* rows 0-3 and 4-7 of a block are two 8 x 4 tiles in the I8 layout: (row & 3) * 8 within a tile, the next tile below */
        u8 *d = tiled ? out + (r >> 2) * pitch + (r & 3) * 8 : out + r * pitch;
        for (int k = 0; k < 8; k++) { int v = (int)(o[k] * 0.125f + 128.5f); d[k] = (u8)(v < 0 ? 0 : v > 255 ? 255 : v); }
    }
}

bool ak_thp_jpeg_decode(const u8 *d, u32 n, ak_yuv_planes *out)
{
    static huff dc[4], ac[4]; static f32 q[4][64]; static bool qinit;
    static f32 aan[8];
    if (!qinit) { const f32 a[8] = { 1.0f, 1.387039845f, 1.306562965f, 1.175875602f, 1.0f, 0.785694958f, 0.541196100f, 0.275899379f }; memcpy(aan, a, sizeof aan); qinit = true; }
    if (n < 4 || d[0] != 0xFF || d[1] != 0xD8) return false;
    u32 p = 2; int ncomp = 0; u8 cid[3] = { 0 }, cq[3] = { 0 }, chv[3] = { 0 }, ctd[3] = { 0 }, cta[3] = { 0 }; u32 W = 0, H = 0;
    while (p + 4 <= n) {
        if (d[p] != 0xFF) return false;
        u8 m = d[p + 1]; if (m == 0xFF) { p++; continue; }
        if (m == 0xD8 || (m >= 0xD0 && m <= 0xD7)) { p += 2; continue; }
        u32 len = (u32)d[p + 2] << 8 | d[p + 3]; const u8 *s = d + p + 4; u32 sl = len - 2;
        if (p + 2 + len > n) return false;
        if (m == 0xDB) {                                      /* quantisation tables (8-bit), in zigzag order */
            for (u32 i = 0; i + 65 <= sl; i += 65) { int id = s[i] & 3; if (s[i] >> 4) return false;
                for (int k = 0; k < 64; k++) { int z = zz[k]; q[id][z] = (f32)s[i + 1 + k] * aan[z >> 3] * aan[z & 7]; } } }
        else if (m == 0xC0 || m == 0xC1) {                    /* baseline */
            if (s[0] != 8) return false; H = (u32)s[1] << 8 | s[2]; W = (u32)s[3] << 8 | s[4]; ncomp = s[5]; if (ncomp != 3) return false;
            for (int c = 0; c < 3; c++) { cid[c] = s[6 + c * 3]; chv[c] = s[7 + c * 3]; cq[c] = s[8 + c * 3] & 3; }
            if (chv[0] != 0x22 || chv[1] != 0x11 || chv[2] != 0x11) return false; }
        else if (m == 0xC4) {                                 /* Huffman tables */
            for (u32 i = 0; i + 17 <= sl;) { int tc = s[i] >> 4, th = s[i] & 3; int nv = 0; for (int k = 0; k < 16; k++) nv += s[i + 1 + k];
                if (i + 17 + (u32)nv > sl || nv > 256) return false;
                huff_build(tc ? &ac[th] : &dc[th], s + i + 1, s + i + 17, nv); i += 17 + (u32)nv; } }
        else if (m == 0xDD) { if (((u32)s[0] << 8 | s[1]) != 0) return false; }   /* (no restart intervals) */
        else if (m == 0xDA) {                                 /* the scan */
            int ns = s[0]; if (ns != 3 || !W || W != out->w || H != out->h) return false;
            for (int i = 0; i < 3; i++) { int c = 0; while (c < 3 && cid[c] != s[1 + i * 2]) c++; if (c == 3 || c != i) return false;
                ctd[c] = s[2 + i * 2] >> 4; cta[c] = s[2 + i * 2] & 3; }
            p += 2 + len; break; }
        else if (m == 0xD9) return false;
        p += 2 + len;
    }
    if (!W || p >= n) return false;
    bitrd b = { d + p, d + n, 0, 0 };
    int pred[3] = { 0, 0, 0 }; f32 blk[64];
    u32 mw = W / 16, mh = H / 16;
    /* tiled: an 8 x 4 tile is 32 bytes; a plane of width pw has pw / 8 tiles across a 4-row band */
    for (u32 my = 0; my < mh; my++) for (u32 mx = 0; mx < mw; mx++) {
        for (int bi = 0; bi < 6; bi++) {
            int c = bi < 4 ? 0 : bi - 3;
            memset(blk, 0, sizeof blk);
            int t = huff_dec(&b, &dc[ctd[c]]); pred[c] += receive_extend(&b, t); blk[0] = (f32)pred[c] * q[cq[c]][0];
            for (int k = 1; k < 64;) {
                int rs = huff_dec(&b, &ac[cta[c]]), r = rs >> 4, sz = rs & 15;
                if (!sz) { if (r != 15) break; k += 16; continue; }
                k += r; if (k > 63) break;
                int z = zz[k]; blk[z] = (f32)receive_extend(&b, sz) * q[cq[c]][z]; k++;
            }
            u8 *plane; u32 pw, bx, by;
            if (c == 0) { plane = out->y; pw = W; bx = mx * 2 + (bi & 1); by = my * 2 + (bi >> 1); }
            else { plane = c == 1 ? out->cb : out->cr; pw = W / 2; bx = mx; by = my; }
            if (out->gx_tiled) idct8(blk, plane + (by * 2) * (pw / 8) * 32 + bx * 32, (int)(pw / 8) * 32, true);
            else idct8(blk, plane + by * 8 * pw + bx * 8, (int)pw, false);
        }
    }
    return true;
}

/* ---------------------------------------------------------------- sound */
u32 ak_thp_audio_decode(const u8 *a, u32 n, u32 channels, s16 *out, u32 cap)
{
    if (n < 8 + 36 * channels) return 0;
    u32 chsz = be32(a), ns = be32(a + 4); if (ns > cap) ns = cap;
    if (8 + 36 * channels + chsz * channels > n) return 0;
    for (u32 c = 0; c < channels; c++) {
        const u8 *cf = a + 8 + c * 32, *hs = a + 8 + 32 * channels + c * 4, *src = a + 8 + 36 * channels + c * chsz;
        int h1 = be16s(hs), h2 = be16s(hs + 2); s16 coef[16]; for (int i = 0; i < 16; i++) coef[i] = be16s(cf + i * 2);
        for (u32 i = 0; i < ns; i += 14) {
            const u8 *fr = src + i / 14 * 8; int ps = fr[0], c1 = coef[(ps >> 4 & 7) * 2], c2 = coef[(ps >> 4 & 7) * 2 + 1], sc = ps & 15;
            for (u32 k = 0; k < 14 && i + k < ns; k++) {
                int nib = (k & 1) ? (fr[1 + k / 2] & 15) : (fr[1 + k / 2] >> 4); if (nib >= 8) nib -= 16;
                int v = (((nib << sc) << 11) + 1024 + c1 * h1 + c2 * h2) >> 11; v = v < -32768 ? -32768 : v > 32767 ? 32767 : v;
                h2 = h1; h1 = v;
                out[(i + k) * 2 + c] = (s16)v; if (channels == 1) out[(i + k) * 2 + 1] = (s16)v;
            }
        }
    }
    return ns;
}
