/* The game's movies on devices without a movie path of their own (ak_movie.h). */
#include "ak_movie.h"
#include "ak_thp.h"
#include "../audio/ak_audio.h"
#include "../render/ak_gfx.h"
#include "../platform/plat.h"
#include "../core/ak_math.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef AK_HAVE_LIBAV
#include <libavformat/avformat.h>
#include <libavcodec/avcodec.h>
#endif

/* the volume (func 08A69188): 1.0 x the profile's setting x 0.7 (the profile's setting is applied by the mixer: its master) */
#define MOVIE_GAIN 0.7f

bool ak_movie_pmf_shape(const u8 *head, u32 n, u32 *w, u32 *h)
{
    if (n < 0x90 || memcmp(head, "PSMF", 4) || !head[0x8E] || !head[0x8F]) return false;
    *w = head[0x8E] * 16u; *h = head[0x8F] * 16u;
    return true;
}

/* YCbCr (JPEG's full range, as the PMF's yuvj420p and the THP's JFIF pictures) to RGBA */
static inline u8 clamp8(s32 v) { return (u8)(v < 0 ? 0 : v > 255 ? 255 : v); }
static void yuv_to_rgba(const u8 *y, int ys, const u8 *cb, const u8 *cr, int cs, int w, int h, u32 *out)
{
    for (int j = 0; j < h; j++) {
        const u8 *yr = y + (size_t)j * ys, *br = cb + (size_t)(j >> 1) * cs, *rr = cr + (size_t)(j >> 1) * cs; u32 *o = out + (size_t)j * w;
        for (int i = 0; i < w; i++) {
            s32 Y = yr[i] << 16, B = br[i >> 1] - 128, R = rr[i >> 1] - 128;
            u8 r = clamp8((Y + 91881 * R + 32768) >> 16), g = clamp8((Y - 22554 * B - 46802 * R + 32768) >> 16), b = clamp8((Y + 116130 * B + 32768) >> 16);
            o[i] = 0xFF000000u | ((u32)b << 16) | ((u32)g << 8) | r;
        }
    }
}

/* ---- the screen: the picture's visible part (u0..u1, v0..v1 of the texture) fitted to the window at the movie's own shape */
#define KEEP 3                                  /* frames a texture is kept after its last draw (the GPU may still read it) */
typedef struct { ak_gfx_tex *t[KEEP]; u32 n; } tex_ring;
static void ring_put(tex_ring *r, ak_gfx_tex *t) { u32 k = r->n++ % KEEP; if (r->t[k]) ak_gfx_free_tex(r->t[k]); r->t[k] = t; }
static void ring_free(tex_ring *r) { ak_gfx_wait_idle(); for (int k = 0; k < KEEP; k++) if (r->t[k]) { ak_gfx_free_tex(r->t[k]); r->t[k] = NULL; } }
static void present(ak_gfx_tex *t, f32 u0, f32 v0, f32 u1, f32 v1, f32 aspect)
{
    int W, H; ak_gfx_size(&W, &H); if (W <= 0 || H <= 0) { W = 480; H = 272; }
    ak_m4 id; memset(&id, 0, sizeof id); id.m[0] = id.m[5] = id.m[10] = id.m[15] = 1;
    ak_gfx_env env; memset(&env, 0, sizeof env); env.colour_scale = 1;
    ak_gfx_set_projection(NULL); ak_gfx_begin(0xFF000000u, &id, &env);
    if (t) {
        f32 x0 = 0, y0 = 0, x1 = (f32)W, y1 = (f32)H, sa = (f32)W / (f32)H;
        if (aspect > sa) { f32 hh = (f32)W / aspect; y0 = ((f32)H - hh) * 0.5f; y1 = y0 + hh; }
        else if (aspect < sa) { f32 ww = (f32)H * aspect; x0 = ((f32)W - ww) * 0.5f; x1 = x0 + ww; }
        ak_m4 o = ak_m4_ortho2d((f32)W, (f32)H); ak_gfx_set_transform(&o); ak_gfx_set_tint(NULL);
        const f32 xs[6] = { x0, x1, x0, x0, x1, x1 }, ys[6] = { y0, y0, y1, y1, y0, y1 }, us[6] = { u0, u1, u0, u0, u1, u1 }, vs[6] = { v0, v0, v1, v1, v0, v1 };
        ak_vtx v[6]; memset(v, 0, sizeof v);
        for (int i = 0; i < 6; i++) { v[i].pos[0] = xs[i]; v[i].pos[1] = ys[i]; v[i].uv[0] = us[i]; v[i].uv[1] = vs[i]; v[i].col[0] = v[i].col[1] = v[i].col[2] = v[i].col[3] = 255; }
        ak_gfx_draw_immediate(AK_PIPE_HUD, t, v, 6);
    }
    ak_gfx_end(NULL);
    {   static const char *shot; static int init, n; if (!init) { init = 1; shot = getenv("AK_MOVIE_SHOT"); }   /* (tests: every 30th frame) */
        if (shot && n++ % 30 == 15) { char p[512]; snprintf(p, sizeof p, "%s_%03d.ppm", shot, n / 30); ak_gfx_screenshot(p); } }
}

