/* GameCube movie playback: THP files (the conversion tool's gc target writes them from the game's PMF movies).
 *
 * The picture: each frame's JPEG is decoded on the CPU (video/ak_thp.c) straight into three I8 textures in GX's tiled layout (Y, Cb,
 * Cr), and the TEV turns them into RGB (full-range BT.601, as JPEG stores it) - the CPU never touches RGB.  The quad covers the
 * screen at the movie's own shape (the converted movies are already 4:3, letterboxed); other shapes are letterboxed or pillarboxed
 * here, never stretched.
 *
 * The sound: a second AESND voice (beside the engine's mixer voice) streams the frames' DSP-ADPCM, decoded here into a ring of
 * 1152-sample blocks; the voice's callback (in the DSP interrupt) only hands out filled blocks.  The picture follows the sound: a
 * frame is shown once the sound has reached its first sample (late frames are dropped, not decoded); without sound, the clock.
 *
 * CROSS (A) skips, as the original (START does not: measured, docs/BOZ_PITY_PLAN.md).  Memory: the textures (w x h x 1.5) and a few frames read ahead, from the heap; freed at the end. */
#include <gccore.h>
#include <aesndlib.h>
#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include "../../core/ak_core.h"
#include "../../core/ak_math.h"
#include "../../render/ak_gfx.h"
#include "../../video/ak_thp.h"
#include "../plat.h"

#define NQ 6                                   /* frames read ahead */
#define BLK (DSP_STREAMBUFFER_SIZE)            /* sound block (sample frames): 4 of AESND's ARAM transfers exactly (see plat_gc.c ABUF_FRAMES) */
#define NBLK 24
static s16 ring[NBLK][BLK * 2] __attribute__((aligned(32)));
static s16 quiet[BLK * 2] __attribute__((aligned(32)));
static volatile u32 blk_written, blk_handed;   /* blocks filled by the decoder / handed to the DSP */
static volatile bool snd_on;

static void movie_voice_cb(AESNDPB *pb, u32 state)
{
    if (state != VOICE_STATE_STREAM) return;
    if (snd_on && blk_handed < blk_written) { AESND_SetVoiceBuffer(pb, ring[blk_handed % NBLK], sizeof ring[0]); blk_handed++; }
    else AESND_SetVoiceBuffer(pb, quiet, sizeof quiet);
}

/* the TEV: RGB from the three planes.  Stages keep a signed running sum in PREV (no clamping until the last):
 *   R = Y + 1.402 (Cr - .5)          G = Y - .344 (Cb - .5) - .714 (Cr - .5)          B = Y + 1.772 (Cb - .5)
 * R and B are built at half size and doubled (the TEV's constants stop at 1), the offsets folded into constants. */
