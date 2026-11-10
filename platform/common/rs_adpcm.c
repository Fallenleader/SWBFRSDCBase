/* DSP-ADPCM sound files (.adp): the converted audio on the Nintendo 3DS, whose sound chip decodes this format itself.
 *
 * 4 bits a sample (a quarter of 16-bit PCM): frames of 14 samples, each a header byte (predictor index << 4 | scale) and 7 bytes of
 * signed nibbles; sample = ((nibble << scale) << 11 + 1024 + c1 * h1 + c2 * h2) >> 11, clamped (h1, h2: the last two samples).  Each
 * channel has its own 8 predictor pairs (c1, c2), chosen for that sound (rs_adp_from_wav: least-squares predictors of its frames,
 * clustered into 8).
 *
 * File: a 96-byte header, then fixed-size blocks of ADP_BLOCK samples; each block holds every channel in turn as
 *   s16 h1, s16 h2 (the decoder's history where the block starts), then the channel's frames,
 * so a block decodes on its own (seeking), and one channel of one block is exactly what the DSP takes as a buffer.
 *
 * Header: "RSAD", u16 version (1), u16 channels, u32 rate, u32 samples, u32 block samples, u32 blocks, u32 block bytes, 12 bytes
 * spare, s16 coefficients[2][16]. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "rs_adpcm.h"

#define ADP_BLOCK (14 * 512)
#define FRAMES_PER_BLOCK (ADP_BLOCK / 14)
#define CH_BYTES (4 + FRAMES_PER_BLOCK * 8)
#define HDR 96

static inline int16_t clamp16(int v){ return v < -32768 ? -32768 : (v > 32767 ? 32767 : (int16_t)v); }
static void w16(uint8_t *p, uint16_t v){ p[0] = (uint8_t)v; p[1] = (uint8_t)(v >> 8); }
static void w32(uint8_t *p, uint32_t v){ p[0] = (uint8_t)v; p[1] = (uint8_t)(v >> 8); p[2] = (uint8_t)(v >> 16); p[3] = (uint8_t)(v >> 24); }
static uint16_t r16(const uint8_t *p){ return (uint16_t)(p[0] | p[1] << 8); }
static uint32_t r32(const uint8_t *p){ return (uint32_t)p[0] | (uint32_t)p[1] << 8 | (uint32_t)p[2] << 16 | (uint32_t)p[3] << 24; }

/* ------------------------------------------------------------------ encoder */
typedef struct { FILE *f; long data; uint32_t frames; int ch; } wav_in_t;
static int wav_open(wav_in_t *w, const char *path){
    memset(w, 0, sizeof *w); w->f = fopen(path, "rb"); if (!w->f) return -1;
    uint8_t h[12]; if (fread(h, 1, 12, w->f) != 12 || memcmp(h, "RIFF", 4) || memcmp(h + 8, "WAVE", 4)) { fclose(w->f); return -1; }
    for (;;) { uint8_t c[8]; if (fread(c, 1, 8, w->f) != 8) { fclose(w->f); return -1; } uint32_t len = r32(c + 4);
        if (!memcmp(c, "fmt ", 4)) { uint8_t fm[16]; if (len < 16 || fread(fm, 1, 16, w->f) != 16) { fclose(w->f); return -1; }
            w->ch = r16(fm + 2); if (r16(fm) != 1 || r16(fm + 14) != 16 || w->ch < 1 || w->ch > 2) { fclose(w->f); return -1; }
            fseek(w->f, (long)(len - 16 + (len & 1)), SEEK_CUR); continue; }
        if (!memcmp(c, "data", 4)) { w->data = ftell(w->f); w->frames = len / (uint32_t)(2 * (w->ch ? w->ch : 1)); return w->ch ? 0 : -1; }
        fseek(w->f, (long)(len + (len & 1)), SEEK_CUR); } }
/* reads samples [pos, pos + n) of every channel, deinterleaved; zeros past the end */
static void wav_read(wav_in_t *w, uint32_t pos, int n, int16_t *out /* [ch][n] */, int16_t *tmp){
    int got = 0; if (pos < w->frames) { got = (int)(w->frames - pos < (uint32_t)n ? w->frames - pos : (uint32_t)n);
        fseek(w->f, w->data + (long)pos * 2 * w->ch, SEEK_SET); got = (int)fread(tmp, (size_t)(2 * w->ch), (size_t)got, w->f); }
    for (int c = 0; c < w->ch; c++) for (int i = 0; i < n; i++) out[c * n + i] = i < got ? tmp[i * w->ch + c] : 0; }

