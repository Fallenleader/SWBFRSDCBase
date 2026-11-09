/* The game's movies (game_11.c, func_088FE5D0 and the functions after it, through sceMpeg / scePsmf) played from MP4 files.
 *
 * The game still runs its own movie loop: it opens the .PMF, reads it into the ring buffer, asks sceMpeg for video and audio
 * access units, paces them, and lets the player skip.  The pictures and the sound come from an MP4 instead of the PMF:
 *   <data>/mods/movies/<NAME>.mp4      a replacement (any size: drawn over the whole screen at the output resolution), else
 *   the first-start conversion's copy  (convert.c: the PMF's H.264 + its ATRAC3plus audio as AAC).
 * Video: the MP4's H.264 samples (mp4demux.c), decoded by rs_avc.c (the Vita's hardware decoder; FFmpeg elsewhere), drawn by the
 * overlay pass over the game's frame (rs_movie_draw, overlay_ui.c), scaled to fit with black bars.  Audio: the AAC track decoded
 * with libavcodec into the 2048-sample blocks sceMpegAtracDecode returns, so the game mixes and paces it as before.
 * The ring's fill level reported to the game follows the MP4: data is left while the MP4 has pictures or sound to give, so the
 * movie lasts as long as the MP4 (the PMF's own data is read and dropped).  No MP4 (RS_MOVIES=0, conversion not done): the movie
 * is reported as empty and the game goes on at once. */
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <pthread.h>
#include <sys/stat.h>
#include "psp_impl.h"
#include "gfx.h"
#include "rs_avc.h"
#include "mp4demux.h"
#include "overlay_ui.h"
#include <libavcodec/avcodec.h>

#define A0 (c->r[4])
#define A1 (c->r[5])
#define A2 (c->r[6])
#define A3 (c->r[7])
#define T0 (c->r[8])
#define T1 (c->r[9])
#define V0 (c->r[2])
#define ERR_NO_DATA 0x80618001u
#define PTS0 90000ull                                   /* the time stamp of the first picture (as PSMF streams start) */
extern int rs_setting_int(const char *key, int def);

#ifndef RS_TEX_MAX
#if defined(__vita__)
#define RS_TEX_MAX 1024
#else
#define RS_TEX_MAX 2048
#endif
#endif

static const char *data_dir(void){
#if defined(RS_PS5)
    return "/data/SWBFRS";
#elif defined(__vita__)
    return "ux0:data/SWBFRS";
#else
    const char *e = getenv("RS_DATA_DIR"); return e ? e : ".";
#endif
}

static struct {
    int active, log, open_tried;
    mp4_t mp4; int have;
    void *avc; uint32_t vi; int flush; uint8_t *es; size_t es_cap; uint8_t *ab; size_t ab_cap;
    int nal_len; uint8_t *ps; int ps_len;               /* NAL length size; SPS + PPS in Annex B */
    uint8_t *rgba; int pitch, vw, vh;                   /* decoder output */
    AVCodecContext *aac; AVPacket *pkt; AVFrame *fr; uint32_t ai; int audio_done;
    s16 *pcm; int pcm_n, pcm_cap; double rs_pos; s16 rs_last[2];   /* 44.1 kHz stereo FIFO; resampler position */
    uint64_t a_out;                                     /* samples given to the game */
    unsigned frames;
    struct timespec t_open;
} M;
static u32 ring_addr;
static u8 psmf_hdr[0x800]; static int psmf_ok;
static char pmf_path[1024];

/* the frame on screen: written by the game thread, read by the renderer thread (rs_movie_draw) */
static pthread_mutex_t fmx = PTHREAD_MUTEX_INITIALIZER;
static uint8_t *shown; static int shown_w, shown_h, shown_cap; static u32 shown_seq; static int shown_on;

static u32 be32(const u8 *p){ return (u32)p[0] << 24 | (u32)p[1] << 16 | (u32)p[2] << 8 | p[3]; }

void rs_movie_note_file(const char *full){                /* hle.c sceIoOpen: the movie the game is about to play */
    size_t l = strlen(full); if (l > 4 && !strcasecmp(full + l - 4, ".PMF")) { snprintf(pmf_path, sizeof pmf_path, "%s", full); M.open_tried = 0; } }

