/* DSP-ADPCM sound files (.adp): the converted audio the 3DS's media conversion writes (converted/<game path>.adp instead of
 * .wav: a quarter of the size).  The same sample positions as the WAV copies, so the music's encoder delay and loop points hold.
 *
 * Format: a 96-byte header - "RSAD", u16 version 1, u16 channels (1-2), u32 rate, u32 samples, u32 block samples (7168),
 * u32 blocks, u32 block bytes, 12 spare bytes at 20, then s16 coefficients[2][16] at 32 (8 predictor pairs per channel) - then
 * blocks of 7168 samples, each holding every channel in turn as s16 h1, s16 h2 (the decoder's history at the block's start) and
 * 512 frames of 8 bytes: a header byte (predictor << 4 | scale) and 14 signed 4-bit samples (high nibble first);
 * sample = ((nibble << scale) << 11 + 1024 + c1 * h1 + c2 * h2) >> 11, clamped to 16 bits.  A block decodes on its own. */
#ifndef AK_ADP_H
#define AK_ADP_H
#include "../core/ak_core.h"
#include <stdio.h>

typedef struct ak_adp ak_adp;
ak_adp *ak_adp_open(const char *path);
void    ak_adp_close(ak_adp *a);
u32     ak_adp_rate(const ak_adp *a);
u32     ak_adp_samples(const ak_adp *a);
int     ak_adp_channels(const ak_adp *a);
/* frames [pos, pos + n) as interleaved stereo (mono duplicated); returns the frames read (fewer at the end) */
u32     ak_adp_read_stereo(ak_adp *a, u32 pos, u32 n, s16 *out);
/* the whole file as mono PCM (stereo averaged), allocated with ak_plat_alloc; NULL on failure */
s16    *ak_adp_load_mono(const char *path, u32 *frames, u32 *rate);
#endif