/* 8 predictor pairs for one channel: each frame's least-squares 2-tap predictor (frames with sound only), clustered (k-means) */
#define MAXP 8192
static void choose_coefs(wav_in_t *w, int c, int16_t coef[16]){
    float (*pa)[2] = malloc(sizeof(float) * 2 * MAXP); int np = 0; if (!pa) goto defaults; uint32_t nfr = (w->frames + 13) / 14, step = nfr / MAXP + 1;
    int16_t *buf = malloc(sizeof(int16_t) * 2 * 4096), *tmp = malloc(sizeof(int16_t) * 2 * 4096); if (!buf || !tmp) { free(buf); free(tmp); free(pa); goto defaults; }
    for (uint32_t f0 = 0; f0 < nfr && np < MAXP; f0 += 256) {
        int nn = 256 * 14 + 2; uint32_t pos = f0 * 14; int16_t *x;
        if (pos >= 2) { wav_read(w, pos - 2, nn, buf, tmp); x = buf + (size_t)c * nn + 2; } else { wav_read(w, 0, nn, buf, tmp); x = buf + (size_t)c * nn; }
        for (int k = 0; k < 256 && f0 + (uint32_t)k < nfr && np < MAXP; k++) { if ((f0 + (uint32_t)k) % step) continue;
            double r11 = 0, r12 = 0, r22 = 0, r01 = 0, r02 = 0, e = 0;
            for (int i = 0; i < 14; i++) { int n = k * 14 + i; double x0 = x[n], x1 = (pos + (uint32_t)n >= 1) ? x[n - 1] : 0, x2 = (pos + (uint32_t)n >= 2) ? x[n - 2] : 0;
                r11 += x1 * x1; r12 += x1 * x2; r22 += x2 * x2; r01 += x0 * x1; r02 += x0 * x2; e += x0 * x0; }
            if (e < 14.0 * 64 * 64) continue;                              /* near silence: no information */
            double d = r11 * r22 - r12 * r12; if (d < 1e-3 * r11 * r22 + 1e-9) { if (r11 > 0) { pa[np][0] = (float)(r01 / r11); pa[np][1] = 0; np++; } continue; }
            float a1 = (float)((r01 * r22 - r02 * r12) / d), a2 = (float)((r02 * r11 - r01 * r12) / d);
            if (a1 > 3.99f) a1 = 3.99f; if (a1 < -3.99f) a1 = -3.99f; if (a2 > 3.99f) a2 = 3.99f; if (a2 < -3.99f) a2 = -3.99f;
            pa[np][0] = a1; pa[np][1] = a2; np++; } }
    free(buf); free(tmp);
    if (np < 8) { free(pa); goto defaults; }
    {   float cen[8][2]; int cnt[8];
        /* start: 8 predictors spread over the set ordered by a1 */
        for (int i = 0; i < 8; i++) { int j = (int)((long)np * (2 * i + 1) / 16); cen[i][0] = pa[j][0]; cen[i][1] = pa[j][1]; }
        for (int it = 0; it < 12; it++) { float s[8][2] = {{0}}; memset(cnt, 0, sizeof cnt);
            for (int p = 0; p < np; p++) { int b = 0; float bd = 1e30f;
                for (int i = 0; i < 8; i++) { float dx = pa[p][0] - cen[i][0], dy = pa[p][1] - cen[i][1], dd = dx * dx + dy * dy; if (dd < bd) { bd = dd; b = i; } }
                s[b][0] += pa[p][0]; s[b][1] += pa[p][1]; cnt[b]++; }
            for (int i = 0; i < 8; i++) if (cnt[i]) { cen[i][0] = s[i][0] / cnt[i]; cen[i][1] = s[i][1] / cnt[i]; } }
        for (int i = 0; i < 8; i++) { int a = (int)(cen[i][0] * 2048.0f + (cen[i][0] < 0 ? -0.5f : 0.5f)), b = (int)(cen[i][1] * 2048.0f + (cen[i][1] < 0 ? -0.5f : 0.5f));
            coef[i * 2] = clamp16(a); coef[i * 2 + 1] = clamp16(b); }
        coef[0] = 0; coef[1] = 0;                                          /* (pair 0 stays "no prediction": silence, transients) */
        free(pa); return; }
defaults:
    {   static const int16_t d[16] = {0, 0, 2048, 0, 0, 0, 1024, 0, 4096, -2048, 3584, -1536, 3072, -1024, 4608, -2560};
        memcpy(coef, d, sizeof d); } }

/* one frame of 14 samples: the predictor pair that fits best with the input's own history (the two best are kept), then for each the
 * scale from its largest residual and the one above, quantized against the decoder's own history; the least error wins */
