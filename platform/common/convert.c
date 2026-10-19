/* First-boot media conversion: .AT3 -> PCM .wav, .PMF -> .mp4 (H.264 copied, audio to AAC).  See convert.h.
 *
 * Audio: the output holds, for every ATRAC frame in order, exactly what ha_DecodeData (audio.c) used to compute at run time: the
 * frame decoded by the ext/at3 decoder, converted to 16-bit with the same rounding, always stereo (mono is duplicated).  Frame k
 * therefore lives at data offset k * spf * 4, and playback becomes a file read.
 *
 * Video: the PMF is an MPEG program stream behind a 2 KB PSMF header.  Stream 0xE0 is H.264 (Annex B, an access-unit delimiter
 * before every picture); private stream 1 sub-stream 0 is ATRAC3plus (4 header bytes per PES packet, then frames, each an 8-byte
 * 0x0FD0 header + the frame).  The demuxer streams the file in 64 KB reads, so memory use does not grow with the video. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <errno.h>
#include <pthread.h>
#include <sys/stat.h>
#include "vfs.h"
#include "convert.h"
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/channel_layout.h>
#include <libavutil/opt.h>

void *rs_at3p_alloc(int ch, int ba); int rs_at3p_decode(void *c, float *l, float *r, int *ns, const unsigned char *buf, int size); void rs_at3p_free(void *c);
void *rs_at3_alloc(int ch, int ba, const unsigned char *extra, int extra_size); int rs_at3_decode(void *c, float *l, float *r, int *ns, const unsigned char *buf, int size); void rs_at3_free(void *c);

#define MANIFEST_VERSION "rsconv 1"
#define MAXJOB 512
typedef struct { char rel[256]; char src[1100]; int kind; unsigned size; uint32_t sig; uint64_t out_size; int state; } job_t;   /* kind 0 audio, 1 video; state 0 ok, 1 todo, 2 done, 3 failed */
static job_t jobs[MAXJOB]; static int njobs, next_job;
static char g_root[1024], g_out[1024];
static int g_workers; static uint64_t g_free;
static pthread_mutex_t mx = PTHREAD_MUTEX_INITIALIZER, dec_mx = PTHREAD_MUTEX_INITIALIZER;
static rs_conv_status_t st;
static volatile int active;

static void set_failed(const char *fmt, const char *a){ pthread_mutex_lock(&mx); st.phase = RS_CONV_FAILED; snprintf(st.message, sizeof st.message, fmt, a); pthread_mutex_unlock(&mx); }
void rs_convert_status(rs_conv_status_t *o){ pthread_mutex_lock(&mx); *o = st; pthread_mutex_unlock(&mx); }
static void add_work(uint64_t n){ pthread_mutex_lock(&mx); st.work_done += n; if (st.work_done > st.work_total) st.work_done = st.work_total; pthread_mutex_unlock(&mx); }

/* ------------------------------------------------------------------ paths */
static void mkdirs(const char *path){            /* mkdir -p of the folder part of path */
    char t[1400]; snprintf(t, sizeof t, "%s", path); char *s = strrchr(t, '/'); if (!s) return; *s = 0;
    for (char *p = t + 1; *p; p++) if (*p == '/') { *p = 0; mkdir(t, 0777); *p = '/'; }
    mkdir(t, 0777); }
static void out_path(char *o, size_t cap, const char *rel, int kind){ snprintf(o, cap, "%s/%s%s", g_out, rel, kind ? ".mp4" : ".wav"); }

const char *rs_convert_output_for(const char *full, const char *ext){
    static __thread char buf[1300];
    if (!active || !full) return 0;
    size_t rl = strlen(g_root); const char *rel;
    if (!strncmp(full, g_root, rl)) rel = full + rl; else return 0;
    while (*rel == '/') rel++;
    const char *u = strstr(rel, "PSP_GAME/"); if (!u) return 0;                    /* rel is relative to the disc root */
    char up[256]; size_t n = strlen(rel); if (n >= sizeof up) return 0;
    for (size_t i = 0; i <= n; i++) up[i] = (rel[i] >= 'a' && rel[i] <= 'z') ? (char)(rel[i] - 32) : rel[i];
    for (int i = 0; i < njobs; i++) if (!strcmp(jobs[i].rel, up) && jobs[i].state != 3) {
        if (strcasecmp(ext, jobs[i].kind ? ".mp4" : ".wav")) return 0;
        out_path(buf, sizeof buf, up, jobs[i].kind); return buf; }
    return 0; }

/* ------------------------------------------------------------------ discovery + manifest */
static uint32_t fnv(const unsigned char *p, size_t n, uint32_t h){ for (size_t i = 0; i < n; i++) { h ^= p[i]; h *= 16777619u; } return h; }
static uint32_t src_sig(const char *src){
    FILE *f = vfs_fopen(src, "rb"); if (!f) return 0; unsigned char b[4096]; size_t n = fread(b, 1, sizeof b, f); fclose(f); return fnv(b, n, 2166136261u); }

