/* Speech: the game's dialogue - battle narration (a side's "command post lost", "we are winning", ...) and the soldiers' battle
 * chatter ("enemy down", "I'm hit", ...).
 *
 * Data: SOUNDS/GMSND.ASR holds DLEV dialogue events (a name, then its lines as h31 hashes of their names; one is picked per play);
 * SOUNDS/GMSND.AM holds the lines - DLLN chunks (name; two ids; the h31 hash of its sound; 0; duration in seconds; the subtitle,
 * UTF-16) - and one RSCF "streamed sounds" bundle (u32 0, u32 count, count x {sound hash, file offset, size}, then the sounds:
 * ATRAC3plus RIFF files, mono).  Only the index part of GMSND.AM is read; each line plays from its converted WAV,
 * converted/PSP_GAME/USRDIR/SOUNDS/GMSND.AM.d/<file offset, 8 hex digits>.wav in a data folder (the project's media conversion).
 * Which event a moment calls for is a Humanoid blueprint's key (Speech_BN_CP_Lost = 'IMP_BN_CP_Lost', ...): see app/play_sound.c. */
#ifndef AK_SPEECH_H
#define AK_SPEECH_H
#include "../core/ak_core.h"

/* am: the start of GMSND.AM (its chunks up to the first sound); asr: GMSND.ASR */
bool ak_speech_load(const ak_blob *am, const ak_blob *asr);
/* play one of an event's lines: at pos (NULL: flat, a narrator); returns the audio handle (0: nothing), and the line's subtitle
 * (ASCII, may be NULL) and length */
u32  ak_speech_play(const char *event, const f32 *pos, f32 gain, const char **subtitle, f32 *seconds);
bool ak_speech_has(const char *event);
#endif
