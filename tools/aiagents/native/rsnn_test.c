/* rsnn_test <model.rsnn> <inputs.f32> <n> <out.f32>: runs n agents, writes their logits, prints the time per agent */
#include "rsnn.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int c, char **v){
    if (c < 5) return 2; FILE *f = fopen(v[1], "rb"); if (!f) return 1; fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    void *m = malloc(sz); fread(m, 1, sz, f); fclose(f); rsnn net; if (rsnn_load(&net, m, sz)) { puts("bad model"); return 1; }
    int n = atoi(v[3]), ni = net.layer[0].in, no = net.layer[net.n_layers - 1].out;
    float *in = malloc(4 * (size_t)n * ni), *out = malloc(4 * (size_t)n * no), *scr = malloc(8 * net.max_width);
    f = fopen(v[2], "rb"); fread(in, 4, (size_t)n * ni, f); fclose(f);
    clock_t t0 = clock(); int reps = 200; for (int r = 0; r < reps; r++) rsnn_forward(&net, in, n, out, scr);
    double us = (double)(clock() - t0) / CLOCKS_PER_SEC * 1e6 / reps / n;
    f = fopen(v[4], "wb"); fwrite(out, 4, (size_t)n * no, f); fclose(f);
    printf("model %ld bytes, %u layers, %s, %.2f us per agent (this CPU)\n", sz, net.n_layers, net.quant ? "int8" : "fp32", us); return 0; }