/* ---------------------------------------------------------------- opening */
static int exists(const char *p){ struct stat s; return stat(p, &s) == 0 && s.st_size > 0; }
static void close_movie(void){
    if (M.avc) { struct timespec te; clock_gettime(CLOCK_MONOTONIC, &te); double el = te.tv_sec - M.t_open.tv_sec + (te.tv_nsec - M.t_open.tv_nsec) / 1e9;
        fprintf(stderr, "[MOVIE] closed after %.1f s real time, %u pictures shown (movie length %.1f s)\n", el, M.frames, M.mp4.video.timescale ? (double)M.mp4.video.duration / M.mp4.video.timescale : 0.0); rs_avc_close(M.avc); } if (M.aac) avcodec_free_context(&M.aac); av_packet_free(&M.pkt); av_frame_free(&M.fr);
    if (M.have) mp4_close(&M.mp4);
    free(M.es); free(M.ab); free(M.ps); free(M.rgba); free(M.pcm);
    int log = M.log; memset(&M, 0, sizeof M); M.log = log;
    pthread_mutex_lock(&fmx); shown_on = 0; pthread_mutex_unlock(&fmx); }
#if defined(__vita__)
/* The Vita's movie format (its H.264 decoder and memory budget): H.264 Main profile (Baseline also decodes), level 3.1 or lower,
 * at most 960x544, at most 30 frames a second, 4:2:0 8-bit (implied by Baseline / Main), AAC-LC sound.  The bit rate (5 Mbps
 * average, 8 Mbps peak, two-pass VBR) is how tools/movies/vita_movie.bat encodes; it is not checked here. */
static int vita_movie_ok(const mp4_t *m, char *why, size_t n){
    const mp4_track_t *v = &m->video; const u8 *c = v->cfg;
    if (v->cfg_len < 4) { snprintf(why, n, "no H.264 configuration"); return 0; }
    int prof = c[1], level = c[3];
    if (prof != 66 && prof != 77) { snprintf(why, n, "H.264 profile %d (needs Main)", prof); return 0; }
    if (level > 31) { snprintf(why, n, "H.264 level %d.%d (needs 3.1 or lower)", level / 10, level % 10); return 0; }
    if (v->width > 960 || v->height > 544) { snprintf(why, n, "%dx%d (needs 960x544 or smaller)", v->width, v->height); return 0; }
    if (v->n > 1 && v->duration && v->timescale) { double fps = (double)v->n * v->timescale / (double)v->duration;
        if (fps > 30.5) { snprintf(why, n, "%.2f fps (needs 30 or fewer)", fps); return 0; } }
    if (m->audio.cfg_len >= 1 && (m->audio.cfg[0] >> 3) != 2) { snprintf(why, n, "audio is not AAC-LC"); return 0; }
    return 1; }
