// rsvita: C entry points for the standalone ATRAC3 / ATRAC3plus decoder (FFmpeg-derived, LGPL 2.1)
#include "at3_decoders.h"
extern "C" {
void *rs_at3p_alloc(int ch, int ba){ int b = ba; return atrac3p_alloc(ch, &b); }
int rs_at3p_decode(void *c, float *l, float *r, int *ns, const unsigned char *buf, int size){ float *o[2] = {l, r}; return atrac3p_decode_frame((ATRAC3PContext *)c, o, ns, buf, size); }
void rs_at3p_free(void *c){ atrac3p_free((ATRAC3PContext *)c); }
void *rs_at3_alloc(int ch, int ba, const unsigned char *extra, int extra_size){ int b = ba; return atrac3_alloc(ch, &b, extra, extra_size); }
int rs_at3_decode(void *c, float *l, float *r, int *ns, const unsigned char *buf, int size){ float *o[2] = {l, r}; return atrac3_decode_frame((ATRAC3Context *)c, o, ns, buf, size); }
void rs_at3_free(void *c){ atrac3_free((ATRAC3Context *)c); }
}