/* input: CROSS pressed during the movie skips it (a button held from before does not); false: the user asked to quit */
typedef struct { u32 held0; bool skip, quit; } skipper;
static void skip_init(skipper *s) { ak_input in; memset(&in, 0, sizeof in); s->quit = !ak_plat_poll(&in); s->held0 = in.held; s->skip = false; }
static void skip_poll(skipper *s)
{
    ak_input in; memset(&in, 0, sizeof in);
    if (!ak_plat_poll(&in)) { s->quit = true; return; }
    u32 newp = (in.held & ~s->held0) | (in.pressed & ~s->held0); s->held0 &= in.held;
    if (newp & AK_BTN_CROSS) s->skip = true;
}

/* ---- THP: the frames read ahead (their sound queued at once), the pictures decoded as they come due */
#define NQ 24
static int play_thp(const char *path, u32 src_w, u32 src_h)
{
    FILE *f = fopen(path, "rb"); if (!f) return AK_MOVIE_NONE;
    u8 hdr[0x200]; u32 hn = (u32)fread(hdr, 1, sizeof hdr, f); ak_thp_info t;
    if (!ak_thp_info_parse(hdr, hn, &t) || !t.has_video) { AK_WARN("movie", "%s: not a THP movie this player reads", path); fclose(f); return AK_MOVIE_NONE; }
    u32 w = t.width, h = t.height, ysz = w * h, csz = ysz / 4, slot = t.max_frame + 64;
    u8 *planes = (u8 *)malloc(ysz + 2 * csz), *q = (u8 *)malloc((size_t)NQ * slot); u32 *rgba = (u32 *)malloc((size_t)ysz * 4);
    s16 *pcm = t.has_audio ? (s16 *)malloc((size_t)(t.max_samples + 16) * 4) : NULL;
    if (!planes || !q || !rgba || (t.has_audio && !pcm)) { AK_WARN("movie", "%s: no memory", path); free(planes); free(q); free(rgba); free(pcm); fclose(f); return AK_MOVIE_NONE; }
    /* the movie inside the THP's letterbox (tools/conversion_tool/thp.c: scaled to the width, the height rounded to even, centred) */
    f32 u0 = 0.5f / w, u1 = 1 - 0.5f / w, v0 = 0.5f / h, v1 = 1 - 0.5f / h, aspect = (f32)w / (f32)h;
    if (src_w && src_h) {
        u32 ih = (u32)(((u64)w * src_h + (u64)src_w) / (2ull * src_w)) * 2; if (ih > h) ih = h;
        u32 pad = (h - ih) / 2; v0 = (pad + 0.5f) / h; v1 = (pad + ih - 0.5f) / h; aspect = (f32)src_w / (f32)src_h;
    }
    bool snd = t.has_audio && ak_audio_movie_open(t.rate, MOVIE_GAIN);
    u32 rate = t.has_audio ? t.rate : 48000;
    u32 qlen[NQ]; u64 qstart[NQ], samples_in = 0; u32 nread = 0, nshown = 0, next_size = t.first_size; bool eof = false, failed = false;
    fseek(f, (long)t.first_off, SEEK_SET);
    tex_ring ring; memset(&ring, 0, sizeof ring); ak_gfx_tex *cur = NULL;
    skipper sk; skip_init(&sk);
    u64 t0 = ak_plat_time_us(); u32 dropped = 0;
    AK_INFO("movie", "%s: %ux%u %.2f fps, %u frames, %s", path, w, h, (double)t.fps, t.nframes, snd ? "sound" : t.has_audio ? "sound (no output)" : "no sound");
    while (!sk.quit) {
        /* read ahead: up to NQ frames, the sound no more than ~1 s ahead of the clock */
        while (!eof && !failed && nread - nshown < NQ && (!snd || ak_audio_movie_queued() < rate)) {
            if (nread >= t.nframes || !next_size || next_size > slot) { eof = true; break; }
            u8 *b = q + (size_t)(nread % NQ) * slot;
            if (fread(b, 1, next_size, f) != next_size) { eof = true; break; }
            ak_thp_frame fr; if (!ak_thp_frame_parse(&t, b, next_size, &fr)) { failed = true; break; }
            qlen[nread % NQ] = next_size; qstart[nread % NQ] = samples_in;
            if (t.has_audio && fr.audio) {
                u32 ns = ak_thp_audio_decode(fr.audio, fr.audio_len, t.channels, pcm, t.max_samples + 16); samples_in += ns;
                if (snd) for (u32 k = 0; k < ns;) { u32 m = ak_audio_movie_push(pcm + 2 * k, ns - k); k += m; if (!m) ak_plat_sleep_us(2000); }
            } else samples_in = (u64)((double)(nread + 1) * rate / t.fps);
            next_size = fr.next_size; nread++;
        }
        u64 clock = snd ? ak_audio_movie_played() : (u64)((double)(ak_plat_time_us() - t0) * rate / 1e6);
        if (nshown < nread) {
            while (nshown + 1 < nread && qstart[(nshown + 1) % NQ] <= clock) { nshown++; dropped++; }
            if (qstart[nshown % NQ] <= clock || nshown == 0) {
                ak_thp_frame fr; ak_yuv_planes pl = { planes, planes + ysz, planes + ysz + csz, w, h, false };
                if (ak_thp_frame_parse(&t, q + (size_t)(nshown % NQ) * slot, qlen[nshown % NQ], &fr) && ak_thp_jpeg_decode(fr.jpeg, fr.jpeg_len, &pl)) {
                    yuv_to_rgba(pl.y, (int)w, pl.cb, pl.cr, (int)w / 2, (int)w, (int)h, rgba);
                    ak_gfx_tex *nt = ak_gfx_texture_rgba((int)w, (int)h, rgba); if (nt) { ring_put(&ring, nt); cur = nt; }
                }
                nshown++;
            }
        }
        present(cur, u0, v0, u1, v1, aspect);
        skip_poll(&sk);
        if (sk.skip || failed) break;
        if (eof && nshown >= nread && (!snd || ak_audio_movie_queued() < 2)) break;
    }
    if (snd) ak_audio_movie_close();
    ring_free(&ring);
    AK_INFO("movie", "%s, %u of %u frames shown, %u dropped: %s", sk.quit ? "quit" : sk.skip ? "skipped" : failed ? "stopped (a bad frame)" : "ended",
            nshown - dropped, t.nframes, dropped, path);
    free(pcm); free(rgba); free(q); free(planes); fclose(f);
    return sk.quit ? AK_MOVIE_QUIT : sk.skip ? AK_MOVIE_SKIPPED : AK_MOVIE_PLAYED;
}