#endif
static int open_movie(void){
    if (M.open_tried) return M.have; M.open_tried = 1; M.log = rs_setting_int("RS_MPEG_LOG", 0);
    if (!rs_setting_int("RS_MOVIES", 1) || !pmf_path[0]) return 0;
    char path[1200] = "";
    const char *b = strrchr(pmf_path, '/'); b = b ? b + 1 : pmf_path; char name[256]; snprintf(name, sizeof name, "%s", b);
    char *dot = strrchr(name, '.'); if (dot) *dot = 0;
    snprintf(path, sizeof path, "%s/mods/movies/%s.mp4", data_dir(), name);
    if (!exists(path)) { for (char *q = name; *q; q++) if (*q >= 'A' && *q <= 'Z') *q += 32; snprintf(path, sizeof path, "%s/mods/movies/%s.mp4", data_dir(), name); }
    if (!exists(path)) { const char *rs_convert_output_for(const char *, const char *) __attribute__((weak));
        const char *o = rs_convert_output_for ? rs_convert_output_for(pmf_path, ".mp4") : 0; snprintf(path, sizeof path, "%s", o ? o : ""); }
    if (!path[0] || !exists(path)) { fprintf(stderr, "[MOVIE] %s: no MP4 (not converted yet?): skipped\n", pmf_path); return 0; }
    if (mp4_open(&M.mp4, path)) { fprintf(stderr, "[MOVIE] %s: not an MP4 with H.264 video: skipped\n", path); return 0; }
#if defined(__vita__)
    if (strstr(path, "/mods/movies/")) { char why[160];                 /* a replacement outside the Vita's movie format: the game's own */
        if (!vita_movie_ok(&M.mp4, why, sizeof why)) {
            fprintf(stderr, "[MOVIE] %s: %s (Vita movies: H.264 Main, level 3.1 or lower, up to 960x544, up to 30 fps, 4:2:0 8-bit, AAC-LC; "
                "tools/movies/vita_movie.bat makes one): the game's own movie is played\n", path, why);
            mp4_close(&M.mp4); memset(&M.mp4, 0, sizeof M.mp4);
            const char *rs_convert_output_for(const char *, const char *) __attribute__((weak));
            const char *o = rs_convert_output_for ? rs_convert_output_for(pmf_path, ".mp4") : 0; snprintf(path, sizeof path, "%s", o ? o : "");
            if (!path[0] || !exists(path) || mp4_open(&M.mp4, path)) { fprintf(stderr, "[MOVIE] %s: no converted MP4 either: skipped\n", pmf_path); return 0; } } }
#endif
    M.have = 1; mp4_track_t *v = &M.mp4.video;
    /* the avcC record: NAL length size, SPS and PPS -> Annex B */
    const u8 *c = v->cfg; int cl = v->cfg_len;
    if (cl >= 7) {
        M.nal_len = (c[4] & 3) + 1; int p = 5; M.ps = malloc((size_t)cl * 2 + 16);
        for (int pass = 0; pass < 2 && p < cl; pass++) { int n = pass ? c[p] : (c[p] & 31); p++;
            for (int i = 0; i < n && p + 2 <= cl; i++) { int l = c[p] << 8 | c[p + 1]; p += 2; if (p + l > cl) break;
                memcpy(M.ps + M.ps_len, "\0\0\0\1", 4); memcpy(M.ps + M.ps_len + 4, c + p, (size_t)l); M.ps_len += 4 + l; p += l; } } }
    int w = v->width > 0 ? v->width : 480, h = v->height > 0 ? v->height : 272;
    M.pitch = (w + 63) & ~63; M.rgba = calloc((size_t)M.pitch * ((h + 15) & ~15), 4);
    M.avc = rs_avc_open(w, h); clock_gettime(CLOCK_MONOTONIC, &M.t_open);
    if (!M.avc) { fprintf(stderr, "[MOVIE] %s: no H.264 decoder for %dx%d: skipped\n", path, w, h); close_movie(); M.open_tried = 1; return 0; }
    if (M.mp4.audio.n) {
        const AVCodec *ac = avcodec_find_decoder(AV_CODEC_ID_AAC);
        if (ac && (M.aac = avcodec_alloc_context3(ac))) {
            M.aac->extradata = av_mallocz((size_t)M.mp4.audio.cfg_len + AV_INPUT_BUFFER_PADDING_SIZE); memcpy(M.aac->extradata, M.mp4.audio.cfg, (size_t)M.mp4.audio.cfg_len);
            M.aac->extradata_size = M.mp4.audio.cfg_len;
            if (avcodec_open2(M.aac, ac, NULL) < 0) avcodec_free_context(&M.aac); else { M.pkt = av_packet_alloc(); M.fr = av_frame_alloc(); } }
        if (!M.aac) fprintf(stderr, "[MOVIE] no AAC decoder: the movie plays without sound\n"); }
    fprintf(stderr, "[MOVIE] %s -> %s: %dx%d, %u pictures, %.1f s%s\n", pmf_path, path, w, h, v->n, v->timescale ? (double)v->duration / v->timescale : 0.0,
            M.aac ? ", AAC sound" : ", no sound");
    return 1; }

/* ---------------------------------------------------------------- video */
static int video_left(void){ return M.have && (M.vi < M.mp4.video.n || M.flush < 3); }
static u64 v_pts(uint32_t i){ mp4_track_t *v = &M.mp4.video; uint32_t k = i < v->n ? i : v->n - 1; return PTS0 + v->s[k].pts * 90000ull / v->timescale + (i >= v->n ? (u64)(i - v->n + 1) * 3003 : 0); }
static void publish(int w, int h){                         /* the decoded picture -> the overlay (halved while over the texture limit) */
    int sx = 1; while (w / sx > RS_TEX_MAX || h / sx > RS_TEX_MAX) sx *= 2;
    int ow = w / sx, oh = h / sx;
    pthread_mutex_lock(&fmx);
    if ((size_t)ow * oh * 4 > (size_t)shown_cap) { free(shown); shown_cap = ow * oh * 4; shown = malloc((size_t)shown_cap); }
    if (shown) {
        if (sx == 1) for (int y = 0; y < h; y++) memcpy(shown + (size_t)y * w * 4, M.rgba + (size_t)y * M.pitch * 4, (size_t)w * 4);
        else for (int y = 0; y < oh; y++) { const u32 *s = (const u32 *)(M.rgba + (size_t)y * sx * M.pitch * 4); u32 *d = (u32 *)(shown + (size_t)y * ow * 4); for (int x = 0; x < ow; x++) d[x] = s[x * sx]; }
        shown_w = ow; shown_h = oh; shown_seq++; shown_on = 1; }
    pthread_mutex_unlock(&fmx); }