static void scan(const char *full, const char *rel, int depth){
    void *d = vfs_opendir(full); if (!d) return; char name[256], sub[1100];
    while (vfs_readdir(d, name, sizeof name, sub, sizeof sub)) {
        if (name[0] == '.') continue;
        char r[256]; snprintf(r, sizeof r, "%s/%s", rel, name); for (char *p = r; *p; p++) if (*p >= 'a' && *p <= 'z') *p -= 32;
        int isdir = 0; unsigned size = 0; if (vfs_stat(sub, &isdir, &size)) continue;
        if (isdir) { if (depth < 8) scan(sub, r, depth + 1); continue; }
        size_t l = strlen(r); int kind = -1;
        if (l > 4 && !strcmp(r + l - 4, ".AT3")) kind = 0; else if (l > 4 && !strcmp(r + l - 4, ".PMF")) kind = 1;
        if (kind < 0 || njobs >= MAXJOB) continue;
        job_t *j = &jobs[njobs++]; memset(j, 0, sizeof *j); snprintf(j->rel, sizeof j->rel, "%s", r); snprintf(j->src, sizeof j->src, "%s", sub); j->kind = kind; j->size = size; }
    vfs_closedir(d); }

static void manifest_write(void){
    char p[1200], t[1200]; snprintf(p, sizeof p, "%s/manifest.txt", g_out); snprintf(t, sizeof t, "%s.tmp", p);
    FILE *f = fopen(t, "w"); if (!f) return; fprintf(f, "%s\n", MANIFEST_VERSION);
    for (int i = 0; i < njobs; i++) if (jobs[i].state == 0 || jobs[i].state == 2) fprintf(f, "%s %u %08x %llu\n", jobs[i].rel, jobs[i].size, jobs[i].sig, (unsigned long long)jobs[i].out_size);
    fclose(f); remove(p); rename(t, p); }

static void check_all(void){
    char p[1200]; snprintf(p, sizeof p, "%s/manifest.txt", g_out);
    FILE *f = fopen(p, "r"); char line[512]; int ver_ok = 0;
    typedef struct { char rel[256]; unsigned size; uint32_t sig; unsigned long long out; } ment_t;
    static ment_t m[MAXJOB]; int nm = 0;
    if (f) { if (fgets(line, sizeof line, f) && !strncmp(line, MANIFEST_VERSION, strlen(MANIFEST_VERSION))) ver_ok = 1;
        while (ver_ok && nm < MAXJOB && fgets(line, sizeof line, f)) if (sscanf(line, "%255s %u %x %llu", m[nm].rel, &m[nm].size, &m[nm].sig, &m[nm].out) == 4) nm++;
        fclose(f); }
    for (int i = 0; i < njobs; i++) {
        job_t *j = &jobs[i]; j->sig = src_sig(j->src); j->state = 1;
        for (int k = 0; k < nm; k++) if (!strcmp(m[k].rel, j->rel)) {
            if (m[k].size != j->size || m[k].sig != j->sig) break;               /* different source file: convert again */
            char o[1300]; out_path(o, sizeof o, j->rel, j->kind); struct stat s;
            if (stat(o, &s) == 0 && (unsigned long long)s.st_size == m[k].out && m[k].out > 0) { j->state = 0; j->out_size = m[k].out; }
            break; }
        pthread_mutex_lock(&mx); st.files_total = njobs; if (j->state == 0) st.files_ok++; else { st.files_todo++; st.work_total += j->size; } pthread_mutex_unlock(&mx); } }

/* ------------------------------------------------------------------ AT3 -> PCM */
typedef struct { int codec, ch, ba; uint32_t data_off, data_len; unsigned char extra[32]; int extra_len; } riff_t;
static int riff_parse(const unsigned char *b, uint32_t n, riff_t *a){
    if (n < 12 || memcmp(b, "RIFF", 4) || memcmp(b + 8, "WAVE", 4)) return -1;
    uint32_t p = 12; int have_fmt = 0; memset(a, 0, sizeof *a); a->codec = -1;
    while (p + 8 <= n) { uint32_t len; memcpy(&len, b + p + 4, 4); const unsigned char *d = b + p + 8;
        if (!memcmp(b + p, "fmt ", 4) && p + 8 + 16 <= n) { uint16_t fmt, ch, ba; memcpy(&fmt, d, 2); memcpy(&ch, d + 2, 2); memcpy(&ba, d + 12, 2); a->ch = ch; a->ba = ba;
            a->codec = fmt == 0xFFFE ? 1 : (fmt == 0x270 ? 0 : -1); have_fmt = 1;
            if (a->codec == 0 && len >= 18) { uint16_t cb; memcpy(&cb, d + 16, 2); int el = cb < 32 ? cb : 32; if (p + 8 + 18 + el <= n) { memcpy(a->extra, d + 18, el); a->extra_len = el; } } }
        else if (!memcmp(b + p, "data", 4)) { a->data_off = p + 8; a->data_len = len; return have_fmt ? 0 : -1; }
        p += 8 + len + (len & 1); }
    return -1; }

static inline int16_t clamp16(int v){ return v < -32768 ? -32768 : (v > 32767 ? 32767 : (int16_t)v); }
static void wr32(unsigned char *p, uint32_t v){ p[0] = v; p[1] = v >> 8; p[2] = v >> 16; p[3] = v >> 24; }
static void wr16(unsigned char *p, uint16_t v){ p[0] = v; p[1] = v >> 8; }

