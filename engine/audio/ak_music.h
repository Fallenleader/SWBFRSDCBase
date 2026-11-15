/* Streamed music: the game's ATRAC3plus (.AT3, RIFF WAVE with the ATRAC3plus GUID) files, decoded packet by packet as the mixer
 * asks (FFmpeg's ATRAC3plus decoder, built in when AK_HAVE_ATRAC3P is defined) and resampled to the mixer's rate. */
#ifndef AK_MUSIC_H
#define AK_MUSIC_H
#include "../core/ak_core.h"
void ak_music_start(const u8 *data, u32 size, bool loop);   /* NULL stops */
bool ak_music_active(void);
void ak_music_mix(s32 *acc, u32 frames, f32 volume);         /* adds into an interleaved stereo accumulator */
#endif