static int decode_next(void){                               /* one sample in (or a flush step at the end) -> 1 if a picture came out */
    mp4_track_t *v = &M.mp4.video; int w = 0, h = 0, got;
    if (M.vi < v->n) {
        mp4_sample_t *s = &v->s[M.vi++];
        if (s->size > M.ab_cap) { M.ab_cap = s->size + 4096; M.ab = realloc(M.ab, M.ab_cap); }
        size_t need = (size_t)s->size * 2 + (size_t)M.ps_len + 64; if (need > M.es_cap) { M.es_cap = need; M.es = realloc(M.es, M.es_cap); }
        if (mp4_read(&M.mp4, s, M.ab)) return 0;
        size_t n = 0; if (s->key || M.vi == 1) { memcpy(M.es, M.ps, (size_t)M.ps_len); n = (size_t)M.ps_len; }
        for (uint32_t p = 0; p + (uint32_t)M.nal_len <= s->size; ) {          /* length-prefixed NAL units -> start codes */
            uint32_t l = 0; for (int k = 0; k < M.nal_len; k++) l = l << 8 | M.ab[p + k]; p += (uint32_t)M.nal_len;
            if (l > s->size - p) break; memcpy(M.es + n, "\0\0\0\1", 4); memcpy(M.es + n + 4, M.ab + p, l); n += 4 + l; p += l; }
        got = rs_avc_decode(M.avc, M.es, (int)n, M.rgba, M.pitch, &w, &h); }
    else { M.flush++; got = rs_avc_decode(M.avc, NULL, 0, M.rgba, M.pitch, &w, &h); }
    if (got > 0) { M.vw = w; M.vh = h; publish(w, h); M.frames++; if (M.log && M.frames % 60 == 1) fprintf(stderr, "[MOVIE] picture %u (%dx%d)\n", M.frames, w, h); }
    return got > 0; }

/* ---------------------------------------------------------------- audio: AAC -> 44.1 kHz stereo FIFO */
static void pcm_push(const float *l, const float *r, int n, int rate){
    double step = (double)rate / 44100.0;
    int room = (int)(n / step) + 4; if (M.pcm_n + room > M.pcm_cap) { M.pcm_cap = (M.pcm_n + room) * 2; M.pcm = realloc(M.pcm, sizeof(s16) * 2 * (size_t)M.pcm_cap); }
    #define CL(x) ((s16)((x) < -1.0f ? -32768 : (x) > 1.0f ? 32767 : (int)((x) * 32767.0f)))
    if (rate == 44100) { for (int i = 0; i < n; i++) { M.pcm[(M.pcm_n + i) * 2] = CL(l[i]); M.pcm[(M.pcm_n + i) * 2 + 1] = CL(r[i]); } M.pcm_n += n; return; }
    for (; M.rs_pos < n - 1; M.rs_pos += step) {                                 /* linear; -1 = the previous block's last sample */
        int i = (int)(M.rs_pos + 1.0) - 1; double f = M.rs_pos - i;
        float al = i < 0 ? M.rs_last[0] / 32767.0f : l[i], ar = i < 0 ? M.rs_last[1] / 32767.0f : r[i];
        float vl = (float)(al + (l[i + 1] - al) * f), vr = (float)(ar + (r[i + 1] - ar) * f);
        M.pcm[M.pcm_n * 2] = CL(vl); M.pcm[M.pcm_n * 2 + 1] = CL(vr); M.pcm_n++; }
    M.rs_pos -= n; M.rs_last[0] = CL(l[n - 1]); M.rs_last[1] = CL(r[n - 1]); }
