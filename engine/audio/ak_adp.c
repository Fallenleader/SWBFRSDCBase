/* DSP-ADPCM (.adp) reader: see ak_adp.h. */
#include "ak_adp.h"
#include "../platform/plat.h"
#include <stdlib.h>
#include <string.h>

#define BLK 7168u                       /* samples per block */
#define FRAMES (BLK / 14u)              /* 512 frames of 14 samples */
#define CHB (4u + FRAMES * 8u)          /* one channel of one block, bytes */
#define HDR 96u

struct ak_adp { FILE *f; int ch; u32 rate, samples, blocks, bbytes; s16 coef[2][16]; s32 cur; s16 pcm[2][BLK]; u8 raw[2 * CHB]; };

static inline s16 clamp16(s32 v) { return (s16)(v < -32768 ? -32768 : v > 32767 ? 32767 : v); }

ak_adp *ak_adp_open(const char *path)
{
    FILE *f = fopen(path, "rb"); if (!f) return NULL;
    u8 h[HDR];
    if (fread(h, 1, HDR, f) != HDR || memcmp(h, "RSAD", 4) || ak_rd16(h + 4) != 1) { fclose(f); return NULL; }
    ak_adp *a = (ak_adp *)calloc(1, sizeof *a); if (!a) { fclose(f); return NULL; }
    a->f = f; a->ch = ak_rd16(h + 6); a->rate = ak_rd32(h + 8); a->samples = ak_rd32(h + 12); a->blocks = ak_rd32(h + 20); a->bbytes = ak_rd32(h + 24);
    if (a->ch < 1 || a->ch > 2 || ak_rd32(h + 16) != BLK || a->bbytes != CHB * (u32)a->ch || !a->rate) { fclose(f); free(a); return NULL; }
    for (int c = 0; c < 2; c++) for (int i = 0; i < 16; i++) a->coef[c][i] = (s16)ak_rd16(h + 32 + c * 32 + i * 2);
    a->cur = -1;
    return a;
}
void ak_adp_close(ak_adp *a) { if (a) { fclose(a->f); free(a); } }
u32 ak_adp_rate(const ak_adp *a) { return a->rate; }
u32 ak_adp_samples(const ak_adp *a) { return a->samples; }
int ak_adp_channels(const ak_adp *a) { return a->ch; }

static bool block(ak_adp *a, s32 b)
{
    if (b == a->cur) return true;
    if (b < 0 || (u32)b >= a->blocks) return false;
    if (fseek(a->f, (long)(HDR + (u32)b * a->bbytes), SEEK_SET) || fread(a->raw, 1, a->bbytes, a->f) != a->bbytes) return false;
    for (int c = 0; c < a->ch; c++) {
        const u8 *q = a->raw + (u32)c * CHB; s32 h1 = (s16)ak_rd16(q), h2 = (s16)ak_rd16(q + 2); s16 *o = a->pcm[c];
        for (u32 f = 0; f < FRAMES; f++) {
            const u8 *fr = q + 4 + f * 8; int p = (fr[0] >> 4) & 7, s = fr[0] & 15; s32 c1 = a->coef[c][p * 2], c2 = a->coef[c][p * 2 + 1];
            for (int i = 0; i < 14; i++) {
                s32 nib = (fr[1 + i / 2] >> ((i & 1) ? 0 : 4)) & 15; if (nib >= 8) nib -= 16;
                s32 y = clamp16((((nib << s) << 11) + 1024 + c1 * h1 + c2 * h2) >> 11);
                *o++ = (s16)y; h2 = h1; h1 = y;
            }
        }
    }
    a->cur = b;
    return true;
}

u32 ak_adp_read_stereo(ak_adp *a, u32 pos, u32 n, s16 *out)
{
    u32 got = 0;
    while (got < n) {
        u32 p = pos + got; if (p >= a->samples || !block(a, (s32)(p / BLK))) break;
        u32 off = p % BLK, k = BLK - off;
        if (k > n - got) k = n - got;
        if (k > a->samples - p) k = a->samples - p;
        const s16 *l = a->pcm[0] + off, *r = a->ch == 2 ? a->pcm[1] + off : l;
        for (u32 i = 0; i < k; i++) { out[(got + i) * 2] = l[i]; out[(got + i) * 2 + 1] = r[i]; }
        got += k;
    }
    return got;
}

s16 *ak_adp_load_mono(const char *path, u32 *frames, u32 *rate)
{
    ak_adp *a = ak_adp_open(path); if (!a) return NULL;
    u32 n = a->samples; s16 *pcm = (s16 *)ak_plat_alloc((size_t)n * 2 + 2, 16);
    if (pcm) {
        for (u32 p = 0; p < n; p += BLK) {
            if (!block(a, (s32)(p / BLK))) { n = p; break; }
            u32 k = n - p < BLK ? n - p : BLK;
            if (a->ch == 1) memcpy(pcm + p, a->pcm[0], k * 2);
            else for (u32 i = 0; i < k; i++) pcm[p + i] = (s16)(((s32)a->pcm[0][i] + a->pcm[1][i]) / 2);
        }
        *frames = n; *rate = a->rate;
    }
    ak_adp_close(a);
    return pcm;
}
