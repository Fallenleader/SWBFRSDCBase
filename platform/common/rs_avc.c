/* H.264 decoders for the game's movies (see rs_avc.h). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rs_avc.h"

static void yuv_to_rgba(const uint8_t *y, int ys, const uint8_t *u, int us, const uint8_t *v, int vs, int w, int h, uint8_t *out, int pitch){
    for (int j = 0; j < h; j++) {
        uint8_t *o = out + (size_t)j * pitch * 4; const uint8_t *yr = y + (size_t)j * ys, *ur = u + (size_t)(j >> 1) * us, *vr = v + (size_t)(j >> 1) * vs;
        for (int i = 0; i < w; i++) {
            int c = (yr[i] - 16) * 298, d = ur[i >> 1] - 128, e = vr[i >> 1] - 128;          /* BT.601, limited range (the PSP's) */
            int r = (c + 409 * e + 128) >> 8, g = (c - 100 * d - 208 * e + 128) >> 8, b = (c + 516 * d + 128) >> 8;
            o[0] = (uint8_t)(r < 0 ? 0 : r > 255 ? 255 : r); o[1] = (uint8_t)(g < 0 ? 0 : g > 255 ? 255 : g);
            o[2] = (uint8_t)(b < 0 ? 0 : b > 255 ? 255 : b); o[3] = 255; o += 4; } } }

#if defined(RS_AVC_FFMPEG)
/* ---------------------------------------------------------------- FFmpeg (libavcodec) */
#include <libavcodec/avcodec.h>
typedef struct { AVCodecContext *c; AVPacket *pkt; AVFrame *f; } ff_t;
int rs_avc_available(void){ return 1; }
void *rs_avc_open(int width, int height){
    (void)width; (void)height;
    const AVCodec *codec = avcodec_find_decoder(AV_CODEC_ID_H264); if (!codec) { fprintf(stderr, "[MPEG] no H.264 decoder in libavcodec\n"); return NULL; }
    ff_t *d = calloc(1, sizeof *d); d->c = avcodec_alloc_context3(codec); d->pkt = av_packet_alloc(); d->f = av_frame_alloc();
    d->c->thread_count = 4; d->c->thread_type = FF_THREAD_SLICE; d->c->flags2 |= AV_CODEC_FLAG2_FAST;
    if (!d->c || !d->pkt || !d->f || avcodec_open2(d->c, codec, NULL) < 0) { fprintf(stderr, "[MPEG] H.264 decoder failed to open\n"); rs_avc_close(d); return NULL; }
    return d; }
int rs_avc_decode(void *dec, const uint8_t *au, int size, uint8_t *rgba, int pitch, int *w, int *h){
    ff_t *d = dec; if (!d) return -1;
    if (au && size > 0) { d->pkt->data = (uint8_t *)au; d->pkt->size = size; if (avcodec_send_packet(d->c, d->pkt) < 0) return -1; }
    else avcodec_send_packet(d->c, NULL);                                                 /* flush */
    int got = 0;
    while (avcodec_receive_frame(d->c, d->f) == 0) {                                     /* the newest picture wins */
        AVFrame *f = d->f; int fw = f->width, fh = f->height;
        if (f->format == AV_PIX_FMT_YUV420P || f->format == AV_PIX_FMT_YUVJ420P)
            yuv_to_rgba(f->data[0], f->linesize[0], f->data[1], f->linesize[1], f->data[2], f->linesize[2], fw, fh, rgba, pitch);
        *w = fw; *h = fh; got = 1; av_frame_unref(f); }
    return got; }
void rs_avc_close(void *dec){ ff_t *d = dec; if (!d) return; avcodec_free_context(&d->c); av_packet_free(&d->pkt); av_frame_free(&d->f); free(d); }

#elif defined(__vita__)
/* ---------------------------------------------------------------- PS Vita: the hardware decoder */
#include <psp2/videodec.h>
#include <psp2/kernel/sysmem.h>
#include <psp2/sysmodule.h>
typedef struct { SceAvcdecCtrl ctl; SceUID mem, pic_mem, es_mem; uint8_t *pic, *es; size_t es_cap; int w, h, pp; } vd_t;
static int lib_up, lib_w, lib_h;
int rs_avc_available(void){ return 1; }
static void *alloc_cdram(SceUID *uid, size_t size, size_t align){
    size = (size + align - 1) & ~(align - 1); *uid = sceKernelAllocMemBlock("rs_avc", SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW, size, NULL);
    if (*uid < 0) { *uid = sceKernelAllocMemBlock("rs_avc", SCE_KERNEL_MEMBLOCK_TYPE_USER_MAIN_PHYCONT_NC_RW, (size + 0xFFFFF) & ~0xFFFFFu, NULL); if (*uid < 0) return NULL; }
    void *p = NULL; sceKernelGetMemBlockBase(*uid, &p); return p; }
