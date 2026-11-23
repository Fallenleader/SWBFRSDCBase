/* The Vita's own MP4 player for the game's movies (plat.h ak_plat_mp4_*; engine/video/ak_movie.c draws and mixes): sceAvPlayer
 * reads the conversion tool's Vita MP4 (H.264 + AAC), decodes on the Vita's hardware and paces the pictures and the sound by its
 * own clock.  Pictures come as NV12 (Y rows, then interleaved CbCr) in memory the decoder writes: CDRAM blocks, mapped for the GPU.
 * Written from the SDK's header (psp2/avplayer.h); not yet run on a Vita. */
#include "../plat.h"
#include "../../core/ak_core.h"
#include <psp2/avplayer.h>
#include <psp2/sysmodule.h>
#include <psp2/kernel/sysmem.h>
#include <psp2/gxm.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

struct ak_plat_mp4 { SceAvPlayerHandle h; bool started; };

/* the decoder's picture memory: whole CDRAM blocks (256 KB steps), remembered to free */
#define NBLK 16
static struct { SceUID id; void *base; } blk[NBLK];
static void *gen_alloc(void *p, uint32_t align, uint32_t size) { (void)p; return memalign(align < 16 ? 16 : align, size); }
static void gen_free(void *p, void *m) { (void)p; free(m); }
static void *tex_alloc(void *p, uint32_t align, uint32_t size)
{
    (void)p; (void)align;
    for (int i = 0; i < NBLK; i++) if (!blk[i].base) {
        u32 sz = (size + 0x3FFFFu) & ~0x3FFFFu;
        SceUID id = sceKernelAllocMemBlock("aurek_movie", SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW, sz, NULL);
        if (id < 0) { AK_WARN("movie", "no video memory for a picture (%u KB): %08x", sz >> 10, (unsigned)id); return NULL; }
        void *b = NULL; sceKernelGetMemBlockBase(id, &b);
        sceGxmMapMemory(b, sz, (SceGxmMemoryAttribFlags)(SCE_GXM_MEMORY_ATTRIB_READ | SCE_GXM_MEMORY_ATTRIB_WRITE));
        blk[i].id = id; blk[i].base = b; return b;
    }
    return NULL;
}
static void tex_free(void *p, void *m)
{
    (void)p;
    for (int i = 0; i < NBLK; i++) if (blk[i].base == m) { sceGxmUnmapMemory(m); sceKernelFreeMemBlock(blk[i].id); blk[i].base = NULL; return; }
}

ak_plat_mp4 *ak_plat_mp4_open(const char *path)
{
    static bool loaded; if (!loaded) { if (sceSysmoduleLoadModule(SCE_SYSMODULE_AVPLAYER) < 0) { AK_WARN("movie", "no AvPlayer module"); return NULL; } loaded = true; }
    ak_plat_mp4 *m = (ak_plat_mp4 *)calloc(1, sizeof *m); if (!m) return NULL;
    SceAvPlayerInitData d; memset(&d, 0, sizeof d);
    d.memoryReplacement.allocate = gen_alloc; d.memoryReplacement.deallocate = gen_free;
    d.memoryReplacement.allocateTexture = tex_alloc; d.memoryReplacement.deallocateTexture = tex_free;
    d.basePriority = 0xA0; d.numOutputVideoFrameBuffers = 2; d.autoStart = SCE_TRUE; d.defaultLanguage = "en";
    m->h = sceAvPlayerInit(&d);
    if ((int)m->h < 0) { AK_WARN("movie", "sceAvPlayerInit %08x", (unsigned)m->h); free(m); return NULL; }
    int r = sceAvPlayerAddSource(m->h, path);
    if (r < 0) { AK_WARN("movie", "sceAvPlayerAddSource %s: %08x", path, (unsigned)r); sceAvPlayerClose(m->h); free(m); return NULL; }
    return m;
}

int ak_plat_mp4_video(ak_plat_mp4 *m, const u8 **nv12, u32 *w, u32 *h, u32 *stride, u32 *y_rows)
{
    if (!sceAvPlayerIsActive(m->h)) return m->started ? -1 : 0;
    m->started = true;
    SceAvPlayerFrameInfo f; memset(&f, 0, sizeof f);
    if (!sceAvPlayerGetVideoData(m->h, &f) || !f.pData) return 0;
    *nv12 = f.pData; *w = f.details.video.width; *h = f.details.video.height;
    *stride = (*w + 15) & ~15u; *y_rows = (*h + 15) & ~15u;       /* (the planes in 16-pixel steps) */
    return 1;
}

u32 ak_plat_mp4_audio(ak_plat_mp4 *m, s16 *out, u32 cap, u32 *rate)
{
    SceAvPlayerFrameInfo f; memset(&f, 0, sizeof f);
    if (!sceAvPlayerGetAudioData(m->h, &f) || !f.pData) return 0;
    u32 ch = f.details.audio.channelCount ? f.details.audio.channelCount : 2, n = f.details.audio.size / (2 * ch);
    if (n > cap) n = cap;
    const s16 *in = (const s16 *)f.pData;
    for (u32 i = 0; i < n; i++) { out[2 * i] = in[i * ch]; out[2 * i + 1] = in[i * ch + (ch > 1 ? 1 : 0)]; }
    *rate = f.details.audio.sampleRate ? f.details.audio.sampleRate : 48000;
    return n;
}

void ak_plat_mp4_close(ak_plat_mp4 *m)
{
    if (!m) return;
    sceAvPlayerStop(m->h); sceAvPlayerClose(m->h); free(m);
}