static void audio_fill(int want){
    mp4_track_t *a = &M.mp4.audio;
    while (M.pcm_n < want && M.aac && M.ai < a->n) {
        mp4_sample_t *s = &a->s[M.ai++];
        if (av_new_packet(M.pkt, (int)s->size) < 0) break;
        if (mp4_read(&M.mp4, s, M.pkt->data)) { av_packet_unref(M.pkt); continue; }
        if (avcodec_send_packet(M.aac, M.pkt) < 0) { av_packet_unref(M.pkt); continue; }
        av_packet_unref(M.pkt);
        while (avcodec_receive_frame(M.aac, M.fr) == 0) {
            AVFrame *f = M.fr; int ns = f->nb_samples, ch = f->ch_layout.nb_channels;
            static float L[8192], R[8192]; if (ns > 8192) ns = 8192;
            for (int i = 0; i < ns; i++) {
                float l, r;
                if (f->format == AV_SAMPLE_FMT_FLTP) { l = ((float *)f->data[0])[i]; r = ch > 1 ? ((float *)f->data[1])[i] : l; }
                else if (f->format == AV_SAMPLE_FMT_FLT) { l = ((float *)f->data[0])[i * ch]; r = ch > 1 ? ((float *)f->data[0])[i * ch + 1] : l; }
                else if (f->format == AV_SAMPLE_FMT_S16P) { l = ((s16 *)f->data[0])[i] / 32768.0f; r = ch > 1 ? ((s16 *)f->data[1])[i] / 32768.0f : l; }
                else { l = ((s16 *)f->data[0])[i * ch] / 32768.0f; r = ch > 1 ? ((s16 *)f->data[0])[i * ch + 1] / 32768.0f : l; }
                L[i] = l; R[i] = r; }
            pcm_push(L, R, ns, f->sample_rate > 0 ? f->sample_rate : 44100); av_frame_unref(f); } } }
static u64 movie_samples(void){                            /* the movie's length in 44.1 kHz samples (silence when it has no sound) */
    mp4_track_t *v = &M.mp4.video; return v->timescale ? v->duration * 44100ull / v->timescale : 0; }
static int audio_left(void){
    if (!M.have || M.audio_done) return 0;
    if (M.aac) return M.pcm_n > 0 || M.ai < M.mp4.audio.n;
    return M.a_out < movie_samples(); }

/* ---------------------------------------------------------------- scePsmf */
void hm_PsmfSetPsmf(sdkcall_t *c){ for (int i = 0; i < 0x800; i++) psmf_hdr[i] = LB(A1 + (u32)i); psmf_ok = !memcmp(psmf_hdr, "PSMF", 4); V0 = 0; }
static int psmf_streams(int type, int nth, int *priv){              /* type 0 AVC, 1 ATRAC3plus; -> count, or the nth's private id */
    if (!psmf_ok) return 1;
    int ns = psmf_hdr[0x80] << 8 | psmf_hdr[0x81], k = 0; if (ns > 64) ns = 64;
    for (int i = 0; i < ns; i++) { const u8 *e = psmf_hdr + 0x82 + 16 * i; int is = type == 0 ? e[0] == 0xE0 : e[0] == 0xBD;
        if (is) { if (k == nth && priv) *priv = e[1]; k++; } }
    return k; }
void hm_PsmfGetNumberOfSpecificStreams(sdkcall_t *c){ int n = psmf_streams((int)A1, -1, NULL); if ((int)A1 == 1 && n < 1) n = 1; V0 = (u32)n; }

/* ---------------------------------------------------------------- sceMpeg */
void hm_MpegInit(sdkcall_t *c){ V0 = 0; }
void hm_MpegFinish(sdkcall_t *c){ V0 = 0; }
void hm_MpegQueryMemSize(sdkcall_t *c){ V0 = 0x10000; }
void hm_MpegRingbufferQueryMemSize(sdkcall_t *c){ V0 = A0 * (104 + 2048); }
void hm_MpegRingbufferConstruct(sdkcall_t *c){
    u32 r = A0; ring_addr = r; SW(r, A1); SW(r + 4, 0); SW(r + 8, 0); SW(r + 12, 0); SW(r + 16, 2048); SW(r + 20, A2); SW(r + 24, T0); SW(r + 28, T1);
    SW(r + 32, A2 + A1 * 2048); SW(r + 36, 0); SW(r + 40, 0); V0 = 0; }
void hm_MpegRingbufferDestruct(sdkcall_t *c){ ring_addr = 0; V0 = 0; }
void hm_MpegCreate(sdkcall_t *c){
    ring_addr = A3; if (A1) for (int i = 0; i < 8; i++) SB(A1 + (u32)i, (u8)"LIBMPEG"[i]);
    open_movie(); M.active = 1; V0 = 0; }