static int conv_audio(job_t *j, const char *tmp, uint64_t *out_size){
    FILE *in = vfs_fopen(j->src, "rb"); if (!in) return -1;
    unsigned char head[4096]; size_t hn = fread(head, 1, sizeof head, in); riff_t a;
    if (riff_parse(head, (uint32_t)hn, &a) || a.codec < 0 || a.ba <= 0 || a.ba > 4096 || a.ch < 1 || a.ch > 2) { fclose(in); return -2; }
    uint32_t nframes = a.data_len / (uint32_t)a.ba; int spf = a.codec ? 2048 : 1024;
    pthread_mutex_lock(&dec_mx); void *dec = a.codec ? rs_at3p_alloc(a.ch, a.ba) : rs_at3_alloc(a.ch, a.ba, a.extra_len ? a.extra : 0, a.extra_len); pthread_mutex_unlock(&dec_mx);
    if (!dec) { fclose(in); return -3; }
    FILE *o = fopen(tmp, "wb"); if (!o) { fclose(in); return -4; }
    unsigned char h[44]; uint32_t data_bytes = nframes * (uint32_t)spf * 4u;
    memcpy(h, "RIFF", 4); wr32(h + 4, 36 + data_bytes); memcpy(h + 8, "WAVEfmt ", 8); wr32(h + 16, 16); wr16(h + 20, 1); wr16(h + 22, 2);
    wr32(h + 24, 44100); wr32(h + 28, 44100 * 4); wr16(h + 32, 4); wr16(h + 34, 16); memcpy(h + 36, "data", 4); wr32(h + 40, data_bytes);
    fwrite(h, 1, 44, o);
    float *L = malloc(sizeof(float) * 4096), *R = malloc(sizeof(float) * 4096); int16_t *pcm = malloc(sizeof(int16_t) * 4096 * 2); unsigned char fb[4096];
    if (!L || !R || !pcm) { free(L); free(R); free(pcm); fclose(in); fclose(o); return -12; }
    fseek(in, (long)a.data_off, SEEK_SET); int err = 0; uint32_t since = 0;
    for (uint32_t k = 0; k < nframes && !err; k++) {
        int ns = 0;
        if (fread(fb, 1, (size_t)a.ba, in) == (size_t)a.ba) { int r = a.codec ? rs_at3p_decode(dec, L, R, &ns, fb, a.ba) : rs_at3_decode(dec, L, R, &ns, fb, a.ba); if (r < 0) ns = 0; }
        if (ns != spf) { ns = spf; memset(L, 0, sizeof(float) * spf); memset(R, 0, sizeof(float) * spf); }    /* as ha_DecodeData: a bad frame is silence */
        if (a.ch == 1) memcpy(R, L, sizeof(float) * (size_t)ns);
        for (int i = 0; i < ns; i++) { pcm[i * 2] = clamp16((int)(L[i] * 32768.0f)); pcm[i * 2 + 1] = clamp16((int)(R[i] * 32768.0f)); }
        if (fwrite(pcm, 4, (size_t)ns, o) != (size_t)ns) err = -5;
        since += (uint32_t)a.ba; if (since >= 65536) { add_work(since); since = 0; } }
    add_work(since + a.data_off);
    pthread_mutex_lock(&dec_mx); if (a.codec) rs_at3p_free(dec); else rs_at3_free(dec); pthread_mutex_unlock(&dec_mx);
    free(L); free(R); free(pcm);
    fclose(in); if (fclose(o)) err = -5;
    *out_size = 44ull + data_bytes; return err; }

/* ------------------------------------------------------------------ PMF -> MP4 */
typedef struct { const unsigned char *p; int n, bit; } br_t;           /* bit reader over an RBSP (emulation bytes removed) */
static unsigned rb(br_t *b){ if (b->bit >= b->n * 8) return 0; unsigned v = (b->p[b->bit >> 3] >> (7 - (b->bit & 7))) & 1; b->bit++; return v; }
static unsigned rbits(br_t *b, int n){ unsigned v = 0; while (n--) v = (v << 1) | rb(b); return v; }
static unsigned ue(br_t *b){ int z = 0; while (!rb(b) && z < 32) z++; return z ? ((1u << z) - 1 + rbits(b, z)) : 0; }
static int se(br_t *b){ unsigned k = ue(b); return (k & 1) ? (int)((k + 1) / 2) : -(int)(k / 2); }
static int sps_size(const unsigned char *nal, int n, int *w, int *h){               /* nal includes the 1-byte NAL header */
    unsigned char r[256]; int m = 0; for (int i = 1; i < n && m < (int)sizeof r; i++) { if (i >= 3 && nal[i] == 3 && nal[i - 1] == 0 && nal[i - 2] == 0) continue; r[m++] = nal[i]; }
    br_t b = {r, m, 0}; unsigned prof = rbits(&b, 8); rbits(&b, 16); ue(&b);
    if (prof == 100 || prof == 110 || prof == 122 || prof == 244 || prof == 44 || prof == 83 || prof == 86 || prof == 118 || prof == 128) {
        unsigned cf = ue(&b); if (cf == 3) rb(&b); ue(&b); ue(&b); rb(&b); if (rb(&b)) for (int i = 0; i < (cf != 3 ? 8 : 12); i++) if (rb(&b)) { int last = 8, next = 8; for (int k = 0; k < (i < 6 ? 16 : 64); k++) { if (next) next = (last + se(&b) + 256) % 256; last = next ? next : last; } } }
    ue(&b); unsigned poc = ue(&b); if (poc == 0) ue(&b); else if (poc == 1) { rb(&b); se(&b); se(&b); unsigned c = ue(&b); for (unsigned i = 0; i < c && i < 256; i++) se(&b); }
    ue(&b); rb(&b); unsigned wm = ue(&b) + 1, hm = ue(&b) + 1, fmo = rb(&b); if (!fmo) rb(&b); rb(&b);
    unsigned cl = 0, cr = 0, ct = 0, cbm = 0; if (rb(&b)) { cl = ue(&b); cr = ue(&b); ct = ue(&b); cbm = ue(&b); }
    *w = (int)(wm * 16 - (cl + cr) * 2); *h = (int)((2 - fmo) * hm * 16 - (ct + cbm) * 2 * (2 - fmo)); return 0; }

