/* A small MP4 (ISO BMFF) reader for the movie player (mpeg.c): the first H.264 video track and the first AAC audio track, as
 * lists of samples (file offset, size, time stamps) read from the sample tables, so samples can be read in order with plain file
 * reads.  Enough for the files the media conversion writes (convert.c) and for ordinary replacement movies (one video track,
 * one audio track, non-fragmented, 'avc1' + 'mp4a'). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mp4demux.h"

static uint32_t be32(const uint8_t *p){ return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3]; }
static uint64_t be64(const uint8_t *p){ return (uint64_t)be32(p) << 32 | be32(p + 4); }
static uint16_t be16(const uint8_t *p){ return (uint16_t)(p[0] << 8 | p[1]); }

typedef struct {
    uint32_t handler, timescale, codec; int w, h, ch, rate;
    uint8_t *cfg; int cfg_len;                           /* avcC record / AudioSpecificConfig */
    uint32_t *stsz; uint32_t nsz, fixed_sz;
    uint64_t *chunk; uint32_t nchunk;
    uint32_t *stsc; uint32_t nstsc;                     /* (first chunk, samples per chunk, desc) triples */
    uint32_t *stts; uint32_t nstts;                     /* (count, delta) pairs */
    uint32_t *ctts; uint32_t nctts;                     /* (count, offset) pairs */
    uint32_t *stss; uint32_t nstss;                     /* key frames (1-based); none = all */
} trak_t;

static void trak_free(trak_t *t){ free(t->cfg); free(t->stsz); free(t->chunk); free(t->stsc); free(t->stts); free(t->ctts); free(t->stss); memset(t, 0, sizeof *t); }

/* the descriptor length of an MPEG-4 ES descriptor (esds) */
static int desc_len(const uint8_t **p, const uint8_t *e){ int n = 0; for (int i = 0; i < 4 && *p < e; i++) { uint8_t b = *(*p)++; n = n << 7 | (b & 0x7F); if (!(b & 0x80)) break; } return n; }
static void parse_esds(trak_t *t, const uint8_t *p, const uint8_t *e){
    p += 4;                                                                             /* version + flags */
    while (p + 2 <= e) {
        uint8_t tag = *p++; int len = desc_len(&p, e); const uint8_t *body = p;
        if (tag == 3) { p = body + 3; if (body[2] & 0x80) p += 2; if (body[2] & 0x40) p += 1 + p[0]; if (body[2] & 0x20) p += 2; continue; }   /* ES: descend */
        if (tag == 4) { p = body + 13; continue; }                                    /* decoder config: descend */
        if (tag == 5 && len > 0 && body + len <= e) { free(t->cfg); t->cfg = malloc((size_t)len); memcpy(t->cfg, body, (size_t)len); t->cfg_len = len; return; }
        p = body + len; } }

static uint32_t *read_u32s(const uint8_t *p, const uint8_t *e, uint32_t n, int per){
    if (n > 50000000u || p + (uint64_t)n * per * 4 > e) return NULL;
    uint32_t *o = malloc(sizeof(uint32_t) * (size_t)n * per + 4); for (uint32_t i = 0; i < n * (uint32_t)per; i++) o[i] = be32(p + 4 * i); return o; }

