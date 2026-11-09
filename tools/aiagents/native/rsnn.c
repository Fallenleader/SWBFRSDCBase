#include "rsnn.h"
#include <string.h>
#include <math.h>
static uint32_t rd32(const uint8_t *p){ return (uint32_t)p[0] | (uint32_t)p[1] << 8 | (uint32_t)p[2] << 16 | (uint32_t)p[3] << 24; }
int rsnn_load(rsnn *net, const void *data, size_t size){
    const uint8_t *p = data, *e = p + size; memset(net, 0, sizeof *net);
    if (size < 20 || memcmp(p, "RSNN", 4) || rd32(p + 4) != 1) return -1;
    net->n_layers = rd32(p + 8); net->act = rd32(p + 12); net->quant = rd32(p + 16); p += 20;
    if (!net->n_layers || net->n_layers > 8 || ((uintptr_t)data & 3)) return -1;
    for (uint32_t i = 0; i < net->n_layers; i++) {
        rsnn_layer *l = &net->layer[i]; if (p + 8 > e) return -1;
        l->in = rd32(p); l->out = rd32(p + 4); p += 8;
        if (i && l->in != net->layer[i - 1].out) return -1;
        if (net->quant) { l->scale = (const float *)p; p += 4 * l->out; l->w = p; p += (size_t)l->in * l->out; p += (4 - ((uintptr_t)p & 3)) & 3; }
        else { l->w = p; p += 4 * (size_t)l->in * l->out; }
        l->b = (const float *)p; p += 4 * l->out; if (p > e) return -1;
        if (l->out > net->max_width) net->max_width = l->out; if (l->in > net->max_width) net->max_width = l->in; }
    return 0; }
static void layer(const rsnn_layer *l, int quant, const float *x, float *y){
    for (uint32_t o = 0; o < l->out; o++) {
        float s = 0;
        if (quant) { const int8_t *w = (const int8_t *)l->w + (size_t)o * l->in; for (uint32_t i = 0; i < l->in; i++) s += (float)w[i] * x[i]; s *= l->scale[o]; }
        else { const float *w = (const float *)l->w + (size_t)o * l->in; for (uint32_t i = 0; i < l->in; i++) s += w[i] * x[i]; }
        y[o] = s + l->b[o]; } }
void rsnn_forward(const rsnn *net, const float *in, int n, float *out, float *scratch){
    uint32_t nin = net->layer[0].in, nout = net->layer[net->n_layers - 1].out;
    for (int a = 0; a < n; a++) {
        const float *x = in + (size_t)a * nin; float *bufs[2] = {scratch, scratch + net->max_width};
        for (uint32_t i = 0; i < net->n_layers; i++) {
            const rsnn_layer *l = &net->layer[i]; float *y = i == net->n_layers - 1 ? out + (size_t)a * nout : bufs[i & 1];
            layer(l, (int)net->quant, x, y);
            if (i < net->n_layers - 1) for (uint32_t o = 0; o < l->out; o++) y[o] = net->act == 1 ? tanhf(y[o]) : (y[o] > 0 ? y[o] : 0);
            x = y; } } }
int rsnn_argmax(const float *v, int n){ int b = 0; for (int i = 1; i < n; i++) if (v[i] > v[b]) b = i; return b; }