typedef struct {
    AVFormatContext *fc; AVStream *vs, *as; AVCodecContext *enc; AVFrame *fr; AVPacket *pkt;
    int header_done, failed;
    /* video */
    unsigned char *au; int au_len, au_cap; uint64_t es_pos, au_start;     /* AU being collected, its absolute ES offset */
    struct { uint64_t off; int64_t pts; } q[64]; int qn;                  /* PTS of PES packets, by ES offset of their payload */
    int64_t last_pts, dur, first_pts; int have_first;
    unsigned char extradata[512]; int ext_len, width, height;
    unsigned char **pend; int *pend_len; int64_t *pend_pts; int *pend_key; int npend;   /* AUs held until the header can be written */
    /* audio */
    void *dec; int ach; unsigned char abuf[2048]; int alen; int64_t a_first_pts; int have_apts;
    float *fl, *frr; int fill; int64_t a_samples;                          /* encoder input FIFO (planar) */
} mux_t;

static int nal_type_at(const unsigned char *p, int n, int i){ return (i + 3 < n && p[i] == 0 && p[i + 1] == 0 && p[i + 2] == 1) ? (p[i + 3] & 0x1F) : -1; }

static void collect_params(mux_t *m, const unsigned char *p, int n){       /* first SPS + PPS of the stream -> extradata (Annex B) */
    if (m->ext_len) return; int sps = -1, sps_e = 0, pps = -1, pps_e = 0;
    for (int i = 0; i + 3 < n; i++) { int t = nal_type_at(p, n, i); if (t < 0) continue;
        int e = i + 3; while (e + 2 < n && !(p[e] == 0 && p[e + 1] == 0 && (p[e + 2] == 1 || (e + 3 < n && p[e + 2] == 0 && p[e + 3] == 1)))) e++; if (e + 2 >= n) e = n;
        if (t == 7 && sps < 0) { sps = i + 3; sps_e = e; } else if (t == 8 && pps < 0) { pps = i + 3; pps_e = e; } i = e - 1; }
    if (sps < 0 || pps < 0 || (sps_e - sps) + (pps_e - pps) + 8 > (int)sizeof m->extradata) return;
    int k = 0; static const unsigned char sc[4] = {0, 0, 0, 1};
    memcpy(m->extradata + k, sc, 4); k += 4; memcpy(m->extradata + k, p + sps, (size_t)(sps_e - sps)); k += sps_e - sps;
    memcpy(m->extradata + k, sc, 4); k += 4; memcpy(m->extradata + k, p + pps, (size_t)(pps_e - pps)); k += pps_e - pps;
    m->ext_len = k; sps_size(p + sps, sps_e - sps, &m->width, &m->height); }

static int write_header(mux_t *m){
    AVCodecParameters *vp = m->vs->codecpar; vp->codec_type = AVMEDIA_TYPE_VIDEO; vp->codec_id = AV_CODEC_ID_H264; vp->width = m->width; vp->height = m->height;
    vp->extradata = av_mallocz((size_t)m->ext_len + AV_INPUT_BUFFER_PADDING_SIZE); memcpy(vp->extradata, m->extradata, (size_t)m->ext_len); vp->extradata_size = m->ext_len;
    m->vs->time_base = (AVRational){1, 90000};
    if (m->as) { avcodec_parameters_from_context(m->as->codecpar, m->enc); m->as->time_base = (AVRational){1, 44100}; }
    if (avformat_write_header(m->fc, 0) < 0) return -1;
    m->header_done = 1; return 0; }