void hm_MpegDelete(sdkcall_t *c){ if (M.log) fprintf(stderr, "[MOVIE] done: %u pictures\n", M.frames); close_movie(); pmf_path[0] = 0; V0 = 0; }
void hm_MpegQueryStreamOffset(sdkcall_t *c){ u8 h[16]; for (int i = 0; i < 16; i++) h[i] = LB(A1 + (u32)i); SW(A2, memcmp(h, "PSMF", 4) ? 0x800 : be32(h + 8)); V0 = 0; }
void hm_MpegQueryStreamSize(sdkcall_t *c){ u8 h[16]; for (int i = 0; i < 16; i++) h[i] = LB(A0 + (u32)i);
    u32 size = memcmp(h, "PSMF", 4) ? 0 : be32(h + 12);
    if (!open_movie()) size = 0;                                                     /* no MP4: an empty movie */
    SW(A1, size); V0 = 0; }
void hm_MpegRegistStream(sdkcall_t *c){ V0 = 0x100 + (u32)A1 * 16 + (u32)A2; }
void hm_MpegUnRegistStream(sdkcall_t *c){ V0 = 0; }
void hm_MpegMallocAvcEsBuf(sdkcall_t *c){ V0 = 1; }
void hm_MpegFreeAvcEsBuf(sdkcall_t *c){ V0 = 0; }
void hm_MpegInitAu(sdkcall_t *c){ u32 au = A2; SW(au, 0xFFFFFFFFu); SW(au + 4, 0xFFFFFFFFu); SW(au + 8, 0xFFFFFFFFu); SW(au + 12, 0xFFFFFFFFu); SW(au + 16, A1); SW(au + 20, 0); V0 = 0; }
void hm_MpegQueryAtracEsSize(sdkcall_t *c){ SW(A1, 2112); SW(A2, 8192); V0 = 0; }
static int ring_packets(void){ return ring_addr ? (int)LW(ring_addr) : 0x400; }
static int ring_used(void){ return (video_left() || audio_left()) ? ring_packets() / 2 : 0; }     /* the MP4 decides when the movie ends */
void hm_MpegRingbufferAvailableSize(sdkcall_t *c){ int used = ring_used(); if (ring_addr) SW(ring_addr + 12, (u32)used); V0 = (u32)(ring_packets() - used); }
void hm_MpegRingbufferPut(sdkcall_t *c){                   /* the game reads its PMF on: the data is not used */
    u32 r = A0; int want = (int)A1, total = 0; if (!r) { V0 = 0; return; }
    int packets = (int)LW(r); u32 data = LW(r + 20), cb = LW(r + 24), arg = LW(r + 28);
    int room = packets - ring_used(); if (want > room) want = room;
    while (want > 0) {
        int wr = (int)LW(r + 8) % packets, n = want; if (wr + n > packets) n = packets - wr;
        u32 dst = data + (u32)wr * 2048;
        u32 save[32], hi = c->hi, lo = c->lo; memcpy(save, c->r, sizeof save);
        c->r[4] = dst; c->r[5] = (u32)n; c->r[6] = arg; c->r[31] = 0; CALLDYN(c, cb); int got = (int)c->r[2];
        memcpy(c->r, save, sizeof save); c->hi = hi; c->lo = lo;
        if (got <= 0) break;
        SW(r + 8, LW(r + 8) + (u32)got); total += got; want -= got; if (got < n) break; }
    V0 = (u32)total; }
void hm_MpegGetAvcAu(sdkcall_t *c){
    u32 au = A2;
    if (!video_left()) { V0 = ERR_NO_DATA; return; }
    u64 pts = v_pts(M.vi);
    SW(au, (u32)(pts >> 32)); SW(au + 4, (u32)pts); SW(au + 8, (u32)(pts >> 32)); SW(au + 12, (u32)pts); SW(au + 20, 0x1000);
    if (A3) SW(A3, 1);
    V0 = 0; }
void hm_MpegAvcDecode(sdkcall_t *c){
    u32 init = T0;
    if (!video_left()) { if (init) SW(init, 0); V0 = ERR_NO_DATA; return; }
    int got = decode_next();
    if (init) SW(init, got ? 1 : 0);
    V0 = 0; }
