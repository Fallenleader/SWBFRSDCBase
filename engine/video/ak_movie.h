/* The game's movies on devices without a movie path of their own (desktop, and any back end with ak_gfx_texture_rgba): the
 * converted copies, drawn full screen at the movie's own shape, the sound through ak_audio's movie feed, the picture following
 * the sound.  Formats: the THP conversion (portable decoder, engine/video/ak_thp.c), and where the build has libavcodec
 * (AK_HAVE_LIBAV) the Vita conversion's MP4 or the game's own PMF (its picture only: FFmpeg does not read the PMF's sound).
 *
 * The original (func 08A69188): "fmv\<language>\<name>.pmf" first, else "fmv\<name>.pmf"; the screen cleared black for 3 frames
 * first; the volume 1.0 x the profile's setting x 0.7; CROSS skips the movie playing (measured on the original: tools/harness/boot_probe.py). */
#ifndef AK_MOVIE_H
#define AK_MOVIE_H
#include "../core/ak_core.h"

enum { AK_MOVIE_NONE = 0, AK_MOVIE_PLAYED = 1, AK_MOVIE_SKIPPED = 2, AK_MOVIE_QUIT = -1 };
/* plays <dir>/converted/PSP_GAME/USRDIR/FMV/[<lang>/]<NAME>.PMF.{mp4,thp} (or the game's PMF) from the first data folder that has
 * one; blocks until it ends, is skipped or the user quits.  lang: "en", "fr", ... (the game's language folder) or NULL.  src_w x
 * src_h: the game's PMF picture (its header, ak_movie_pmf_shape; 0 = unknown): the part of a letterboxed THP that is the movie. */
int ak_movie_play(const char *const *dirs, int ndirs, const char *name, const char *lang, u32 src_w, u32 src_h);
/* the PMF header's picture size (bytes 0x8E / 0x8F: width / 16, height / 16; "PSMF" at 0) */
bool ak_movie_pmf_shape(const u8 *head, u32 n, u32 *w, u32 *h);
/* one file (tests): its format by its extension */
int ak_movie_play_file(const char *path, u32 src_w, u32 src_h);
#endif