static void put_video(mux_t *m, const unsigned char *d, int n, int64_t pts, int key){
    if (!m->header_done) {                                                  /* hold until SPS/PPS are known */
        m->pend = realloc(m->pend, sizeof *m->pend * (size_t)(m->npend + 1)); m->pend_len = realloc(m->pend_len, sizeof(int) * (size_t)(m->npend + 1));
        m->pend_pts = realloc(m->pend_pts, sizeof(int64_t) * (size_t)(m->npend + 1)); m->pend_key = realloc(m->pend_key, sizeof(int) * (size_t)(m->npend + 1));
        m->pend[m->npend] = malloc((size_t)n); memcpy(m->pend[m->npend], d, (size_t)n); m->pend_len[m->npend] = n; m->pend_pts[m->npend] = pts; m->pend_key[m->npend] = key; m->npend++;
        if (m->ext_len) {
            if (write_header(m)) { m->failed = 1; return; }
            for (int i = 0; i < m->npend; i++) { put_video(m, m->pend[i], m->pend_len[i], m->pend_pts[i], m->pend_key[i]); free(m->pend[i]); } m->npend = 0; }
        return; }
    av_packet_unref(m->pkt); if (av_new_packet(m->pkt, n) < 0) { m->failed = 1; return; } memcpy(m->pkt->data, d, (size_t)n);
    m->pkt->stream_index = m->vs->index; m->pkt->pts = m->pkt->dts = pts; m->pkt->duration = m->dur; if (key) m->pkt->flags |= AV_PKT_FLAG_KEY;
    av_packet_rescale_ts(m->pkt, (AVRational){1, 90000}, m->vs->time_base);
    if (av_interleaved_write_frame(m->fc, m->pkt) < 0) m->failed = 1; }

static void emit_au(mux_t *m){
    if (m->au_len <= 0) return;
    int64_t pts = AV_NOPTS_VALUE;
    while (m->qn > 0 && m->q[0].off <= m->au_start) { pts = m->q[0].pts; memmove(m->q, m->q + 1, sizeof m->q[0] * (size_t)(m->qn - 1)); m->qn--; }
    int real = pts != AV_NOPTS_VALUE;
    if (!m->have_first) { if (!real) pts = 0; m->first_pts = pts; m->have_first = 1; }
    else {
        if (!real) pts = m->last_pts + m->dur;
        else if (pts > m->last_pts && pts - m->last_pts < 90000) m->dur = pts - m->last_pts;
        if (pts <= m->last_pts) pts = m->last_pts + m->dur; }                /* keep timestamps increasing */
    m->last_pts = pts;
    int key = 0; for (int i = 0; i + 3 < m->au_len; i++) { int t = nal_type_at(m->au, m->au_len, i); if (t == 5) { key = 1; break; } }
    collect_params(m, m->au, m->au_len);
    put_video(m, m->au, m->au_len, pts - m->first_pts, key);
    m->au_len = 0; }

static void video_bytes(mux_t *m, const unsigned char *d, int n){
    for (int i = 0; i < n; i++) {
        if (m->au_len + 1 > m->au_cap) { m->au_cap = m->au_cap ? m->au_cap * 2 : 65536; m->au = realloc(m->au, (size_t)m->au_cap); }
        m->au[m->au_len++] = d[i]; m->es_pos++;
        /* an access unit delimiter (00 00 01 09) starting after the current AU's first bytes begins the next AU */
        if (m->au_len >= 8 && m->au[m->au_len - 1] == 0x09 && m->au[m->au_len - 2] == 1 && m->au[m->au_len - 3] == 0 && m->au[m->au_len - 4] == 0) {
            int sc = (m->au_len >= 5 && m->au[m->au_len - 5] == 0) ? 5 : 4;   /* 4-byte start code: take its leading zero too */
            int keep = m->au_len - sc; unsigned char tail[5]; memcpy(tail, m->au + keep, (size_t)sc);
            m->au_len = keep; emit_au(m); memcpy(m->au, tail, (size_t)sc); m->au_len = sc; m->au_start = m->es_pos - (uint64_t)sc; } } }

static int encode_ready(mux_t *m, int flush){
    while (m->fill >= m->enc->frame_size || (flush && m->fill > 0)) {
        int n = m->fill < m->enc->frame_size ? m->fill : m->enc->frame_size;
        av_frame_make_writable(m->fr); m->fr->nb_samples = m->enc->frame_size;
        float *l = (float *)m->fr->data[0], *r = (float *)m->fr->data[1];
        memcpy(l, m->fl, sizeof(float) * (size_t)n); memcpy(r, m->frr, sizeof(float) * (size_t)n);
        if (n < m->enc->frame_size) { memset(l + n, 0, sizeof(float) * (size_t)(m->enc->frame_size - n)); memset(r + n, 0, sizeof(float) * (size_t)(m->enc->frame_size - n)); }
        memmove(m->fl, m->fl + n, sizeof(float) * (size_t)(m->fill - n)); memmove(m->frr, m->frr + n, sizeof(float) * (size_t)(m->fill - n)); m->fill -= n;
        m->fr->pts = m->a_samples; m->a_samples += m->enc->frame_size;
        if (avcodec_send_frame(m->enc, m->fr) < 0) return -1;
        for (;;) { int r2 = avcodec_receive_packet(m->enc, m->pkt); if (r2 == AVERROR(EAGAIN) || r2 == AVERROR_EOF) break; if (r2 < 0) return -1;
            m->pkt->stream_index = m->as->index;
            if (m->have_apts && m->have_first) { int64_t off = av_rescale_q(m->a_first_pts - m->first_pts, (AVRational){1, 90000}, (AVRational){1, 44100}); m->pkt->pts += off; m->pkt->dts += off; }
            if (!m->header_done) { av_packet_unref(m->pkt); continue; }        /* audio before the first picture is dropped (none in practice) */
            av_packet_rescale_ts(m->pkt, (AVRational){1, 44100}, m->as->time_base);
            if (av_interleaved_write_frame(m->fc, m->pkt) < 0) return -1; } }
    return 0; }