static void tev_yuv(void)
{
    /* two texture coordinates from the one vertex coordinate: GX scales a coordinate to texels by the size of ONE texture, so the
     * half-size chroma planes need their own (with one, they showed squeezed into the top-left quarter) */
    GX_SetNumChans(0); GX_SetNumTexGens(2);
    Mtx tm; guMtxIdentity(tm); GX_LoadTexMtxImm(tm, GX_TEXMTX0, GX_MTX2x4);
    GX_SetTexCoordGen(GX_TEXCOORD0, GX_TG_MTX2x4, GX_TG_TEX0, GX_TEXMTX0); GX_SetTexCoordGen(GX_TEXCOORD1, GX_TG_MTX2x4, GX_TG_TEX0, GX_TEXMTX0);
    GX_SetTevKColor(GX_KCOLOR0, (GXColor){ 0, 0, 226, 255 });     /* .886  x Cb -> B (half of 1.772) */
    GX_SetTevKColor(GX_KCOLOR1, (GXColor){ 179, 0, 0, 255 });     /* .701  x Cr -> R (half of 1.402) */
    GX_SetTevKColor(GX_KCOLOR2, (GXColor){ 89, 0, 113, 255 });    /* the offsets at half size: .3505 R, .443 B */
    GX_SetTevKColor(GX_KCOLOR3, (GXColor){ 0, 88, 0, 255 });      /* .344 x Cb -> -G */
    GX_SetTevColor(GX_TEVREG1, (GXColor){ 0, 182, 0, 255 });      /* .714 x Cr -> -G */
    GX_SetTevColor(GX_TEVREG2, (GXColor){ 0, 135, 0, 255 });      /* the G offset: .344 * .5 + .714 * .5 = .529 */
    struct { u8 map, kc, a, b, c, d, op, scale, clamp; } st[7] = {
        { GX_TEXMAP1, GX_TEV_KCSEL_K0, GX_CC_ZERO, GX_CC_TEXC, GX_CC_KONST, GX_CC_ZERO, GX_TEV_ADD, GX_CS_SCALE_1, GX_FALSE },
        { GX_TEXMAP2, GX_TEV_KCSEL_K1, GX_CC_ZERO, GX_CC_TEXC, GX_CC_KONST, GX_CC_CPREV, GX_TEV_ADD, GX_CS_SCALE_1, GX_FALSE },
        { GX_TEXMAP_NULL, GX_TEV_KCSEL_K2, GX_CC_ZERO, GX_CC_KONST, GX_CC_ONE, GX_CC_CPREV, GX_TEV_SUB, GX_CS_SCALE_2, GX_FALSE },
        { GX_TEXMAP1, GX_TEV_KCSEL_K3, GX_CC_ZERO, GX_CC_TEXC, GX_CC_KONST, GX_CC_CPREV, GX_TEV_SUB, GX_CS_SCALE_1, GX_FALSE },
        { GX_TEXMAP2, GX_TEV_KCSEL_1, GX_CC_ZERO, GX_CC_TEXC, GX_CC_C1, GX_CC_CPREV, GX_TEV_SUB, GX_CS_SCALE_1, GX_FALSE },
        { GX_TEXMAP0, GX_TEV_KCSEL_1, GX_CC_ZERO, GX_CC_TEXC, GX_CC_ONE, GX_CC_CPREV, GX_TEV_ADD, GX_CS_SCALE_1, GX_FALSE },
        { GX_TEXMAP_NULL, GX_TEV_KCSEL_1, GX_CC_ZERO, GX_CC_C2, GX_CC_ONE, GX_CC_CPREV, GX_TEV_ADD, GX_CS_SCALE_1, GX_TRUE },
    };
    for (int i = 0; i < 7; i++) {
        u8 s = (u8)(GX_TEVSTAGE0 + i);
        if (st[i].map == GX_TEXMAP_NULL) GX_SetTevOrder(s, GX_TEXCOORDNULL, GX_TEXMAP_NULL, GX_COLORNULL);
        else GX_SetTevOrder(s, st[i].map == GX_TEXMAP0 ? GX_TEXCOORD0 : GX_TEXCOORD1, st[i].map, GX_COLORNULL);
        GX_SetTevKColorSel(s, st[i].kc);
        GX_SetTevColorIn(s, st[i].a, st[i].b, st[i].c, st[i].d);
        GX_SetTevColorOp(s, st[i].op, GX_TB_ZERO, st[i].scale, st[i].clamp, GX_TEVPREV);
        GX_SetTevAlphaIn(s, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO);
        GX_SetTevAlphaOp(s, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    }
    GX_SetNumTevStages(7);
    GX_SetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ZERO, GX_LO_CLEAR); GX_SetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
    GX_SetAlphaCompare(GX_ALWAYS, 0, GX_AOP_AND, GX_ALWAYS, 0); GX_SetCullMode(GX_CULL_NONE);
    { GXColor z = { 0, 0, 0, 0 }; GX_SetFog(GX_FOG_NONE, 0, 1, 0.1f, 1, z); }
}
static void tev_restore(void)                  /* what the engine's own state setting does not cover */
{
    for (int i = 0; i < 7; i++) GX_SetTevKColorSel((u8)(GX_TEVSTAGE0 + i), GX_TEV_KCSEL_1);
    GX_SetNumChans(1); GX_SetNumTevStages(1); GX_SetNumTexGens(1);
}

static void draw_quad(GXTexObj *ty, GXTexObj *tu, GXTexObj *tv, f32 x0, f32 y0, f32 x1, f32 y1, int W, int H)
{
    tev_yuv();
    GX_LoadTexObj(ty, GX_TEXMAP0); GX_LoadTexObj(tu, GX_TEXMAP1); GX_LoadTexObj(tv, GX_TEXMAP2);
    Mtx mv; guMtxIdentity(mv); mv[0][0] = 2.0f / W; mv[0][3] = -1.0f; mv[1][1] = -2.0f / H; mv[1][3] = 1.0f;
    Mtx44 o; memset(o, 0, sizeof o); o[0][0] = 1; o[1][1] = 1; o[2][2] = 0.5f; o[2][3] = -0.5f; o[3][3] = 1;
    GX_LoadPosMtxImm(mv, GX_PNMTX0); GX_SetCurrentMtx(GX_PNMTX0); GX_LoadProjectionMtx(o, GX_ORTHOGRAPHIC);
    GX_SetVtxAttrFmt(GX_VTXFMT7, GX_VA_POS, GX_POS_XY, GX_F32, 0); GX_SetVtxAttrFmt(GX_VTXFMT7, GX_VA_TEX0, GX_TEX_ST, GX_F32, 0);
    GX_ClearVtxDesc(); GX_SetVtxDesc(GX_VA_POS, GX_DIRECT); GX_SetVtxDesc(GX_VA_TEX0, GX_DIRECT);
    GX_Begin(GX_QUADS, GX_VTXFMT7, 4);
    GX_Position2f32(x0, y0); GX_TexCoord2f32(0, 0); GX_Position2f32(x1, y0); GX_TexCoord2f32(1, 0);
    GX_Position2f32(x1, y1); GX_TexCoord2f32(1, 1); GX_Position2f32(x0, y1); GX_TexCoord2f32(0, 1);
    GX_End();
    tev_restore();
}