static void enc_frame(const int16_t *x, int n, const int16_t coef[16], int *h1, int *h2, uint8_t out[8]){
    int cand[2] = {0, 0}; long long ce[2] = {-1, -1}; int cmx[2] = {0, 0};
    for (int p = 0; p < 8; p++) {
        int c1 = coef[p * 2], c2 = coef[p * 2 + 1], a1 = *h1, a2 = *h2, mx = 0; long long e = 0;
        for (int i = 0; i < n; i++) { int r = x[i] - ((c1 * a1 + c2 * a2 + 1024) >> 11); e += (long long)r * r; if (r < 0) r = -r; if (r > mx) mx = r; a2 = a1; a1 = x[i]; }
        if (ce[0] < 0 || e < ce[0]) { cand[1] = cand[0]; ce[1] = ce[0]; cmx[1] = cmx[0]; cand[0] = p; ce[0] = e; cmx[0] = mx; }
        else if (ce[1] < 0 || e < ce[1]) { cand[1] = p; ce[1] = e; cmx[1] = mx; } }
    long long best_err = -1; int bp = 0, bs = 0; int8_t bn[14] = {0}; int bh1 = *h1, bh2 = *h2;
    for (int k = 0; k < 2; k++) {
        int p = cand[k], c1 = coef[p * 2], c2 = coef[p * 2 + 1], s0 = 0; while (s0 < 12 && (7 << s0) < cmx[k]) s0++;
        for (int s = s0; s <= s0 + 1 && s <= 12; s++) {
            long long e = 0; int q1 = *h1, q2 = *h2; int8_t nb[14];
            for (int i = 0; i < n; i++) { int P = c1 * q1 + c2 * q2; int num = ((int)x[i] << 11) - P - 1024;
                int nib = (num + (1 << (10 + s))) >> (11 + s); if (nib > 7) nib = 7; if (nib < -8) nib = -8;   /* (rounded, floor of +half) */
                int y = clamp16((((nib << s) << 11) + 1024 + P) >> 11); int d = y - x[i]; e += (long long)d * d;
                nb[i] = (int8_t)nib; q2 = q1; q1 = y; }
            if (best_err < 0 || e < best_err) { best_err = e; bp = p; bs = s; memcpy(bn, nb, (size_t)n); bh1 = q1; bh2 = q2; } } }
    out[0] = (uint8_t)(bp << 4 | bs); memset(out + 1, 0, 7);
    for (int i = 0; i < n; i++) out[1 + i / 2] |= (uint8_t)((bn[i] & 15) << (i & 1 ? 0 : 4));
    *h1 = bh1; *h2 = bh2; }

int rs_adp_from_wav(const char *wav_path, const char *out_path, uint64_t *out_size){
    wav_in_t w; if (wav_open(&w, wav_path)) return -1;
    int16_t coef[2][16]; for (int c = 0; c < w.ch; c++) choose_coefs(&w, c, coef[c]); if (w.ch == 1) memcpy(coef[1], coef[0], sizeof coef[0]);
    FILE *o = fopen(out_path, "wb"); if (!o) { fclose(w.f); return -4; }
    uint32_t nb = (w.frames + ADP_BLOCK - 1) / ADP_BLOCK; uint32_t bbytes = (uint32_t)(CH_BYTES * w.ch);
    uint8_t h[HDR]; memset(h, 0, sizeof h); memcpy(h, "RSAD", 4); w16(h + 4, 1); w16(h + 6, (uint16_t)w.ch); w32(h + 8, 44100); w32(h + 12, w.frames);
    w32(h + 16, ADP_BLOCK); w32(h + 20, nb); w32(h + 24, bbytes); for (int c = 0; c < 2; c++) for (int i = 0; i < 16; i++) w16(h + 32 + c * 32 + i * 2, (uint16_t)coef[c][i]);
    fwrite(h, 1, HDR, o);
    int16_t *pcm = malloc(sizeof(int16_t) * 2 * ADP_BLOCK), *tmp = malloc(sizeof(int16_t) * 2 * ADP_BLOCK); uint8_t *blk = malloc(bbytes);
    if (!pcm || !tmp || !blk) { free(pcm); free(tmp); free(blk); fclose(o); fclose(w.f); return -12; }
    int h1[2] = {0, 0}, h2[2] = {0, 0}, err = 0;
    for (uint32_t b = 0; b < nb && !err; b++) {
        wav_read(&w, b * ADP_BLOCK, ADP_BLOCK, pcm, tmp); memset(blk, 0, bbytes);
        for (int c = 0; c < w.ch; c++) { uint8_t *q = blk + c * CH_BYTES; w16(q, (uint16_t)h1[c]); w16(q + 2, (uint16_t)h2[c]);
            uint32_t left = w.frames - b * ADP_BLOCK; int nfr = left >= ADP_BLOCK ? FRAMES_PER_BLOCK : (int)((left + 13) / 14);
            for (int f = 0; f < nfr; f++) enc_frame(pcm + (size_t)c * ADP_BLOCK + f * 14, 14, coef[c], &h1[c], &h2[c], q + 4 + f * 8); }
        if (fwrite(blk, 1, bbytes, o) != bbytes) err = -5; }
    free(pcm); free(tmp); free(blk); fclose(w.f);
    if (fclose(o)) err = -5;
    if (!err && out_size) *out_size = HDR + (uint64_t)nb * bbytes;
    return err; }