void hm_MpegAvcDecodeStop(sdkcall_t *c){ if (T0) SW(T0, 0); V0 = 0; }
void hm_MpegGetAtracAu(sdkcall_t *c){
    u32 au = A2;
    if (!audio_left()) { V0 = ERR_NO_DATA; return; }
    u64 pts = PTS0 + M.a_out * 90000ull / 44100ull;
    SW(au, (u32)(pts >> 32)); SW(au + 4, (u32)pts); SW(au + 8, 0xFFFFFFFFu); SW(au + 12, 0xFFFFFFFFu); SW(au + 20, 0x2E8);
    if (A3) SW(A3, 0);
    V0 = 0; }
void hm_MpegAtracDecode(sdkcall_t *c){
    s16 *o = (s16 *)gfx_gp(A2);
    if (M.aac) audio_fill(2048);
    int n = M.aac ? (M.pcm_n < 2048 ? M.pcm_n : 2048) : 0;
    if (n) { memcpy(o, M.pcm, (size_t)n * 4); memmove(M.pcm, M.pcm + n * 2, (size_t)(M.pcm_n - n) * 4); M.pcm_n -= n; }
    memset(o + n * 2, 0, (size_t)(2048 - n) * 4);
    M.a_out += 2048;
    if (M.aac && M.pcm_n == 0 && M.ai >= M.mp4.audio.n) M.audio_done = 1;
    V0 = 0; }

/* ---------------------------------------------------------------- drawing (overlay_ui.c, renderer thread) */
static u32 mv_hash(void *ud){ (void)ud; return 0x30000000u + shown_seq; }
static void mv_decode(u32 *dst, void *ud){ (void)ud; pthread_mutex_lock(&fmx); if (shown) memcpy(dst, shown, (size_t)shown_w * shown_h * 4); pthread_mutex_unlock(&fmx); }
int rs_movie_draw(gfx_state_t *st){
    pthread_mutex_lock(&fmx); int on = shown_on, w = shown_w, h = shown_h; pthread_mutex_unlock(&fmx);
    if (!on || w <= 0 || h <= 0) return 0;
    /* black, then the picture fitted to 480 x 272 (the overlay's space, scaled to the output) */
    gfx_vtx_t v[12]; memset(v, 0, sizeof v);
    float sx = 480.0f / w, sy = 272.0f / h, s = sx < sy ? sx : sy, dw = w * s, dh = h * s, x0 = (480 - dw) / 2, y0 = (272 - dh) / 2;
    float q[2][4] = {{0, 0, 480, 272}, {x0, y0, x0 + dw, y0 + dh}};
    for (int k = 0; k < 2; k++) {
        float X0 = q[k][0], Y0 = q[k][1], X1 = q[k][2], Y1 = q[k][3]; gfx_vtx_t *o = v + 6 * k;
        float P[6][4] = {{X0, Y0, 0, 0}, {X1, Y0, 1, 0}, {X0, Y1, 0, 1}, {X1, Y0, 1, 0}, {X1, Y1, 1, 1}, {X0, Y1, 0, 1}};
        for (int i = 0; i < 6; i++) { o[i].x = P[i][0] * (2.0f / 512) - 1; o[i].y = P[i][1] * (2.0f / 512) - 1; o[i].z = 0; o[i].w = 1; o[i].f = 1; o[i].u = P[i][2]; o[i].v = P[i][3];
            o[i].r = o[i].g = o[i].b = k ? 1.0f : 0.0f; o[i].a = 1.0f; } }
    gfx_state_t s0 = *st; s0.tex = 0; s0.texid = 0; s0.blend = 0; gfx_draw(&s0, v, 6);
    static gtex_key_t key; key = (gtex_key_t){0x0BFF0000u, w, h, 7, 0, w, 0x30F1E5u};
    gtex_src_t src = {mv_hash, mv_decode, NULL};
    gfx_state_t s1 = *st; s1.blend = 0; s1.uvs[0] = s1.uvs[1] = 1; s1.uvs[2] = s1.uvs[3] = 0;
    s1.texid = gfx_tex_acquire(&key, &src, s1.uvs); s1.tex = s1.texid != 0; s1.trgba = 1; s1.tfilter = 1; s1.tclampu = s1.tclampv = 1; s1.tenv = 0xFFFFFF;
    if (s1.tex) gfx_draw(&s1, v + 6, 6);
    return 1; }