static bool read_exact(FILE *f, void *p, u32 n) { return fread(p, 1, n, f) == n; }

bool ak_plat_movie_play(const char *path)
{
    FILE *f = fopen(path, "rb"); if (!f) return false;
    static u8 hdr[0x200] __attribute__((aligned(32)));
    u32 hn = (u32)fread(hdr, 1, sizeof hdr, f); ak_thp_info t;
    if (!ak_thp_info_parse(hdr, hn, &t)) { AK_WARN("movie", "%s: not a THP movie this player reads", path); fclose(f); return false; }
    u32 w = t.width, h = t.height, ysz = w * h, csz = ysz / 4;
    u8 *planes = memalign(32, ysz + 2 * csz), *q = memalign(32, (size_t)NQ * ((t.max_frame + 31) & ~31u));
    if (!planes || !q) { AK_WARN("movie", "%s: no memory (%u KB)", path, (ysz + 2 * csz + NQ * t.max_frame) >> 10); free(planes); free(q); fclose(f); return false; }
    memset(planes, 0, ysz); memset(planes + ysz, 128, 2 * csz);
    GXTexObj ty, tu, tv;
    GX_InitTexObj(&ty, planes, (u16)w, (u16)h, GX_TF_I8, GX_CLAMP, GX_CLAMP, GX_FALSE);
    GX_InitTexObj(&tu, planes + ysz, (u16)(w / 2), (u16)(h / 2), GX_TF_I8, GX_CLAMP, GX_CLAMP, GX_FALSE);
    GX_InitTexObj(&tv, planes + ysz + csz, (u16)(w / 2), (u16)(h / 2), GX_TF_I8, GX_CLAMP, GX_CLAMP, GX_FALSE);
    GX_InitTexObjLOD(&ty, GX_LINEAR, GX_LINEAR, 0, 0, 0, GX_FALSE, GX_FALSE, GX_ANISO_1);
    GX_InitTexObjLOD(&tu, GX_LINEAR, GX_LINEAR, 0, 0, 0, GX_FALSE, GX_FALSE, GX_ANISO_1);
    GX_InitTexObjLOD(&tv, GX_LINEAR, GX_LINEAR, 0, 0, 0, GX_FALSE, GX_FALSE, GX_ANISO_1);
    DCFlushRange(planes, ysz + 2 * csz);

    /* where it goes: the movie's shape on the 4:3 screen */
    int W, H; ak_gfx_size(&W, &H);
    f32 asp = (f32)w / (f32)h, x0 = 0, y0 = 0, x1 = (f32)W, y1 = (f32)H;
    if (asp > 4.0f / 3.0f) { f32 hh = (f32)H * (4.0f / 3.0f) / asp; y0 = ((f32)H - hh) * 0.5f; y1 = y0 + hh; }
    else if (asp < 4.0f / 3.0f) { f32 ww = (f32)W * asp / (4.0f / 3.0f); x0 = ((f32)W - ww) * 0.5f; x1 = x0 + ww; }

    /* the sound voice */
    AESNDPB *voice = NULL; u32 rate = t.has_audio ? t.rate : 32000;   /* (no sound: the clock counts at a nominal rate) */
    s16 *pcm = t.has_audio ? memalign(32, (size_t)(t.max_samples + 16) * 4) : NULL;
    u32 pend = 0;                               /* samples in the block being filled */
    blk_written = blk_handed = 0; snd_on = false; memset(quiet, 0, sizeof quiet); DCFlushRange(quiet, sizeof quiet);
    if (t.has_audio && pcm) {
        AESND_Init();                           /* (again is harmless: the engine's audio set it up already) */
        voice = AESND_AllocateVoice(movie_voice_cb);
        if (voice) { AESND_SetVoiceFormat(voice, VOICE_STEREO16); AESND_SetVoiceFrequency(voice, (f32)rate); AESND_SetVoiceVolume(voice, 255, 255);
                     AESND_SetVoiceStream(voice, true); AESND_SetVoiceBuffer(voice, quiet, sizeof quiet); }
    }

    /* the frame queue: slot i % NQ holds frame i (its sound already decoded into the ring), its first sample's number */
    u32 slot = (t.max_frame + 31) & ~31u, qlen[NQ]; u64 qstart[NQ];
    u32 nread = 0, nshown = 0, next_off = t.first_off, next_size = t.first_size; u64 samples_in = 0;
    bool eof = false, failed = false;
    fseek(f, (long)next_off, SEEK_SET);
    #define FILL() do { \
        while (!eof && !failed && nread - nshown < NQ && (!voice || blk_written - blk_handed < NBLK - 2)) { \
            if (nread >= t.nframes || !next_size || next_size > t.max_frame + 64) { eof = true; break; } \
            u8 *b = q + (size_t)(nread % NQ) * slot; u32 sz = next_size > slot ? slot : next_size; \
            if (!read_exact(f, b, sz)) { eof = true; break; } \
            ak_thp_frame fr; if (!ak_thp_frame_parse(&t, b, sz, &fr)) { failed = true; break; } \
            qlen[nread % NQ] = sz; qstart[nread % NQ] = samples_in; \
            if (voice && fr.audio) { u32 ns = ak_thp_audio_decode(fr.audio, fr.audio_len, t.channels, pcm, t.max_samples + 16); samples_in += ns; \
                for (u32 k = 0; k < ns;) { u32 m = BLK - pend; if (m > ns - k) m = ns - k; \
                    memcpy(&ring[blk_written % NBLK][pend * 2], pcm + k * 2, m * 4); pend += m; k += m; \
                    if (pend == BLK) { DCFlushRange(ring[blk_written % NBLK], sizeof ring[0]); blk_written++; pend = 0; } } } \
            else samples_in += (u64)((f64)rate / t.fps); \
            next_size = fr.next_size; nread++; } \
        if (eof && voice && pend) { memset(&ring[blk_written % NBLK][pend * 2], 0, (BLK - pend) * 4); DCFlushRange(ring[blk_written % NBLK], sizeof ring[0]); blk_written++; pend = 0; } \
    } while (0)
    FILL();
    if (voice) { snd_on = true; AESND_SetVoiceStop(voice, false); }
    AK_INFO("movie", "%s: %ux%u %.2f fps, %u frames, %s", path, w, h, (double)t.fps, t.nframes, voice ? "sound" : "no sound");
    u64 t0 = ak_plat_time_us(); ak_input in; memset(&in, 0, sizeof in); ak_plat_poll(&in); u32 held0 = in.held;
    u32 dropped = 0; f32 dec_ms = 0; bool skipped = false;
    ak_m4 id; memset(&id, 0, sizeof id); id.m[0] = id.m[5] = id.m[10] = id.m[15] = 1; ak_gfx_env env; memset(&env, 0, sizeof env); env.colour_scale = 1;
    for (;;) {
        FILL();
        /* the clock: the sound handed to the DSP (less the block it plays now), else the time since the start */
        u64 clock = voice ? (blk_handed > 0 ? (u64)(blk_handed - 1) * BLK : 0) : (u64)((f64)(ak_plat_time_us() - t0) * rate / 1e6);
        if (nshown < nread) {
            while (nshown + 1 < nread && qstart[(nshown + 1) % NQ] <= clock) { nshown++; dropped++; }   /* late: skip to the newest due */
            if (qstart[nshown % NQ] <= clock || nshown == 0) {
                u8 *b = q + (size_t)(nshown % NQ) * slot; ak_thp_frame fr;
                if (ak_thp_frame_parse(&t, b, qlen[nshown % NQ], &fr)) {
                    u64 d0 = ak_plat_time_us();
                    ak_yuv_planes pl = { planes, planes + ysz, planes + ysz + csz, w, h, true };
                    if (ak_thp_jpeg_decode(fr.jpeg, fr.jpeg_len, &pl)) { DCFlushRange(planes, ysz + 2 * csz); GX_InvalidateTexAll(); }
                    f32 ms = (ak_plat_time_us() - d0) / 1000.0f; dec_ms = dec_ms ? dec_ms * 0.95f + ms * 0.05f : ms;
                }
                nshown++;
            }
        }
        ak_gfx_begin(0xFF000000u, &id, &env);
        draw_quad(&ty, &tu, &tv, x0, y0, x1, y1, W, H);
        ak_gfx_end(NULL);
        ak_plat_poll(&in);
        u32 newp = in.held & ~held0; held0 &= in.held;              /* (a button held from before the movie does not skip it) */
        if (newp & AK_BTN_CROSS) { skipped = true; break; }
        if (failed) break;
        if (eof && nshown >= nread && (!voice || blk_handed >= blk_written)) break;
    }
    if (voice) { snd_on = false; AESND_SetVoiceStop(voice, true); AESND_FreeVoice(voice); }
    GX_DrawDone();
    AK_INFO("movie", "%s, %u of %u frames shown, %u dropped, %.1f ms a picture: %s", skipped ? "skipped" : failed ? "stopped (a bad frame)" : "ended",
            nshown - dropped, t.nframes, dropped, (double)dec_ms, path);
    free(pcm); free(q); free(planes); fclose(f);
    return true;
    #undef FILL
}