/* ------------------------------------------------------------------ reader */
struct rs_adp { FILE *f; int ch; uint32_t samples, bsamp, nblocks, bbytes; int16_t coef[2][16]; int32_t cur; int16_t *pcm; uint8_t *raw; };
rs_adp_t *rs_adp_open(const char *path){
    FILE *f = fopen(path, "rb"); if (!f) return 0; uint8_t h[HDR];
    if (fread(h, 1, HDR, f) != HDR || memcmp(h, "RSAD", 4) || r16(h + 4) != 1) { fclose(f); return 0; }
    rs_adp_t *a = calloc(1, sizeof *a); if (!a) { fclose(f); return 0; }
    a->f = f; a->ch = r16(h + 6); a->samples = r32(h + 12); a->bsamp = r32(h + 16); a->nblocks = r32(h + 20); a->bbytes = r32(h + 24); a->cur = -1;
    if (a->ch < 1 || a->ch > 2 || a->bsamp != ADP_BLOCK || a->bbytes != (uint32_t)(CH_BYTES * a->ch)) { fclose(f); free(a); return 0; }
    for (int c = 0; c < 2; c++) for (int i = 0; i < 16; i++) a->coef[c][i] = (int16_t)r16(h + 32 + c * 32 + i * 2);
    a->pcm = malloc(sizeof(int16_t) * 2 * ADP_BLOCK); a->raw = malloc(a->bbytes);
    if (!a->pcm || !a->raw) { rs_adp_close(a); return 0; }
    setvbuf(f, 0, _IONBF, 0); return a; }
int rs_adp_channels(const rs_adp_t *a){ return a->ch; }
uint32_t rs_adp_samples(const rs_adp_t *a){ return a->samples; }
static int load_block(rs_adp_t *a, int32_t b){
    if (b == a->cur) return 0;
    if (b < 0 || (uint32_t)b >= a->nblocks) return -1;
    if (fseek(a->f, HDR + (long)b * (long)a->bbytes, SEEK_SET) || fread(a->raw, 1, a->bbytes, a->f) != a->bbytes) return -1;
    for (int c = 0; c < a->ch; c++) { const uint8_t *q = a->raw + c * CH_BYTES; int h1 = (int16_t)r16(q), h2 = (int16_t)r16(q + 2); int16_t *o = a->pcm + (size_t)c * ADP_BLOCK;
        for (int f = 0; f < FRAMES_PER_BLOCK; f++) { const uint8_t *fr = q + 4 + f * 8; int p = fr[0] >> 4 & 7, s = fr[0] & 15, c1 = a->coef[c][p * 2], c2 = a->coef[c][p * 2 + 1];
            for (int i = 0; i < 14; i++) { int nib = (fr[1 + i / 2] >> (i & 1 ? 0 : 4)) & 15; if (nib >= 8) nib -= 16;
                int y = clamp16((((nib << s) << 11) + 1024 + c1 * h1 + c2 * h2) >> 11); o[f * 14 + i] = (int16_t)y; h2 = h1; h1 = y; } } }
    a->cur = b; return 0; }
int rs_adp_read(rs_adp_t *a, uint32_t pos, int n, int16_t *out, int out_ch){
    int got = 0;
    while (got < n) { uint32_t p = pos + (uint32_t)got; if (p >= a->samples) break;
        if (load_block(a, (int32_t)(p / ADP_BLOCK))) break;
        uint32_t off = p % ADP_BLOCK; int k = (int)(ADP_BLOCK - off); if (k > n - got) k = n - got; if ((uint32_t)k > a->samples - p) k = (int)(a->samples - p);
        const int16_t *l = a->pcm + off, *r = a->ch == 2 ? a->pcm + ADP_BLOCK + off : l;
        if (out_ch == 2) for (int i = 0; i < k; i++) { out[(got + i) * 2] = l[i]; out[(got + i) * 2 + 1] = r[i]; }
        else for (int i = 0; i < k; i++) out[got + i] = (int16_t)(((int)l[i] + r[i]) >> 1);
        got += k; }
    if (got < n) memset(out + (size_t)got * out_ch, 0, (size_t)(n - got) * out_ch * sizeof(int16_t));
    return got; }
void rs_adp_close(rs_adp_t *a){ if (!a) return; if (a->f) fclose(a->f); free(a->pcm); free(a->raw); free(a); }
