/* Streamed music from the converted WAV copies of the game's ATRAC3plus tracks (see ak_music.c). */
#ifndef AK_MUSIC_H
#define AK_MUSIC_H
#include "../core/ak_core.h"
/* play a converted track (16-bit stereo WAV): skip `delay` frames, loop between loop_start and loop_end (0: the whole file) */
bool ak_music_play_wav(const char *path, bool loop, u32 delay, u32 loop_start, u32 loop_end);
void ak_music_stop(void);
bool ak_music_active(void);
void ak_music_mix(s32 *acc, u32 frames, f32 volume);   /* adds into an interleaved stereo accumulator */
#endif