static void audio_bytes(mux_t *m, const unsigned char *d, int n){
    for (int i = 0; i < n && !m->failed; i++) {
        m->abuf[m->alen++] = d[i];
        if (m->alen < 8) continue;
        if (m->abuf[0] != 0x0F || m->abuf[1] != 0xD0) { memmove(m->abuf, m->abuf + 1, (size_t)--m->alen); continue; }     /* resync */
        int fs = (((m->abuf[2] & 3) << 8) | m->abuf[3]) * 8 + 8;
        if (fs < 16 || fs > (int)sizeof m->abuf - 8) { memmove(m->abuf, m->abuf + 1, (size_t)--m->alen); continue; }
        if (m->alen < fs + 8) continue;
        if (!m->dec) { int ch = (m->abuf[2] >> 2) & 7; m->ach = ch == 1 ? 1 : 2; pthread_mutex_lock(&dec_mx); m->dec = rs_at3p_alloc(m->ach, fs); pthread_mutex_unlock(&dec_mx); }
        float L[2048], R[2048]; int ns = 0;
        if (m->dec && rs_at3p_decode(m->dec, L, R, &ns, m->abuf + 8, fs) < 0) ns = 0;
        if (ns <= 0) { ns = 2048; memset(L, 0, sizeof L); memset(R, 0, sizeof R); }
        if (m->ach == 1) memcpy(R, L, sizeof(float) * (size_t)ns);
        m->fl = realloc(m->fl, sizeof(float) * (size_t)(m->fill + ns)); m->frr = realloc(m->frr, sizeof(float) * (size_t)(m->fill + ns));
        memcpy(m->fl + m->fill, L, sizeof(float) * (size_t)ns); memcpy(m->frr + m->fill, R, sizeof(float) * (size_t)ns); m->fill += ns;
        if (encode_ready(m, 0)) m->failed = 1;
        m->alen = 0; } }

static int64_t rd_pts(const unsigned char *p){ return ((int64_t)(p[0] & 0x0E) << 29) | ((int64_t)p[1] << 22) | ((int64_t)(p[2] & 0xFE) << 14) | ((int64_t)p[3] << 7) | (p[4] >> 1); }

static int pmf_has_audio(FILE *in){                                        /* quick scan of the first 512 KB for private stream 1 */
    unsigned char *b = malloc(512 * 1024); if (!b) return 1; fseek(in, 0, SEEK_SET); size_t n = fread(b, 1, 512 * 1024, in); int found = 0;
    for (size_t i = 2048; i + 4 < n; i++) if (b[i] == 0 && b[i + 1] == 0 && b[i + 2] == 1 && b[i + 3] == 0xBD) { found = 1; break; }
    free(b); fseek(in, 0, SEEK_SET); return found; }

