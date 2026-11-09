/* rsnn: a small MLP policy runner for the game (no dependencies, C99, CPU only).  Loads the .rsnn files from
 * tools/aiagents/export.py (fp32 or int8 weights) and runs a batch of agents at once.  Memory: the model file's own size plus
 * two scratch rows per agent of the widest layer. */
#ifndef RSNN_H
#define RSNN_H
#include <stddef.h>
#include <stdint.h>
typedef struct { uint32_t in, out; const float *scale; const void *w; const float *b; } rsnn_layer;
typedef struct { uint32_t n_layers, act, quant, max_width; rsnn_layer layer[8]; } rsnn;
/* parse a model held in memory (kept, not copied); 0 on success */
int rsnn_load(rsnn *net, const void *data, size_t size);
/* logits for n agents: in[n][net.layer[0].in] -> out[n][last.out]; scratch: 2 * max_width floats */
void rsnn_forward(const rsnn *net, const float *in, int n, float *out, float *scratch);
/* the largest logit's index */
int rsnn_argmax(const float *logits, int n);
#endif