void *rs_avc_open(int width, int height){
    int w = (width + 15) & ~15, h = (height + 15) & ~15;
    if (!lib_up || w > lib_w || h > lib_h) {                     /* the library is set up for the largest movie so far (at least 960 x 544) */
        if (lib_up) { sceVideodecTermLibrary(SCE_VIDEODEC_TYPE_HW_AVCDEC); lib_up = 0; }
        sceSysmoduleLoadModule(SCE_SYSMODULE_AVCDEC);
        int lw = w > 960 ? w : 960, lh = h > 544 ? h : 544;
        SceVideodecQueryInitInfoHwAvcdec ii; memset(&ii, 0, sizeof ii); ii.size = sizeof ii; ii.horizontal = (uint32_t)lw; ii.vertical = (uint32_t)lh; ii.numOfRefFrames = 5; ii.numOfStreams = 1;
        int r = sceVideodecInitLibrary(SCE_VIDEODEC_TYPE_HW_AVCDEC, &ii); if (r < 0) { fprintf(stderr, "[MPEG] sceVideodecInitLibrary %dx%d: %08x\n", lw, lh, r); return NULL; }
        lib_up = 1; lib_w = lw; lib_h = lh; }
    vd_t *d = calloc(1, sizeof *d); d->w = w; d->h = h; d->pp = (w + 63) & ~63;
    SceAvcdecQueryDecoderInfo q; memset(&q, 0, sizeof q); q.horizontal = (uint32_t)w; q.vertical = (uint32_t)h; q.numOfRefFrames = 5;
    SceAvcdecDecoderInfo di; memset(&di, 0, sizeof di);
    int r = sceAvcdecQueryDecoderMemSize(SCE_VIDEODEC_TYPE_HW_AVCDEC, &q, &di); if (r < 0) { fprintf(stderr, "[MPEG] sceAvcdecQueryDecoderMemSize %08x\n", r); free(d); return NULL; }
    void *fm = alloc_cdram(&d->mem, di.frameMemSize, 256 * 1024); if (!fm) { fprintf(stderr, "[MPEG] no memory for the decoder (%u bytes)\n", di.frameMemSize); free(d); return NULL; }
    d->pic = alloc_cdram(&d->pic_mem, (size_t)d->pp * h * 4, 256 * 1024); if (!d->pic) { sceKernelFreeMemBlock(d->mem); free(d); return NULL; }
    d->ctl.frameBuf.pBuf = fm; d->ctl.frameBuf.size = di.frameMemSize;
    r = sceAvcdecCreateDecoder(SCE_VIDEODEC_TYPE_HW_AVCDEC, &d->ctl, &q);
    if (r < 0) { fprintf(stderr, "[MPEG] sceAvcdecCreateDecoder %08x\n", r); sceKernelFreeMemBlock(d->pic_mem); sceKernelFreeMemBlock(d->mem); free(d); return NULL; }
    return d; }
int rs_avc_decode(void *dec, const uint8_t *au, int size, uint8_t *rgba, int pitch, int *w, int *h){
    vd_t *d = dec; if (!d || !au || size <= 0) return 0;
    if ((size_t)size > d->es_cap) {                                  /* the stream data in physically contiguous memory, as the decoder reads it */
        if (d->es) sceKernelFreeMemBlock(d->es_mem); d->es_cap = ((size_t)size + 0xFFFFF) & ~(size_t)0xFFFFF;
        d->es = alloc_cdram(&d->es_mem, d->es_cap, 1024 * 1024); if (!d->es) { d->es_cap = 0; return -1; } }
    memcpy(d->es, au, (size_t)size);
    SceAvcdecAu a; memset(&a, 0, sizeof a); a.es.pBuf = d->es; a.es.size = (uint32_t)size;
    a.pts.upper = a.pts.lower = a.dts.upper = a.dts.lower = 0xFFFFFFFFu;
    SceAvcdecPicture pic; memset(&pic, 0, sizeof pic); SceAvcdecPicture *pp = &pic;
    pic.size = sizeof pic; pic.frame.pixelType = SCE_AVCDEC_PIXELFORMAT_RGBA8888; pic.frame.framePitch = (uint32_t)d->pp; pic.frame.frameWidth = (uint32_t)d->pp; pic.frame.frameHeight = (uint32_t)d->h;
    pic.frame.pPicture[0] = d->pic;
    SceAvcdecArrayPicture ap; memset(&ap, 0, sizeof ap); ap.numOfElm = 1; ap.pPicture = &pp;
    int r = sceAvcdecDecode(&d->ctl, &a, &ap); if (r < 0) { static int n; if (n++ < 5) fprintf(stderr, "[MPEG] sceAvcdecDecode %08x\n", r); return -1; }
    if (ap.numOfOutput < 1) return 0;
    int fw = (int)pic.frame.horizontalSize, fh = (int)pic.frame.verticalSize; if (fw <= 0 || fw > d->pp) fw = d->w; if (fh <= 0 || fh > d->h) fh = d->h;
    for (int y = 0; y < fh; y++) memcpy(rgba + (size_t)y * pitch * 4, d->pic + (size_t)y * d->pp * 4, (size_t)fw * 4);
    for (int y = 0; y < fh; y++) { uint8_t *o = rgba + (size_t)y * pitch * 4; for (int x = 0; x < fw; x++) o[x * 4 + 3] = 255; }
    *w = fw; *h = fh; return 1; }
void rs_avc_close(void *dec){ vd_t *d = dec; if (!d) return; sceAvcdecDeleteDecoder(&d->ctl); if (d->es) sceKernelFreeMemBlock(d->es_mem); sceKernelFreeMemBlock(d->pic_mem); sceKernelFreeMemBlock(d->mem); free(d); }

#else
/* ---------------------------------------------------------------- no decoder in this build */
int rs_avc_available(void){ return 0; }
void *rs_avc_open(int width, int height){ (void)width; (void)height; return NULL; }
int rs_avc_decode(void *dec, const uint8_t *au, int size, uint8_t *rgba, int pitch, int *w, int *h){ (void)dec; (void)au; (void)size; (void)rgba; (void)pitch; (void)w; (void)h; return -1; }
void rs_avc_close(void *dec){ (void)dec; }
#endif