static int conv_video(job_t *j, const char *tmp, uint64_t *out_size){
    FILE *in = vfs_fopen(j->src, "rb"); if (!in) return -1;
    unsigned char hdr[16]; if (fread(hdr, 1, 16, in) != 16 || memcmp(hdr, "PSMF", 4)) { fclose(in); return -2; }
    uint32_t off = ((uint32_t)hdr[8] << 24) | ((uint32_t)hdr[9] << 16) | ((uint32_t)hdr[10] << 8) | hdr[11];
    mux_t m; memset(&m, 0, sizeof m); m.dur = 3003; int has_audio = pmf_has_audio(in);
    if (avformat_alloc_output_context2(&m.fc, 0, "mp4", tmp) < 0 || !m.fc) { fclose(in); return -3; }
    m.vs = avformat_new_stream(m.fc, 0); m.pkt = av_packet_alloc();
    if (has_audio) {
        const AVCodec *c = avcodec_find_encoder(AV_CODEC_ID_AAC); if (!c) { fclose(in); avformat_free_context(m.fc); return -6; }
        m.as = avformat_new_stream(m.fc, 0); m.enc = avcodec_alloc_context3(c);
        m.enc->sample_rate = 44100; m.enc->sample_fmt = AV_SAMPLE_FMT_FLTP; m.enc->bit_rate = 128000; av_channel_layout_default(&m.enc->ch_layout, 2);
        m.enc->time_base = (AVRational){1, 44100}; m.enc->profile = 1 /* AAC LC */;
        if (m.fc->oformat->flags & AVFMT_GLOBALHEADER) m.enc->flags |= AV_CODEC_FLAG_GLOBAL_HEADER;
        AVDictionary *o = 0; av_dict_set(&o, "aac_coder", "fast", 0);
        if (avcodec_open2(m.enc, c, &o) < 0) { av_dict_free(&o); fclose(in); avformat_free_context(m.fc); return -6; } av_dict_free(&o);
        m.fr = av_frame_alloc(); m.fr->format = AV_SAMPLE_FMT_FLTP; m.fr->nb_samples = m.enc->frame_size; av_channel_layout_copy(&m.fr->ch_layout, &m.enc->ch_layout); m.fr->sample_rate = 44100;
        if (av_frame_get_buffer(m.fr, 0) < 0) { fclose(in); avformat_free_context(m.fc); return -6; } }
    /* "file:" first: FFmpeg reads a leading "ux0:" (the Vita's device names) as a protocol name and fails with "protocol not found" */
    { char url[1400]; snprintf(url, sizeof url, "file:%s", tmp); int r = 0;
      if (!(m.fc->oformat->flags & AVFMT_NOFILE) && (r = avio_open(&m.fc->pb, url, AVIO_FLAG_WRITE)) < 0) {
          char e[128]; av_strerror(r, e, sizeof e); fprintf(stderr, "[CONV] cannot write %s: %s\n", tmp, e); fclose(in); avformat_free_context(m.fc); return -4; } }

    /* stream the program stream */
    enum { CH = 65536 }; unsigned char *buf = malloc(CH * 2); int bl = 0; uint64_t file_pos = off; fseek(in, (long)off, SEEK_SET); int eof = 0; uint64_t since = 0;
    while (!m.failed) {
        if (!eof && bl < CH) { size_t r = fread(buf + bl, 1, (size_t)(CH * 2 - bl), in); if (r == 0) eof = 1; bl += (int)r; since += r; if (since >= 262144) { add_work(since); since = 0; } }
        if (bl < 6) break;
        int p = 0;
        while (p + 6 <= bl) {
            if (!(buf[p] == 0 && buf[p + 1] == 0 && buf[p + 2] == 1)) { p++; continue; }
            int sid = buf[p + 3], need;
            if (sid == 0xBA) { if (p + 14 > bl) break; need = 14 + (buf[p + 13] & 7); if (p + need > bl) break; p += need; continue; }
            if (sid == 0xB9) { p = bl; eof = 1; break; }
            if (sid < 0xBB) { p++; continue; }
            int len = (buf[p + 4] << 8) | buf[p + 5]; need = 6 + len; if (p + need > bl) break;
            if ((sid == 0xE0 || sid == 0xBD) && len >= 3) {
                int flags = buf[p + 7], hl = buf[p + 8]; const unsigned char *pay = buf + p + 9 + hl; int pl = len - 3 - hl;
                if (pl > 0) {
                    if (sid == 0xE0) { if ((flags & 0x80) && hl >= 5 && m.qn < 64) { m.q[m.qn].off = m.es_pos; m.q[m.qn].pts = rd_pts(buf + p + 9); m.qn++; } video_bytes(&m, pay, pl); }
                    else if (pay[0] == 0x00 && pl > 4 && m.enc) { if ((flags & 0x80) && hl >= 5 && !m.have_apts) { m.a_first_pts = rd_pts(buf + p + 9); m.have_apts = 1; } audio_bytes(&m, pay + 4, pl - 4); } } }
            p += need; }
        memmove(buf, buf + p, (size_t)(bl - p)); bl -= p; file_pos += (uint64_t)p;
        if (eof && p == 0) break; }
    add_work(since);
    if (!m.failed) emit_au(&m);
    if (!m.failed && !m.header_done && m.ext_len) { if (write_header(&m)) m.failed = 1; else { for (int i = 0; i < m.npend; i++) put_video(&m, m.pend[i], m.pend_len[i], m.pend_pts[i], m.pend_key[i]); } }
    if (!m.failed && m.enc) { if (encode_ready(&m, 1) == 0) { avcodec_send_frame(m.enc, 0); for (;;) { int r = avcodec_receive_packet(m.enc, m.pkt); if (r < 0) break; m.pkt->stream_index = m.as->index;
                if (m.have_apts && m.have_first) { int64_t o2 = av_rescale_q(m.a_first_pts - m.first_pts, (AVRational){1, 90000}, (AVRational){1, 44100}); m.pkt->pts += o2; m.pkt->dts += o2; }
                av_packet_rescale_ts(m.pkt, (AVRational){1, 44100}, m.as->time_base);
                if (av_interleaved_write_frame(m.fc, m.pkt) < 0) { m.failed = 1; break; } } } else m.failed = 1; }
    int rc = 0;
    if (m.header_done) { if (av_write_trailer(m.fc) < 0) rc = -7; } else rc = -8;
    if (m.failed) rc = rc ? rc : -9;
    if (!(m.fc->oformat->flags & AVFMT_NOFILE)) avio_closep(&m.fc->pb);
    avformat_free_context(m.fc); if (m.enc) avcodec_free_context(&m.enc); av_frame_free(&m.fr); av_packet_free(&m.pkt);
    if (m.dec) { pthread_mutex_lock(&dec_mx); rs_at3p_free(m.dec); pthread_mutex_unlock(&dec_mx); }
    for (int i = 0; i < m.npend; i++) free(m.pend[i]); free(m.pend); free(m.pend_len); free(m.pend_pts); free(m.pend_key);
    free(m.au); free(m.fl); free(m.frr); free(buf); fclose(in);
    struct stat s; if (rc == 0 && stat(tmp, &s) == 0) *out_size = (uint64_t)s.st_size; else if (rc == 0) rc = -10;
    return rc; }

