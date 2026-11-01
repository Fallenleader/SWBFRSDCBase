#pragma once
/* H.264 decoding for the game's movies (mpeg.c).  One decoder at a time; frames come out as RGBA8 (R, G, B, A bytes).
 *   Linux (RS_AVC_FFMPEG): the system's FFmpeg (libavcodec);  PS Vita: the hardware decoder (sceAvcdec);
 *   PS5 (RS_AVC_FFMPEG with a static libavcodec built for it); anything else: no decoder (movies are skipped). */
#include <stdint.h>
void *rs_avc_open(int width, int height);
/* decodes one access unit; returns 1 when a picture was written to rgba (pitch in pixels), 0 when none is ready, < 0 on error */
int rs_avc_decode(void *dec, const uint8_t *au, int size, uint8_t *rgba, int pitch, int *w, int *h);
void rs_avc_close(void *dec);
int rs_avc_available(void);