static void parse_boxes(trak_t *t, const uint8_t *p, const uint8_t *e, int depth){
    while (p + 8 <= e && depth < 12) {
        uint64_t sz = be32(p); uint32_t ty = be32(p + 4); int hl = 8;
        if (sz == 1) { if (p + 16 > e) return; sz = be64(p + 8); hl = 16; } else if (sz == 0) sz = (uint64_t)(e - p);
        if (sz < (uint64_t)hl || p + sz > e) return;
        const uint8_t *b = p + hl, *be = p + sz;
#define T4(a, b2, c, d) ((uint32_t)(a) << 24 | (uint32_t)(b2) << 16 | (uint32_t)(c) << 8 | (uint32_t)(d))
        switch (ty) {
        case T4('m','d','i','a'): case T4('m','i','n','f'): case T4('s','t','b','l'): parse_boxes(t, b, be, depth + 1); break;
        case T4('m','d','h','d'): t->timescale = b[0] == 1 ? be32(b + 20) : be32(b + 12); break;
        case T4('h','d','l','r'): t->handler = be32(b + 8); break;
        case T4('s','t','s','d'): {
            const uint8_t *s = b + 8; if (s + 8 > be) break; uint32_t es = be32(s); const uint8_t *se = s + es > be ? be : s + es;
            t->codec = be32(s + 4);
            if (t->codec == T4('a','v','c','1') || t->codec == T4('a','v','c','3')) {
                t->w = be16(s + 32); t->h = be16(s + 34);
                for (const uint8_t *q = s + 86; q + 8 <= se; ) { uint32_t qs = be32(q); if (qs < 8 || q + qs > se) break;
                    if (be32(q + 4) == T4('a','v','c','C')) { free(t->cfg); t->cfg_len = (int)qs - 8; t->cfg = malloc((size_t)t->cfg_len); memcpy(t->cfg, q + 8, (size_t)t->cfg_len); }
                    q += qs; } }
            else if (t->codec == T4('m','p','4','a')) {
                t->ch = be16(s + 24); t->rate = (int)(be32(s + 32) >> 16);
                int ver = be16(s + 16); const uint8_t *q = s + 36 + (ver == 1 ? 16 : ver == 2 ? 36 : 0);
                for (; q + 8 <= se; ) { uint32_t qs = be32(q); if (qs < 8 || q + qs > se) break; if (be32(q + 4) == T4('e','s','d','s')) parse_esds(t, q + 8, q + qs); q += qs; } }
            break; }
        case T4('s','t','s','z'): t->fixed_sz = be32(b + 4); t->nsz = be32(b + 8); if (!t->fixed_sz) t->stsz = read_u32s(b + 12, be, t->nsz, 1); break;
        case T4('s','t','c','o'): { uint32_t n = be32(b + 4); if (b + 8 + 4ull * n > be) break; t->nchunk = n; t->chunk = malloc(sizeof(uint64_t) * n + 8); for (uint32_t i = 0; i < n; i++) t->chunk[i] = be32(b + 8 + 4 * i); break; }
        case T4('c','o','6','4'): { uint32_t n = be32(b + 4); if (b + 8 + 8ull * n > be) break; t->nchunk = n; t->chunk = malloc(sizeof(uint64_t) * n + 8); for (uint32_t i = 0; i < n; i++) t->chunk[i] = be64(b + 8 + 8 * i); break; }
        case T4('s','t','s','c'): t->nstsc = be32(b + 4); t->stsc = read_u32s(b + 8, be, t->nstsc, 3); break;
        case T4('s','t','t','s'): t->nstts = be32(b + 4); t->stts = read_u32s(b + 8, be, t->nstts, 2); break;
        case T4('c','t','t','s'): t->nctts = be32(b + 4); t->ctts = read_u32s(b + 8, be, t->nctts, 2); break;
        case T4('s','t','s','s'): t->nstss = be32(b + 4); t->stss = read_u32s(b + 8, be, t->nstss, 1); break;
        default: break; }
        p += sz; } }