/* ------------------------------------------------------------------ workers */
static void *worker(void *arg){
    int slot = (int)(intptr_t)arg;
    { void rs_thread_cores(const char *) __attribute__((weak)); char nm[32]; snprintf(nm, sizeof nm, "media conversion %d", slot); if (rs_thread_cores) rs_thread_cores(nm); }
    for (;;) {
        pthread_mutex_lock(&mx); int i = -1; while (next_job < njobs) { if (jobs[next_job].state == 1) { i = next_job++; break; } next_job++; }
        if (i >= 0 && st.phase == RS_CONV_FAILED) i = -1;
        if (i >= 0) snprintf(st.current[slot], sizeof st.current[slot], "%s", strrchr(jobs[i].rel, '/') ? strrchr(jobs[i].rel, '/') + 1 : jobs[i].rel);
        pthread_mutex_unlock(&mx);
        if (i < 0) break;
        job_t *j = &jobs[i]; char o[1300], t[1320]; out_path(o, sizeof o, j->rel, j->kind); snprintf(t, sizeof t, "%s.part", o); mkdirs(o);
        uint64_t sz = 0; int rc = j->kind ? conv_video(j, t, &sz) : conv_audio(j, t, &sz);
        if (rc == 0) { remove(o); if (rename(t, o)) rc = -11; }
        if (rc) { remove(t); fprintf(stderr, "[CONV] %s failed (%d)\n", j->rel, rc); }
        else fprintf(stderr, "[CONV] %s -> %llu bytes\n", j->rel, (unsigned long long)sz);
        pthread_mutex_lock(&mx); st.current[slot][0] = 0;
        if (rc) { j->state = 3; if (st.phase != RS_CONV_FAILED) { st.phase = RS_CONV_FAILED; snprintf(st.message, sizeof st.message, "Could not convert %s (error %d).", j->rel, rc); } }
        else { j->state = 2; j->out_size = sz; st.files_done++; st.files_ok++; }
        pthread_mutex_unlock(&mx); }
    return 0; }

static uint64_t estimate_out(void){                                        /* output bytes for everything still to convert */
    uint64_t t = 0; for (int i = 0; i < njobs; i++) if (jobs[i].state == 1) t += jobs[i].kind ? jobs[i].size : (uint64_t)jobs[i].size * 11u + 4096u;   /* ATRAC3plus 132 kbit/s -> PCM 1411 kbit/s */
    return t; }

static void *main_thread(void *u){
    (void)u;
    pthread_mutex_lock(&mx); st.phase = RS_CONV_CHECKING; pthread_mutex_unlock(&mx);
    char usr[1100]; snprintf(usr, sizeof usr, "%s/PSP_GAME/USRDIR", g_root);
    { int isdir = 0; unsigned sz = 0; if (vfs_stat(usr, &isdir, &sz) || !isdir) { set_failed("Game files not found (%s).", usr); return 0; } }
    scan(usr, "PSP_GAME/USRDIR", 0);
    active = 1;
    check_all();
    if (st.files_todo == 0) { manifest_write(); pthread_mutex_lock(&mx); st.phase = RS_CONV_DONE; pthread_mutex_unlock(&mx); return 0; }
    uint64_t need = estimate_out();
    if (g_free && need + (64ull << 20) > g_free) { char m[64]; snprintf(m, sizeof m, "%llu MB", (unsigned long long)((need + (64ull << 20)) >> 20));
        set_failed("Not enough free space: the converted media needs about %s.", m); return 0; }
    pthread_mutex_lock(&mx); st.phase = RS_CONV_CONVERTING; pthread_mutex_unlock(&mx);
    mkdir(g_out, 0777);
    pthread_t th[4]; int n = g_workers < 1 ? 1 : (g_workers > 4 ? 4 : g_workers);
    pthread_attr_t at; pthread_attr_init(&at); pthread_attr_setstacksize(&at, 512 * 1024);
    for (int i = 0; i < n; i++) pthread_create(&th[i], &at, worker, (void *)(intptr_t)i);
    for (int i = 0; i < n; i++) pthread_join(th[i], 0);
    manifest_write();                                                       /* records what succeeded even if something failed */
    pthread_mutex_lock(&mx); if (st.phase != RS_CONV_FAILED) { st.phase = RS_CONV_DONE; st.work_done = st.work_total; } pthread_mutex_unlock(&mx);
    return 0; }

int rs_convert_start(const char *game_root, const char *out_dir, int workers, uint64_t free_bytes){
    snprintf(g_root, sizeof g_root, "%s", game_root); snprintf(g_out, sizeof g_out, "%s", out_dir); g_workers = workers; g_free = free_bytes;
    memset(&st, 0, sizeof st); njobs = 0; next_job = 0;
    pthread_t t; pthread_attr_t at; pthread_attr_init(&at); pthread_attr_setstacksize(&at, 256 * 1024);
    if (pthread_create(&t, &at, main_thread, 0)) return -1;
    pthread_detach(t); return 0; }
