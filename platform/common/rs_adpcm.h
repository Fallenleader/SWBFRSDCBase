#pragma once
/* DSP-ADPCM sound files (.adp), the 3DS's converted audio: rs_adpcm.c */
#include <stdint.h>
typedef struct rs_adp rs_adp_t;
int rs_adp_from_wav(const char *wav_path, const char *out_path, uint64_t *out_size);   /* 16-bit PCM WAV (1 or 2 channels) -> .adp; 0 = ok */
rs_adp_t *rs_adp_open(const char *path);
int rs_adp_channels(const rs_adp_t *a);
uint32_t rs_adp_samples(const rs_adp_t *a);
int rs_adp_read(rs_adp_t *a, uint32_t pos, int n, int16_t *out, int out_ch);   /* samples [pos, pos+n) as out_ch-channel PCM; zeros past the end */
void rs_adp_close(rs_adp_t *a);

/* the encoder's parts: the 8 predictor pairs for channel c of a 16-bit WAV; one 14-sample frame (n <= 14) with the history h1, h2 */
int rs_adp_wav_coefs(const char *wav_path, int c, int16_t coef[16]);
void rs_adp_encode_frame(const int16_t *x, int n, const int16_t coef[16], int *h1, int *h2, uint8_t out[8]);
