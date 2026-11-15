/* Audio (milestone 1.9): the game's sound banks, a 3D mixer, and streamed music.
 *
 * Sounds are the game's own: SDSM chunks name samples (an RSCF type-3 ".wav" resource holding PSP VAG ADPCM) and SDEV chunks
 * name events - what the blueprints ask for ("Fire Sound" = 'IMP_Blaster', "Engine Sound" = 'veh_walker_eng_lp', ...): a volume
 * and a pitch range, the distances a 3D sound fades over, and one or more samples (h31 hashes of SDSM names), one picked per
 * play.  SOUNDS/GMSND.ASR is the shared bank (weapons, footsteps, interface); each level adds its own (its vehicles, ambience,
 * deaths), which replace shared events of the same name.  Music is the level's MMUS list (ATRAC3plus .AT3 files in
 * SOUNDS/MUSIC), played from the project's converted WAV copies (never decoded at run time).
 *
 * Output: 48 kHz stereo s16, mixed on the platform's audio thread (ak_plat_audio_open); calls from the game thread are safe. */
#ifndef AK_AUDIO_H
#define AK_AUDIO_H
#include "../core/ak_core.h"

#define AK_AUDIO_RATE 48000

bool ak_audio_init(void);                          /* opens the platform output (false: silent, everything still callable) */
void ak_audio_shutdown(void);
/* a bank: every SDSM / SDEV / sample of an Asura file; `level` banks are dropped by ak_audio_level_reset */
u32  ak_audio_bank_add(const ak_blob *file, bool level);
void ak_audio_level_reset(void);                   /* stops every voice, forgets the level's bank, stops the music */
bool ak_audio_has(const char *event);
const char *ak_audio_find(const char *prefix, const char *suffix, u32 nth);   /* the nth event named prefix...suffix (level first) */
/* the level's music (its MMUS chunk): the nth file of the list named `list` ("OGM Music 1", "VICTORY", "FAIL"), as a game path
 * ("PSP_GAME/USRDIR/SOUNDS/MUSIC/MXALLHOT01_AMB02_LP.AT3"); false when there is none */
bool ak_audio_level_music(const ak_blob *level, const char *list, u32 nth, char *path, u32 size);

/* play an event: pos = NULL plays it flat (2D, `pan` -1 left .. 1 right); loop keeps it going until ak_audio_stop.  Returns a
 * handle (0 = nothing played). */
u32  ak_audio_play(const char *event, const f32 *pos, bool loop);
u32  ak_audio_play2d(const char *event, f32 pan, f32 gain, bool loop);
void ak_audio_move(u32 handle, const f32 *pos);
void ak_audio_gain(u32 handle, f32 gain);           /* on top of the event's own volume */
void ak_audio_stop(u32 handle);
bool ak_audio_playing(u32 handle);
void ak_audio_listener(const f32 *pos, f32 yaw);   /* the camera: yaw 0 looks down -z */

/* music: a track by its game path ("PSP_GAME/USRDIR/SOUNDS/MUSIC/X.AT3"), played from its converted WAV (converted/<path>.wav in a
 * data folder); `head` is the start of the original file (its fact / smpl chunks: the delay and the loop), or NULL */
bool ak_audio_music_play(const char *game_path, const u8 *head, u32 hsize, bool loop);
void ak_audio_music_stop(void);
bool ak_audio_music_playing(void);

/* the mixer itself (the platform's callback; tests call it to render to a file) */
void ak_audio_mix(s16 *out, u32 frames);
u32  ak_hash31(const char *s);                     /* the game's name hash: h = h * 31 + c over lower-case bytes */
#endif