#ifdef AK_HAVE_LIBAV
/* ---- MP4 (the Vita conversion: H.264 + AAC) or the game's PMF (H.264; its ATRAC3plus sound is not exposed by FFmpeg's demuxer) */
static void pcm_from(const AVFrame *fr, s16 *out)
{
    int n = fr->nb_samples, ch = fr->ch_layout.nb_channels;
    for (int i = 0; i < n; i++) for (int c = 0; c < 2; c++) {
        int cc = c < ch ? c : 0; f32 v = 0;
        switch (fr->format) {
        case AV_SAMPLE_FMT_FLTP: v = ((const f32 *)fr->extended_data[cc])[i]; break;
        case AV_SAMPLE_FMT_FLT:  v = ((const f32 *)fr->extended_data[0])[i * ch + cc]; break;
        case AV_SAMPLE_FMT_S16P: v = ((const s16 *)fr->extended_data[cc])[i] / 32768.0f; break;
        case AV_SAMPLE_FMT_S16:  v = ((const s16 *)fr->extended_data[0])[i * ch + cc] / 32768.0f; break;
        default: break;
        }
        s32 s = (s32)(v * 32767.0f); out[2 * i + c] = (s16)(s > 32767 ? 32767 : s < -32768 ? -32768 : s);
    }
}
static int play_av(const char *path)
{
    AVFormatContext *fc = NULL;
    if (avformat_open_input(&fc, path, NULL, NULL) < 0) return AK_MOVIE_NONE;
    if (avformat_find_stream_info(fc, NULL) < 0) { avformat_close_input(&fc); return AK_MOVIE_NONE; }
    int vs = av_find_best_stream(fc, AVMEDIA_TYPE_VIDEO, -1, -1, NULL, 0), as = av_find_best_stream(fc, AVMEDIA_TYPE_AUDIO, -1, vs, NULL, 0);
    if (vs < 0) { avformat_close_input(&fc); return AK_MOVIE_NONE; }
    AVCodecContext *vc = NULL, *ac = NULL;
    {   const AVCodec *c = avcodec_find_decoder(fc->streams[vs]->codecpar->codec_id); vc = c ? avcodec_alloc_context3(c) : NULL;
        if (!vc || avcodec_parameters_to_context(vc, fc->streams[vs]->codecpar) < 0 || avcodec_open2(vc, c, NULL) < 0) { avcodec_free_context(&vc); avformat_close_input(&fc); return AK_MOVIE_NONE; } }
    if (as >= 0) { const AVCodec *c = avcodec_find_decoder(fc->streams[as]->codecpar->codec_id); ac = c ? avcodec_alloc_context3(c) : NULL;
        if (!ac || avcodec_parameters_to_context(ac, fc->streams[as]->codecpar) < 0 || avcodec_open2(ac, c, NULL) < 0) { avcodec_free_context(&ac); as = -1; } }
    bool snd = ac && ak_audio_movie_open((u32)ac->sample_rate, MOVIE_GAIN);
    u32 rate = snd ? (u32)ac->sample_rate : 48000;
    AVRational vtb = fc->streams[vs]->time_base; s64 vstart = fc->streams[vs]->start_time == AV_NOPTS_VALUE ? 0 : fc->streams[vs]->start_time;
    AVPacket *pk = av_packet_alloc(); AVFrame *fr = av_frame_alloc(), *pic = av_frame_alloc();
    s16 *pcm = NULL; int pcm_cap = 0; u32 *rgba = NULL; int pw = 0, ph = 0;
    #define VQ 64
    AVPacket *vq[VQ]; u32 vq0 = 0, vqn = 0; bool flushed = false, vdone = false;
    bool have_pic = false, eof = false; double pic_t = 0; u32 shown = 0, dropped = 0;
    tex_ring ring; memset(&ring, 0, sizeof ring); ak_gfx_tex *cur = NULL;
    skipper sk; skip_init(&sk); u64 t0 = ak_plat_time_us();
    AK_INFO("movie", "%s: %dx%d, %s", path, vc->width, vc->height, snd ? "sound" : as >= 0 ? "sound (no output)" : "no sound");
    while (!sk.quit) {
        /* read ahead: the video packets queued (the decoder takes them as it can), the sound decoded and queued ~0.5 s ahead */
        while (!eof && vqn < VQ && (vqn == 0 || (snd && ak_audio_movie_queued() < rate / 2))) {
            if (av_read_frame(fc, pk) < 0) { eof = true; break; }
            if (pk->stream_index == vs) { vq[(vq0 + vqn) % VQ] = av_packet_clone(pk); vqn++; }
            else if (pk->stream_index == as && snd) {
                if (avcodec_send_packet(ac, pk) == 0) while (avcodec_receive_frame(ac, fr) == 0) {
                    if (fr->nb_samples > pcm_cap) { pcm_cap = fr->nb_samples; free(pcm); pcm = (s16 *)malloc((size_t)pcm_cap * 4); }
                    if (!pcm) break;
                    pcm_from(fr, pcm);
                    for (u32 k = 0; k < (u32)fr->nb_samples;) { u32 m = ak_audio_movie_push(pcm + 2 * k, (u32)fr->nb_samples - k); k += m; if (!m) ak_plat_sleep_us(2000); }
                }
            }
            av_packet_unref(pk);
        }
        /* the next picture: from the decoder, fed from the queue (the end: flushed) */
        while (!have_pic) {
            int r = avcodec_receive_frame(vc, pic);
            if (r == 0) { s64 pts = pic->best_effort_timestamp == AV_NOPTS_VALUE ? 0 : pic->best_effort_timestamp - vstart; pic_t = pts * av_q2d(vtb); have_pic = true; break; }
            if (r != AVERROR(EAGAIN)) { vdone = true; break; }
            if (vqn) { avcodec_send_packet(vc, vq[vq0]); av_packet_free(&vq[vq0]); vq0 = (vq0 + 1) % VQ; vqn--; }
            else if (eof && !flushed) { avcodec_send_packet(vc, NULL); flushed = true; }
            else break;
        }
        double clock = snd ? (double)ak_audio_movie_played() / rate : (ak_plat_time_us() - t0) / 1e6;
        if (have_pic && pic_t <= clock) {
            if (pic->width != pw || pic->height != ph) { free(rgba); pw = pic->width; ph = pic->height; rgba = (u32 *)malloc((size_t)pw * ph * 4); }
            if (rgba && (pic->format == AV_PIX_FMT_YUVJ420P || pic->format == AV_PIX_FMT_YUV420P)) {
                yuv_to_rgba(pic->data[0], pic->linesize[0], pic->data[1], pic->data[2], pic->linesize[1], pw, ph, rgba);
                ak_gfx_tex *nt = ak_gfx_texture_rgba(pw, ph, rgba); if (nt) { ring_put(&ring, nt); cur = nt; }
                shown++;
            } else dropped++;
            have_pic = false; av_frame_unref(pic);
        }
        f32 u0 = pw ? 0.5f / pw : 0, v0 = ph ? 0.5f / ph : 0, aspect = pw && ph ? (f32)pw / ph : 16.0f / 9.0f;
        present(cur, u0, v0, 1 - u0, 1 - v0, aspect);
        skip_poll(&sk);
        if (sk.skip) break;
        if (vdone && !have_pic && (!snd || ak_audio_movie_queued() < 2)) break;
    }
    if (snd) ak_audio_movie_close();
    ring_free(&ring);
    AK_INFO("movie", "%s, %u pictures shown, %u not drawn: %s", sk.quit ? "quit" : sk.skip ? "skipped" : "ended", shown, dropped, path);
    while (vqn) { av_packet_free(&vq[vq0]); vq0 = (vq0 + 1) % VQ; vqn--; }
    free(rgba); free(pcm); av_frame_free(&fr); av_frame_free(&pic); av_packet_free(&pk);
    avcodec_free_context(&ac); avcodec_free_context(&vc); avformat_close_input(&fc);
    return sk.quit ? AK_MOVIE_QUIT : sk.skip ? AK_MOVIE_SKIPPED : AK_MOVIE_PLAYED;
}
#endif

