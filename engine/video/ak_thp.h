/* THP movies (the GameCube's movie format; tools/conversion_tool/thp.c writes them from the game's PMF movies): the container, its
 * pictures (baseline JPEG, 4:2:0, the scan data stored without the 0xFF00 stuffing) and its sound (DSP-ADPCM, one chunk per frame).
 * Portable: the device draws the planes (the GameCube: three I8 textures combined to RGB by the TEV). */
#ifndef AK_THP_H
#define AK_THP_H
#include "../core/ak_core.h"

typedef struct {
    u32 version, max_frame, max_samples, nframes, first_size, first_off, last_off;
    f32 fps;
    bool has_video, has_audio;
    u32 width, height;                 /* the picture (multiples of 16) */
    u32 channels, rate, samples;       /* the sound */
} ak_thp_info;
/* the header and the components (the file's first 0x60 bytes or more) */
bool ak_thp_info_parse(const u8 *h, u32 n, ak_thp_info *out);

/* a frame (as read: its header, the picture, the sound): the next frame's size, the parts */
typedef struct { u32 next_size; const u8 *jpeg; u32 jpeg_len; const u8 *audio; u32 audio_len; } ak_thp_frame;
bool ak_thp_frame_parse(const ak_thp_info *t, const u8 *f, u32 n, ak_thp_frame *out);

/* the picture into planes: Y (w x h), Cb and Cr (w/2 x h/2); gx_tiled: in the GameCube's I8 texture layout (8 x 4 tiles), else
 * row by row.  false: not a picture this decoder reads (baseline, 3 components, 4:2:0, no restart interval). */
typedef struct { u8 *y, *cb, *cr; u32 w, h; bool gx_tiled; } ak_yuv_planes;
bool ak_thp_jpeg_decode(const u8 *d, u32 n, ak_yuv_planes *out);

/* the frame's sound: interleaved stereo s16 (mono doubled); returns the sample frames written (<= cap) */
u32 ak_thp_audio_decode(const u8 *a, u32 n, u32 channels, s16 *out, u32 cap);
#endif
