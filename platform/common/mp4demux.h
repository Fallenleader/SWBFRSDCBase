#pragma once
/* A small MP4 reader (mp4demux.c): the H.264 video track and the AAC audio track of a non-fragmented MP4 as sample lists. */
#include <stdio.h>
#include <stdint.h>
typedef struct { uint64_t off, dts, pts; uint32_t size; int key; } mp4_sample_t;
typedef struct {
    mp4_sample_t *s; uint32_t n; uint32_t timescale; uint64_t duration;
    uint8_t *cfg; int cfg_len;                 /* video: the avcC record; audio: the AudioSpecificConfig */
    int width, height, channels, rate;
} mp4_track_t;
typedef struct { FILE *f; mp4_track_t video, audio; } mp4_t;
int  mp4_open(mp4_t *m, const char *path);               /* 0 = has an H.264 video track */
int  mp4_read(mp4_t *m, const mp4_sample_t *s, uint8_t *buf);
void mp4_close(mp4_t *m);