static bool ends_with(const char *s, const char *e) { size_t a = strlen(s), b = strlen(e); return a >= b && !strcmp(s + a - b, e); }
int ak_movie_play_file(const char *path, u32 src_w, u32 src_h)
{
    FILE *t = fopen(path, "rb"); if (!t) return AK_MOVIE_NONE; fclose(t);
    if (ends_with(path, ".thp")) return play_thp(path, src_w, src_h);
#ifdef AK_HAVE_LIBAV
    return play_av(path);
#else
    return AK_MOVIE_NONE;
#endif
}

int ak_movie_play(const char *const *dirs, int ndirs, const char *name, const char *lang, u32 src_w, u32 src_h)
{
    char up[64]; int k = 0;
    for (const char *c = name; *c && k < 63; c++) up[k++] = (*c >= 'a' && *c <= 'z') ? (char)(*c - 32) : *c;
    up[k] = 0;
    static const char *const ext[] = {
#ifdef AK_HAVE_LIBAV
        ".PMF.mp4",
#endif
        ".PMF.thp" };
    for (int pass = lang && *lang ? 0 : 1; pass < 2; pass++)            /* (the language folder first, as the game) */
        for (u32 e = 0; e < sizeof ext / sizeof ext[0]; e++)
            for (int i = 0; i < ndirs; i++) {
                char path[512];
                if (pass == 0) snprintf(path, sizeof path, "%s/converted/PSP_GAME/USRDIR/FMV/%s/%s%s", dirs[i], lang, up, ext[e]);
                else snprintf(path, sizeof path, "%s/converted/PSP_GAME/USRDIR/FMV/%s%s", dirs[i], up, ext[e]);
                int r = ak_movie_play_file(path, src_w, src_h);
                if (r != AK_MOVIE_NONE) return r;
            }
#ifdef AK_HAVE_LIBAV
    for (int i = 0; i < ndirs; i++) {                                   /* the game's own PMF (its picture only) */
        char path[512]; snprintf(path, sizeof path, "%s/GAME/PSP_GAME/USRDIR/FMV/%s.PMF", dirs[i], up);
        int r = ak_movie_play_file(path, src_w, src_h); if (r != AK_MOVIE_NONE) return r;
    }
#endif
    return AK_MOVIE_NONE;
}

/* back ends without ak_gfx_texture_rgba: none (the movie's sound plays over black) */
__attribute__((weak)) ak_gfx_tex *ak_gfx_texture_rgba(int w, int h, const u32 *px) { (void)w; (void)h; (void)px; return NULL; }