/* the sample list of a track */
static int build(mp4_track_t *o, trak_t *t){
    uint32_t n = t->nsz; if (!n || !t->nchunk || !t->stsc || !t->nstsc || !t->timescale) return -1;
    o->s = calloc(n, sizeof *o->s); if (!o->s) return -1; o->n = n; o->timescale = t->timescale;
    uint32_t k = 0;
    for (uint32_t ci = 0, e = 0; ci < t->nchunk && k < n; ci++) {
        while (e + 1 < t->nstsc && ci + 1 >= t->stsc[(e + 1) * 3]) e++;
        uint32_t per = t->stsc[e * 3 + 1]; uint64_t off = t->chunk[ci];
        for (uint32_t j = 0; j < per && k < n; j++, k++) { uint32_t sz = t->fixed_sz ? t->fixed_sz : t->stsz[k]; o->s[k].off = off; o->s[k].size = sz; off += sz; } }
    o->n = k;
    uint64_t dts = 0; uint32_t si = 0;
    for (uint32_t e = 0; e < t->nstts && si < o->n; e++) for (uint32_t c = 0; c < t->stts[e * 2] && si < o->n; c++) { o->s[si].dts = dts; o->s[si].pts = dts; dts += t->stts[e * 2 + 1]; si++; }
    for (; si < o->n; si++) o->s[si].pts = o->s[si].dts = dts;
    si = 0; for (uint32_t e = 0; e < t->nctts && si < o->n; e++) for (uint32_t c = 0; c < t->ctts[e * 2] && si < o->n; c++) { o->s[si].pts = o->s[si].dts + (int32_t)t->ctts[e * 2 + 1]; si++; }
    if (!t->stss) for (uint32_t i = 0; i < o->n; i++) o->s[i].key = 1;
    else for (uint32_t i = 0; i < t->nstss; i++) if (t->stss[i] >= 1 && t->stss[i] <= o->n) o->s[t->stss[i] - 1].key = 1;
    o->duration = dts; o->cfg = t->cfg; o->cfg_len = t->cfg_len; t->cfg = NULL;
    o->width = t->w; o->height = t->h; o->channels = t->ch; o->rate = t->rate; return 0; }

int mp4_open(mp4_t *m, const char *path){
    memset(m, 0, sizeof *m); m->f = fopen(path, "rb"); if (!m->f) return -1;
    /* find moov (top level) */
    uint8_t h[16]; uint64_t pos = 0; uint8_t *moov = NULL; uint64_t ml = 0;
    for (;;) {
        if (fseek(m->f, (long)pos, SEEK_SET) || fread(h, 1, 8, m->f) != 8) break;
        uint64_t sz = be32(h); uint32_t ty = be32(h + 4); int hl = 8;
        if (sz == 1) { if (fread(h + 8, 1, 8, m->f) != 8) break; sz = be64(h + 8); hl = 16; }
        if (sz == 0) { fseek(m->f, 0, SEEK_END); sz = (uint64_t)ftell(m->f) - pos; }
        if (sz < (uint64_t)hl) break;
        if (ty == T4('m','o','o','v') && sz < (64u << 20)) { ml = sz - (uint64_t)hl; moov = malloc((size_t)ml); if (!moov || fread(moov, 1, (size_t)ml, m->f) != ml) { free(moov); moov = NULL; } break; }
        pos += sz; }
    if (!moov) { fclose(m->f); m->f = NULL; return -2; }
    const uint8_t *p = moov, *e = moov + ml;
    while (p + 8 <= e) {
        uint64_t sz = be32(p); if (sz < 8 || p + sz > e) break;
        if (be32(p + 4) == T4('t','r','a','k')) {
            trak_t t; memset(&t, 0, sizeof t); parse_boxes(&t, p + 8, p + sz, 0);
            if (t.handler == T4('v','i','d','e') && !m->video.n && (t.codec == T4('a','v','c','1') || t.codec == T4('a','v','c','3')) && t.cfg) build(&m->video, &t);
            else if (t.handler == T4('s','o','u','n') && !m->audio.n && t.codec == T4('m','p','4','a') && t.cfg) build(&m->audio, &t);
            trak_free(&t); }
        p += sz; }
    free(moov);
    if (!m->video.n) { mp4_close(m); return -3; }
    return 0; }

int mp4_read(mp4_t *m, const mp4_sample_t *s, uint8_t *buf){
    if (fseek(m->f, (long)s->off, SEEK_SET)) return -1;
    return fread(buf, 1, s->size, m->f) == s->size ? 0 : -1; }

void mp4_close(mp4_t *m){ if (m->f) fclose(m->f); free(m->video.s); free(m->video.cfg); free(m->audio.s); free(m->audio.cfg); memset(m, 0, sizeof *m); }
