/* Native GU (see gu_native.h).
 *
 * Recorder (game thread): every GU entry point appends one typed operation to the frame's command buffer.  Draws copy the vertices and
 * indices they use, CLUT loads copy the palette, matrix calls copy the matrix: the buffer is self-contained, so the game may reuse its
 * memory at once.  GU's own bookkeeping in the game's memory (the settings block at 0x08C37CC0: draw/display buffers, clear values,
 * scissor, light colours, enabled states) is kept exactly as the original functions keep it, because other GU functions read it.
 *
 * Executor (renderer thread): applies the operations to a typed pipeline state and calls the platform renderer (gfx.h).  The meaning of
 * every field follows the PSP GPU as documented by the GU API (and as implemented by the reference path ge.c, kept for comparison). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "psp_impl.h"
#include "guest.h"
#include "gfx.h"
#include "gu_native.h"

#define SETTINGS 0x08C37CC0u                 /* GU's settings block in the game's data (gu_settings) */
#define LISTCTX  0x08C37CC0u                 /* see below: the current-list context lives at D_08C38260 - 32160 */
/* The decompiled code reaches GU's globals through symbols; their native addresses come from the data image. */
#include "symbols.h"
#define S_BASE ((u32)(D_08C37CC0 - 31936) + 31936)          /* gu_settings */
#define L_BASE ((u32)(D_08C38260 - (-32160)) - 32160)       /* current display list context: [0] cur ptr, [8] start, [16] offset base, [24] cid, [28] active */
#define LD32_(a) (*(const u32 *)GP(a))
#define ST32_(a, v) (*(u32 *)GP(a) = (u32)(v))
#define LD16_(a) (*(const u16 *)GP(a))
#define ST16_(a, v) (*(u16 *)GP(a) = (u16)(v))
#define LD8_(a) (*(const u8 *)GP(a))
#define ST8_(a, v) (*(u8 *)GP(a) = (u8)(v))
static inline float f24f(float f){ u32 u; memcpy(&u, &f, 4); u &= 0xFFFFFF00u; memcpy(&f, &u, 4); return f; }   /* the GPU keeps 24 bits of a float */
static inline float bitsf(u32 u){ float f; memcpy(&f, &u, 4); return f; }

/* ===================================================================== typed operations */
enum {
    OP_RESET = 1, OP_ENABLE, OP_MATRIX, OP_BONE, OP_VIEWPORT, OP_DEPTHRANGE, OP_OFFSET, OP_SCISSOR, OP_CULLMODE,
    OP_AMBIENT, OP_COLMAT, OP_MATERIAL, OP_LIGHT, OP_LIGHTATT, OP_LIGHTCOL,
    OP_TEXMODE, OP_TEXFILTER, OP_TEXFUNC, OP_TEXWRAP, OP_TEXIMAGE, OP_TEXSCALE, OP_TEXOFFSET, OP_CLUTMODE, OP_CLUTLOAD,
    OP_FOG, OP_COLORFUNC, OP_ALPHAFUNC, OP_STENCILFUNC, OP_STENCILOP, OP_DEPTHFUNC, OP_DEPTHMASK, OP_BLEND, OP_PIXELMASK,
    OP_DRAWBUF, OP_DRAW, OP_CLEAR, OP_COPY, OP_FRAG2X
};
typedef struct { u16 op, words; u32 a[6]; } rop_t;                 /* words = total size in u32 incl. this header and any payload after it */
#define HDR_WORDS ((int)(sizeof(rop_t) / 4))

typedef struct { u32 *w; size_t n, cap; volatile int busy; } cbuf_t;
#define NBUF 3
static cbuf_t bufs[NBUF]; static int cur_buf;
static volatile unsigned posted, executed;

static int rec_sub; typedef struct { u32 list; u32 *w; size_t n, cap; } sublist_t; static sublist_t subs[16]; static int nsub, sub_cur = -1;
static u32 *emit(int op, int payload_words){
    cbuf_t sb_, *b = &bufs[cur_buf];
    if (rec_sub && sub_cur >= 0) { sublist_t *s = &subs[sub_cur]; sb_.w = s->w; sb_.n = s->n; sb_.cap = s->cap; b = &sb_; } size_t need = (size_t)HDR_WORDS + (size_t)payload_words;
    if (b->n + need > b->cap) { b->cap = (b->n + need) * 2 + 65536; b->w = realloc(b->w, b->cap * 4); }
    rop_t *r = (rop_t *)(b->w + b->n); memset(r, 0, sizeof *r); r->op = (u16)op; r->words = (u16)(need > 0xFFFF ? 0 : need);
    if (need > 0xFFFF) { r->words = 0; r->a[5] = (u32)need; }        /* big payload: size in a[5] */
    b->n += need;
    if (b == &sb_) { sublist_t *s = &subs[sub_cur]; s->w = sb_.w; s->n = sb_.n; s->cap = sb_.cap; }
    return (u32 *)r; }
#define OP(op_, ...) do { u32 v_[6] = {__VA_ARGS__}; rop_t *r_ = (rop_t *)emit(op_, 0); memcpy(r_->a, v_, sizeof v_); } while (0)
static inline rop_t *opp(u32 *p){ return (rop_t *)p; }

/* ===================================================================== recorder: frame / list control */

void rs_big_unlock(void); void rs_big_lock(void);
static void exec_buffer(void *arg);
static void nop_job(void *p){ (void)p; }
static void submit(void){
    cbuf_t *b = &bufs[cur_buf]; if (!b->n) return;
    b->busy = 1; posted++;
    struct { int idx; } j = {cur_buf}; gfx_post(exec_buffer, &j, sizeof j);
    cur_buf = (cur_buf + 1) % NBUF;
    if (bufs[cur_buf].busy) { rs_big_unlock(); while (bufs[cur_buf].busy) { gfx_run(nop_job, NULL); } rs_big_lock(); }   /* renderer more than NBUF-1 frames behind */
    bufs[cur_buf].n = 0; }

void rgu_init_sync(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3){       /* 08A972CC: sceGuInit's "enqueue the init list and wait" */
    (void)a0; (void)a1; (void)a2; (void)a3; (void)t0; (void)t1; (void)t2; (void)t3;
    u32 s = S_BASE; ST32_(s + 12, 0); ST32_(s + 4, 1); ST32_(s + 8, 0);
    OP(OP_RESET);                                                     /* the init list = every GPU register to its default (see exec_reset) */
    extern void func_08A997F0(u32, u32, u32, u32, u32, u32); func_08A997F0(L_BASE, 0, 0, 0, 0, 0);
    ST8_(s, 1); }

void rgu_start(u32 cid, u32 list, u32 size){                          /* 08A973B0 sceGuStart */
    u32 s = S_BASE, L = L_BASE;
    ST8_(s + 52, 0); ST32_(s + 368, 0); ST32_(L + 24, cid);
    ST32_(L, list); ST32_(L + 16, 0); ST32_(L + 8, list); ST32_(L + 28, 1); ST32_(L + 4, list + size); ST32_(L + 12, list + size);
    if (cid == 0) { ST8_(s + 52, 1); if (LD32_(L + 44) != 0xFFFFFFFFu) return; ST32_(L + 32, 0); ST32_(L + 44, 0); }   /* a direct list is queued once until sceGuSync */
    if (cid == 1 || cid == 3) {                                       /* a call list: record it on its own */
        int k = -1; for (int i = 0; i < nsub; i++) if (subs[i].list == list) k = i;
        if (k < 0 && nsub < 16) { k = nsub++; subs[k].list = list; subs[k].w = 0; }
        if (k >= 0) { sub_cur = k; rec_sub = 1; subs[k].n = 0; }
        static int warned; if (!warned++) fprintf(stderr, "[GU] the game builds a GU_CALL list (%08x): recorded natively, replayed on sceGuCallList\n", list);
        return; }
    rgu_apply_draw_buffer(); }

static u32 pending_send;                     /* a finished GU_SEND list waiting for sceGuSendList (its operations are the current buffer) */
u32 rgu_finish_id(u32 id){                                            /* 08A974BC sceGuFinishId */
    (void)id; u32 L = L_BASE; ST32_(L + 28, 0);
    if (rec_sub && sub_cur >= 0) { rec_sub = 0; sub_cur = -1; return 0; }   /* end of a call list */
    if (LD32_(L + 24) == 2) { pending_send = LD32_(L + 8); return 0; }     /* GU_SEND: drawn when the game sends it */
    submit(); return 0; }

void rgu_signal(u32 sig, u32 arg){ (void)sig; (void)arg; }          /* GE signals: the game installs no signal callback (only GU zeroes the slot) */
void rgu_send_list(u32 mode, u32 list, u32 ctx, u32 a3, u32 t0){     /* 08A976D4 sceGuSendList: one list in flight until sceGuSync, as GU */
    (void)mode; (void)ctx; (void)a3; (void)t0; u32 L = L_BASE;
    if (LD32_(L + 44) != 0xFFFFFFFFu) return;
    if (pending_send && list == pending_send) { pending_send = 0; submit(); }
    else { static int warned; if (!warned++) fprintf(stderr, "[GU] sceGuSendList(%08x): not a list built through GU - ignored\n", list); }
    ST32_(L + 40, 1); ST32_(L + 44, 2); }
u32 rgu_update_stall(void){ return 0; }
void rgu_end_object(void){ }
void rgu_call_list(u32 list){
    for (int i = 0; i < nsub; i++) if (subs[i].list == list && subs[i].w) {
        cbuf_t *b = &bufs[cur_buf]; if (b->n + subs[i].n > b->cap) { b->cap = (b->n + subs[i].n) * 2 + 65536; b->w = realloc(b->w, b->cap * 4); }
        memcpy(b->w + b->n, subs[i].w, subs[i].n * 4); b->n += subs[i].n; return; }
    static int warned; if (!warned++) fprintf(stderr, "[GU] sceGuCallList(%08x): list not recorded natively\n", list); }

static void wait_executed(void){ rs_big_unlock(); gfx_run(nop_job, NULL); rs_big_lock(); }
u32 rgu_sync(u32 mode, u32 what){                                     /* 08A977CC sceGuSync */
    u32 L = L_BASE, slot = LD32_(L + 44); if (slot == 0xFFFFFFFFu) return 0x80000021u;
    u32 e = L + slot * 4; if (LD32_(e + 32) == 0xFFFFFFFFu) return 0x80000021u;
    ST32_(e + 32, 0xFFFFFFFFu); ST32_(L + 44, 0xFFFFFFFFu);
    static int pipe = -1; if (pipe < 0) { extern int rs_setting_int(const char *, int); pipe = rs_setting_int("RS_GU_PIPELINE", 0); }
    if (mode >= 5) return 0;
    if ((mode == 0 || mode == 3 || mode == 4) && what == 0 && !pipe) wait_executed();   /* as the PSP: the submitted drawing is finished */
    return 0; }

/* ===================================================================== recorder: state */
static u32 en_mask(void){ return LD32_(S_BASE + 228); }
static void set_scissor_ops(int on){                                  /* GU keeps the scissor box; enabling the test applies it, disabling restores the full region */
    u32 s = S_BASE, d4 = on ? LD32_(s + 192) : LD32_(s + 200), d5 = on ? LD32_(s + 196) : LD32_(s + 204);
    OP(OP_SCISSOR, d4 & 0x3FF, (d4 >> 10) & 0x3FF, d5 & 0x3FF, (d5 >> 10) & 0x3FF); }
u64 rgu_enable(u32 state){
    u32 s = S_BASE, bit = 1u << (state & 31);
    if (state == 2) { if (!(en_mask() & bit)) set_scissor_ops(1); }
    else if (state == 21) { if (!(en_mask() & bit)) { u32 v = LD32_(s + 224) | 0x10000u; ST32_(s + 224, v); OP(OP_FRAG2X, 1); } }
    else if (state < 22) OP(OP_ENABLE, state, 1);
    ST32_(s + 228, LD32_(s + 228) | bit); return 0; }
u64 rgu_disable(u32 state){
    u32 s = S_BASE, bit = 1u << (state & 31);
    if (state == 2) { if (en_mask() & bit) set_scissor_ops(0); }
    else if (state == 21) { if (en_mask() & bit) { u32 v = LD32_(s + 224) & ~0x10000u; ST32_(s + 224, v); OP(OP_FRAG2X, 0); } }
    else if (state < 22) OP(OP_ENABLE, state, 0);
    ST32_(s + 228, LD32_(s + 228) & ~bit); return 0; }

void rgu_set_matrix(u32 type, u32 m){                                 /* 0 projection (4x4), 1 view, 2 model, 3 texture (4x3: the first three columns) */
    u32 *p = emit(OP_MATRIX, 16); opp(p)->a[0] = type & 3; float *o = (float *)(p + HDR_WORDS); const float *src = (const float *)GP(m);
    if ((type & 3) == 0) for (int i = 0; i < 16; i++) o[i] = f24f(src[i]);
    else for (int r = 0; r < 4; r++) for (int c = 0; c < 3; c++) o[r * 3 + c] = f24f(src[r * 4 + c]); }
void rgu_bone_matrix(u32 index, u32 m){
    u32 *p = emit(OP_BONE, 12); opp(p)->a[0] = index & 7; float *o = (float *)(p + HDR_WORDS); const float *src = (const float *)GP(m);
    for (int r = 0; r < 4; r++) for (int c = 0; c < 3; c++) o[r * 3 + c] = f24f(src[r * 4 + c]); }

void rgu_viewport(u32 cx, u32 cy, u32 w, u32 h){                      /* scale = size * (0.5, -0.5), centre = (cx, cy) */
    float xs = f24f((float)(s32)(w & 0xFFFF) * 0.5f), ys = f24f((float)(s32)(h & 0xFFFF) * -0.5f);
    float xc = f24f((float)(s32)(cx & 0xFFFF)), yc = f24f((float)(s32)(cy & 0xFFFF));
    u32 v[4]; memcpy(&v[0], &xs, 4); memcpy(&v[1], &ys, 4); memcpy(&v[2], &xc, 4); memcpy(&v[3], &yc, 4);
    OP(OP_VIEWPORT, v[0], v[1], v[2], v[3]); }
void rgu_depth_range(u32 n, u32 f){
    u32 s = S_BASE; n &= 0xFFFF; f &= 0xFFFF;
    float zs = f24f((float)(s32)(f - n) * 0.5f), zc = f24f((float)(s32)(f + n) * 0.5f + (float)(s32)LD32_(s + 236));
    ST16_(s + 232, n); ST16_(s + 234, f);
    s32 lo = (s32)(n < f ? n : f) + (s32)LD32_(s + 236), hi = (s32)(n < f ? f : n) + (s32)LD32_(s + 236);
    if (lo > 0xFFFF) lo = 0xFFFF; if (hi > 0xFFFF) hi = 0xFFFF; if (lo < 0) lo = 0; if (hi < 0) hi = 0;
    u32 a, b; memcpy(&a, &zs, 4); memcpy(&b, &zc, 4); OP(OP_DEPTHRANGE, a, b, (u32)lo, (u32)hi); }
void rgu_offset(u32 x, u32 y){ OP(OP_OFFSET, (x & 0xFFFF) << 4, (y & 0xFFFF) << 4); }
void rgu_front_face(u32 order){ OP(OP_CULLMODE, (order ^ 1) & 1); }
void rgu_shade_model(u32 mode){ (void)mode; }                          /* the renderer always interpolates (PSP flat shading: not used by this game's draws) */

void rgu_ambient(u32 c){ OP(OP_AMBIENT, c & 0xFFFFFF, c >> 24); }
void rgu_color_material(u32 comps){ OP(OP_COLMAT, comps & 7); }
void rgu_material(u32 comps, u32 c){ OP(OP_MATERIAL, comps & 7, c & 0xFFFFFF, c >> 24); }
/* light colours: GU caches the three colours of every light (settings + 144) and sends them masked by the components the light was
 * declared with (sceGuLight); this follows the decompiled functions exactly, including the direct mode (settings + 8 != 0). */
static void send_light_colors(u32 light, u32 c0, u32 c1, u32 c2){ OP(OP_LIGHTCOL, light & 3, c0 & 0xFFFFFF, c1 & 0xFFFFFF, c2 & 0xFFFFFF); }
void rgu_light(u32 light, u32 type, u32 comps, u32 pos){
    u32 kind = comps >> 2; if (kind >= 3) kind = 2; (void)kind;
    const float *p = (const float *)GP(pos);
    float x = f24f(p[0]), y = f24f(p[1]), z = f24f(p[2]); u32 v[3]; memcpy(&v[0], &x, 4); memcpy(&v[1], &y, 4); memcpy(&v[2], &z, 4);
    OP(OP_LIGHT, light & 3, type & 3, v[0], v[1], v[2]);
    u32 s = S_BASE; if (LD32_(s + 8) != 0) return;
    u32 m1 = (comps & 1) ? 0xFFFFFFFFu : 0xFF000000u, m2 = (comps & 2) ? 0xFFFFFFFFu : 0xFF000000u, m4 = (comps & 4) ? 0xFFFFFFFFu : 0xFF000000u;
    u32 e = s + 144 + light * 12;
    send_light_colors(light, LD32_(e) & m1, LD32_(e + 4) & m2, LD32_(e + 8) & m4);
    u32 sh = (light * 4) & 31; ST32_(s + 140, (LD32_(s + 140) & (0xFFFFFFF0u << sh)) | (comps << sh)); }   /* as GU (it also clears lower lights' bits) */
void rgu_light_att(u32 light, float k0, float k1, float k2){ u32 v[3]; float a = f24f(k0), b = f24f(k1), c = f24f(k2); memcpy(&v[0], &a, 4); memcpy(&v[1], &b, 4); memcpy(&v[2], &c, 4); OP(OP_LIGHTATT, light & 3, v[0], v[1], v[2]); }
void rgu_light_color(u32 light, u32 comps, u32 color){
    u32 s = S_BASE, w = color & 0xFFFFFF;
    if (LD32_(s + 8) != 0) {                                          /* direct mode: send the given components only */
        u32 c0 = (comps & 1) ? w : 0xFFFFFFFFu, c1 = (comps & 2) ? w : 0xFFFFFFFFu, c2 = (comps & 4) ? w : 0xFFFFFFFFu;
        OP(OP_LIGHTCOL, (light & 3) | 0x100u, c0, c1, c2); return; }
    u32 e = s + 144 + light * 12, cmd = (light * 3 + 143) << 24;
    if (comps & 1) ST32_(e, cmd | w); if (comps & 2) ST32_(e + 4, (cmd + 0x1000000u) | w); if (comps & 4) ST32_(e + 8, (cmd + 0x2000000u) | w);
    u32 lm = LD32_(s + 140) >> (light * 4);
    u32 m1 = (lm & 1) ? 0xFFFFFFFFu : 0xFF000000u, m2 = (lm & 2) ? 0xFFFFFFFFu : 0xFF000000u, m4 = (lm & 4) ? 0xFFFFFFFFu : 0xFF000000u;
    send_light_colors(light, LD32_(e) & m1, LD32_(e + 4) & m2, LD32_(e + 8) & m4); }

void rgu_tex_level_mode(u32 mode, float bias){ (void)mode; (void)bias; }        /* LOD selection: the renderer samples level 0 */
void rgu_tex_slope(float slope){ (void)slope; }
void rgu_tex_mode(u32 tpsm, u32 maxmips, u32 multiclut, u32 swz){ OP(OP_TEXMODE, tpsm & 15, maxmips & 7, multiclut & 1, swz & 1); }
void rgu_tex_filter(u32 mn, u32 mg){ OP(OP_TEXFILTER, mn & 7, mg & 1); }
void rgu_tex_func(u32 tfx, u32 tcc){ u32 s = S_BASE; u32 v = (LD32_(s + 224) & ~0xFFFFu) | (tcc << 8) | tfx; ST32_(s + 224, v); OP(OP_TEXFUNC, tfx & 7, tcc & 1); }
void rgu_tex_wrap(u32 u, u32 v){ OP(OP_TEXWRAP, u & 1, v & 1); }
void rgu_tex_flush(void){ }
static int ceil_log2(u32 x){ x &= 0xFFFF; if (x <= 1) return 0; return 32 - __builtin_clz(x - 1); }
void rgu_tex_image(u32 level, u32 w, u32 h, u32 tbw, u32 tbp){ OP(OP_TEXIMAGE, level & 7, (u32)ceil_log2(w) & 15, (u32)ceil_log2(h) & 15, tbw & 0x7FF, tbp); }
void rgu_tex_scale(float u, float v){ float a = f24f(u), b = f24f(v); u32 x, y; memcpy(&x, &a, 4); memcpy(&y, &b, 4); OP(OP_TEXSCALE, x, y); }
void rgu_tex_offset(float u, float v){ float a = f24f(u), b = f24f(v); u32 x, y; memcpy(&x, &a, 4); memcpy(&y, &b, 4); OP(OP_TEXOFFSET, x, y); }
void rgu_clut_mode(u32 cpsm, u32 shift, u32 mask, u32 start){ OP(OP_CLUTMODE, cpsm & 3, shift & 31, mask & 255, start & 31); }
void rgu_clut_load(u32 blocks, u32 cbp){
    int n = (int)(blocks & 0x3F) * 32; if (n > 4096) n = 4096;
    u32 *p = emit(OP_CLUTLOAD, (n + 3) / 4); opp(p)->a[0] = (u32)n;
    memcpy(p + HDR_WORDS, gfx_gp(cbp), (size_t)n); }

void rgu_fog(u32 color, float n, float f){
    float d = f - n, slope = 0.0f; if (1e-4f < d || d < -1e-4f) slope = 1.0f / d;      /* exactly: 9.9999997e-05 < d, d < -9.9999997e-05 */
    float a = f24f(f), b = f24f(slope); u32 x, y; memcpy(&x, &a, 4); memcpy(&y, &b, 4); OP(OP_FOG, x, y, color & 0xFFFFFF); }
void rgu_scissor(u32 x, u32 y, u32 w, u32 h){
    u32 s = S_BASE; x &= 0xFFFF; y &= 0xFFFF; w &= 0xFFFF; h &= 0xFFFF;
    u32 d4 = 0xD4000000u | (y << 10) | x, d5 = 0xD5000000u | ((y + h - 1) << 10) | (x + w - 1);
    ST32_(s + 196, d5); ST32_(s + 192, d4);
    if (en_mask() & 4) OP(OP_SCISSOR, d4 & 0x3FF, (d4 >> 10) & 0x3FF, d5 & 0x3FF, (d5 >> 10) & 0x3FF); }
void rgu_color_func(u32 func, u32 color, u32 mask){ OP(OP_COLORFUNC, func & 3, color & 0xFFFFFF, mask & 0xFFFFFF); }
void rgu_alpha_func(u32 func, u32 ref, u32 mask){ OP(OP_ALPHAFUNC, func & 7, ref & 255, mask & 255); }
void rgu_stencil_func(u32 func, u32 ref, u32 mask){ OP(OP_STENCILFUNC, func & 7, ref & 255, mask & 255); }
void rgu_stencil_op(u32 fail, u32 zfail, u32 zpass){ OP(OP_STENCILOP, fail & 7, zfail & 7, zpass & 7); }
void rgu_depth_func(u32 func){ OP(OP_DEPTHFUNC, func & 7); }
u32 rgu_depth_mask(u32 mask){ OP(OP_DEPTHMASK, mask & 1); return LD32_(L_BASE); }
void rgu_blend_func(u32 op, u32 src, u32 dst, u32 fa, u32 fb){ OP(OP_BLEND, op & 7, src & 15, dst & 15, fa & 0xFFFFFF, fb & 0xFFFFFF); }
void rgu_pixel_mask(u32 m){ OP(OP_PIXELMASK, m & 0xFFFFFF, m >> 24); }

/* ===================================================================== recorder: frame buffers */
void rgu_draw_buffer_list(u32 psm, u32 fbp, u32 fbw){ OP(OP_DRAWBUF, psm & 3, fbp, fbw & 0x7FF); }
void rgu_depth_buffer(u32 zbp, u32 zbw){ u32 s = S_BASE; ST32_(s + 100 + 4, zbw & 0xFFFF); ST32_(s + 100, zbp); (void)zbw; }
void rgu_apply_draw_buffer(void){                                     /* 08A9971C: the current draw buffer of GU's table, full region and scissor */
    u32 L = L_BASE, s = S_BASE; if (!LD32_(L + 28)) return;
    u32 e = s + 68 + LD32_(s + 64) * 16; u32 w = LD16_(e + 12), h = LD16_(e + 14), fbp = LD32_(e);
    u32 d5 = 0xD5000000u | ((h - 1) << 10) | (w - 1);
    ST32_(s + 132, 0x15000000u); ST32_(s + 200, 0xD4000000u); ST32_(s + 136, 0x16000000u | ((h - 1) << 10) | (w - 1)); ST32_(s + 204, d5);
    OP(OP_DRAWBUF, LD32_(e + 8) & 3, fbp, LD32_(e + 4) & 0x7FF); }      /* (GU sends the drawing region here; the scissor box is unchanged) */

/* ===================================================================== recorder: drawing */
static int vt_layout(u32 vt, int *off){
    int tf = vt & 3, cf = (vt >> 2) & 7, nf = (vt >> 5) & 3, pf = (vt >> 7) & 3, wf = (vt >> 9) & 3, nw = ((vt >> 14) & 7) + 1;
    int pos = 0, al, sz; static const int fs[4] = {0, 1, 2, 4};
    if (wf) { sz = fs[wf]; al = sz; pos = (pos + al - 1) & ~(al - 1); off[0] = pos; pos += sz * nw; } else off[0] = -1;
    if (tf) { sz = fs[tf] * 2; al = fs[tf]; pos = (pos + al - 1) & ~(al - 1); off[1] = pos; pos += sz; } else off[1] = -1;
    if (cf) { sz = cf == 7 ? 4 : 2; al = sz; pos = (pos + al - 1) & ~(al - 1); off[2] = pos; pos += sz; } else off[2] = -1;
    if (nf) { sz = fs[nf] * 3; al = fs[nf]; pos = (pos + al - 1) & ~(al - 1); off[3] = pos; pos += sz; } else off[3] = -1;
    if (pf) { sz = fs[pf] * 3; al = fs[pf]; pos = (pos + al - 1) & ~(al - 1); off[4] = pos; pos += sz; } else off[4] = -1;
    int maxal = 1; if (wf && fs[wf] > maxal) maxal = fs[wf]; if (tf && fs[tf] > maxal) maxal = fs[tf]; if (cf) { int a = cf == 7 ? 4 : 2; if (a > maxal) maxal = a; }
    if (nf && fs[nf] > maxal) maxal = fs[nf]; if (pf && fs[pf] > maxal) maxal = fs[pf];
    return (pos + maxal - 1) & ~(maxal - 1); }
/* one primitive: the vertices it uses are copied (indexed: the index range lo..hi, indices rebased to lo, as u16) */
typedef struct { u32 prim, vt, count, vsz, nvert, idxf; } drawhdr_t;
static void record_draw(u32 prim, u32 vt, u32 count, const u8 *ip, const u8 *vp){
    if (!count || !vp) return;
    vt &= 0xFFFFFF; int off[5]; int vsz = vt_layout(vt, off); if (vsz <= 0) return;
    int idxf = (vt >> 11) & 3; u32 lo = 0, hi = count - 1;
    if (idxf) { if (!ip) return; lo = 0xFFFFFFFFu; hi = 0;
        for (u32 i = 0; i < count; i++) { u32 x = idxf == 1 ? ip[i] : (idxf == 2 ? (u32)(ip[i * 2] | ip[i * 2 + 1] << 8) : (u32)(ip[i * 4] | ip[i * 4 + 1] << 8 | ip[i * 4 + 2] << 16 | (u32)ip[i * 4 + 3] << 24));
            if (x < lo) lo = x; if (x > hi) hi = x; }
        if (hi - lo >= 65535u) { static int w; if (!w++) fprintf(stderr, "[GU] draw with an index range over 65535: skipped\n"); return; } }
    u32 nvert = hi - lo + 1; size_t vbytes = (size_t)nvert * (size_t)vsz, ibytes = idxf ? (size_t)count * 2 : 0;
    int pw = (int)((sizeof(drawhdr_t) + vbytes + ibytes + 3) / 4);
    u32 *p = emit(OP_DRAW, pw); drawhdr_t *d = (drawhdr_t *)(p + HDR_WORDS);
    d->prim = prim & 7; d->vt = vt; d->count = count; d->vsz = (u32)vsz; d->nvert = nvert; d->idxf = (u32)idxf;
    u8 *vb = (u8 *)(d + 1); memcpy(vb, vp + (size_t)lo * (size_t)vsz, vbytes);
    if (idxf) { u16 *ix = (u16 *)(vb + vbytes);
        for (u32 i = 0; i < count; i++) { u32 x = idxf == 1 ? ip[i] : (idxf == 2 ? (u32)(ip[i * 2] | ip[i * 2 + 1] << 8) : (u32)(ip[i * 4] | ip[i * 4 + 1] << 8 | ip[i * 4 + 2] << 16 | (u32)ip[i * 4 + 3] << 24)); ix[i] = (u16)(x - lo); } } }
static inline const u8 *gp_or_null(u32 a){ return a ? (const u8 *)(g_mem + GADDR(a)) : NULL; }
u64 rgu_draw_array(u32 prim, u32 vt, u32 count, u32 idx, u32 vtx){ record_draw(prim, vt, count & 0xFFFF, gp_or_null(idx), gp_or_null(vtx)); return 0; }
void rgu_draw_array_n(u32 prim, u32 vt, u32 count, u32 n, u32 idx, u32 vtx){     /* n primitives over consecutive vertices / indices (the GPU advances its pointers) */
    int off[5]; int vsz = vt_layout(vt & 0xFFFFFF, off); int idxf = (vt >> 11) & 3; u32 isz = idxf == 1 ? 1 : (idxf == 2 ? 2 : 4); count &= 0xFFFF;
    for (u32 k = 0; k < n; k++) {
        record_draw(prim, vt, count, gp_or_null(idx), gp_or_null(vtx));
        if (idxf) { if (idx) idx += count * isz; } else if (vtx) vtx += count * (u32)vsz; } }
void rgu_draw_bezier(u32 vt, u32 uc, u32 vc, u32 idx, u32 vtx){ (void)vt; (void)uc; (void)vc; (void)idx; (void)vtx; static int w; if (!w++) fprintf(stderr, "[GU] sceGuDrawBezier: not used by this game, not implemented\n"); }
void rgu_draw_spline(u32 vt, u32 uc, u32 vc, u32 ue, u32 ve, u32 idx, u32 vtx){ (void)vt; (void)uc; (void)vc; (void)ue; (void)ve; (void)idx; (void)vtx; static int w; if (!w++) fprintf(stderr, "[GU] sceGuDrawSpline: not used by this game, not implemented\n"); }

/* 08A97E6C: GU sprite helper of this game - one textured 2D rectangle at (x, y, z) with texture origin (u, v); its size and texture
 * extent come from 08A9802C (settings + 216..222); flip bits swap the coordinates (transcribed from the decompiled function). */
void rgu_sprite(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2){
    u32 s = S_BASE;
    s32 x0 = (s16)a0, y0 = (s16)a1, z = (s16)a2, u0 = (s16)a3, v0 = (s16)t0;
    s32 u1 = (s16)(u0 + LD16_(s + 216)), v1 = (s16)(v0 + LD16_(s + 218));
    if (t1 & 1) { s32 t = u0; u0 = u1; u1 = t; }
    if (t1 & 2) { s32 t = v0; v0 = v1; v1 = t; }
    s32 x1 = (s16)(x0 + LD16_(s + 220)), y1 = (s16)(y0 + LD16_(s + 222));
    if (t2 & 2) { s32 t = x0; x0 = x1; x1 = t; }
    if ((t2 ^ (t2 << 1)) & 2) { s32 t = y0; y0 = y1; y1 = t; }
    s16 v[10] = {(s16)u0, (s16)v0, (s16)x0, (s16)y0, (s16)z, (s16)u1, (s16)v1, (s16)x1, (s16)y1, (s16)z};
    record_draw(6, 0x800102u, 2, NULL, (const u8 *)v); }

void rgu_clear(u32 flags){                                            /* 08A9806C sceGuClear: the whole current draw buffer */
    u32 s = S_BASE, e = s + 68 + LD32_(s + 64) * 16; u32 w = LD16_(e + 12), h = LD16_(e + 14);
    if (!(w + h)) return;
    u32 col = (LD32_(s + 208) & 0xFFFFFF) | ((u32)LD8_(s + 212) << 24);
    OP(OP_CLEAR, flags & 7, col, LD16_(s + 214), w, h); }

void rgu_copy_image(u32 psm, u32 sx, u32 sy, u32 w, u32 h, u32 srcw, u32 src, u32 dx, u32 sp_in){
    const u8 *st = (const u8 *)GP(sp_in); u16 dy; u32 destw, dest; memcpy(&dy, st, 2); memcpy(&destw, st + 4, 4); memcpy(&dest, st + 8, 4);
    u32 *p = emit(OP_COPY, 6); u32 *q = p + HDR_WORDS;
    opp(p)->a[0] = psm < 3 ? 2 : 4; opp(p)->a[1] = src; opp(p)->a[2] = srcw & 0x7FF; opp(p)->a[3] = (sx & 0x3FF) | ((sy & 0x3FF) << 10); opp(p)->a[4] = dest; opp(p)->a[5] = destw & 0x7FF;
    q[0] = (dx & 0x3FF) | ((u32)(dy & 0x3FF) << 10); q[1] = ((w - 1) & 0x3FF) | (((h - 1) & 0x3FF) << 10); }

/* ===================================================================== executor: typed pipeline state */
typedef struct {
    int en[22];                                   /* GU states (sceGuEnable numbering) */
    int frag2x;
    float world[12], view[12], proj[16], texm[12], bone[8][12];
    float xs, ys, zs, xc, yc, zc; int zmin, zmax, ofs_x, ofs_y;
    int sx1, sy1, sx2, sy2, cull_mode;
    u32 amb, amb_a, mat_amb, mat_a, mat_dif, mat_spe, mat_emi; int colmat;
    struct { int type; float pos[3], att[3]; u32 ca, cd, cs; } L[4];
    float spot_dir[3], spot_exp, spot_cut;
    int tpsm, tmaxlv, tmulti, tswz, tmin, tmag, tfx, tcc, twu, twv;
    struct { u32 addr; int bufw, lw, lh; } lv[8];
    float su, sv, ou, ov;
    int cpsm, cshift, cmask, cstart; u8 clut[4096 + 64]; u32 clut_hash;
    float fog_far, fog_slope; u32 fog_col;
    int afunc, aref, sfunc, sref, smask, sfail, szfail, szpass, zfunc, zmask;
    int bop, bsrc, bdst; u32 bfixa, bfixb, pm_rgb, pm_a;
    int ctfunc; u32 ctref, ctmask;
    int fbpsm, fbw; u32 fbp;
} xs_t;
static xs_t X;
static u32 fnvw(const u32 *p, size_t words){ u32 h = 2166136261u; for (size_t i = 0; i < words; i++) h = (h ^ p[i]) * 16777619u; return h ^ (u32)words; }

static void exec_reset(void){                     /* the values GU's init list gives every register (dumped from the executable) */
    memset(&X, 0, sizeof X);
    static const float I3[12] = {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0}, I4[16] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
    memcpy(X.world, I3, sizeof I3); memcpy(X.view, I3, sizeof I3); memcpy(X.proj, I4, sizeof I4); memcpy(X.texm, I3, sizeof I3);
    for (int b = 0; b < 8; b++) memcpy(X.bone[b], I3, sizeof I3);
    X.su = X.sv = 1.0f; X.colmat = 3; X.mat_amb = 0x333333; X.mat_dif = 0xCCCCCC; X.mat_a = 0xFF; X.amb = 0x333333; X.amb_a = 0xFF;
    for (int i = 0; i < 4; i++) { X.L[i].type = 0; X.L[i].pos[2] = 1.0f; X.L[i].att[0] = 1.0f; }
    X.L[0].cd = 0xFFFFFF; X.L[0].cs = 0xFFFFFF;
    X.spot_dir[2] = -1.0f; X.spot_cut = -1.0f;
    X.tpsm = 3; X.tmulti = 0; X.twu = X.twv = 1; X.tfx = 3; X.tcc = 1;
    X.cpsm = 3; X.cmask = 0xFF; X.fog_col = 0xFFFFFF;
    X.sx2 = 479; X.sy2 = 271; X.afunc = 0; X.aref = 0; X.sfunc = 0; X.smask = 0xFF; X.bsrc = 10; X.bdst = 10; X.bfixa = 0xFFFFFF;
    X.ctmask = 0xFFFFFF; X.fbpsm = 3; X.fbw = 512; X.zmax = 0; }

/* ---- textures (CPU decode for the renderer's cache) ---- */
static u32 clut_entry(int idx){
    idx = ((idx >> X.cshift) & X.cmask) | (X.cstart << 4);
    if (X.cpsm == 3) { idx &= 255 | 0x300; u32 v; memcpy(&v, X.clut + ((idx * 4) & 4095), 4); return v; }
    u16 p; memcpy(&p, X.clut + ((idx * 2) & 4095), 2); u32 r, g, b, a;
    switch (X.cpsm) {
    case 0: r = (p & 31) * 255 / 31; g = ((p >> 5) & 63) * 255 / 63; b = ((p >> 11) & 31) * 255 / 31; a = 255; break;
    case 1: r = (p & 31) * 255 / 31; g = ((p >> 5) & 31) * 255 / 31; b = ((p >> 10) & 31) * 255 / 31; a = (p & 0x8000) ? 255 : 0; break;
    default: r = (p & 15) * 17; g = ((p >> 4) & 15) * 17; b = ((p >> 8) & 15) * 17; a = ((p >> 12) & 15) * 17; }
    return r | (g << 8) | (b << 16) | (a << 24); }
void ge_clut_palette(u32 *pal, int n){ for (int i = 0; i < n; i++) pal[i] = clut_entry(i); }
static u32 rgb565(u16 p){ u32 r = (p & 31) * 255 / 31, g = ((p >> 5) & 63) * 255 / 63, b = ((p >> 11) & 31) * 255 / 31; return r | (g << 8) | (b << 16) | 0xFF000000u; }
static u32 dxt_texel(u32 base, int bufw, int x, int y, int kind){
    int bx = x >> 2, by = y >> 2, bpb = kind == 8 ? 8 : 16; int bpr = (bufw + 3) >> 2;
    u8 *b = gfx_gp(base + (u32)((by * bpr + bx) * bpb)); int ix = x & 3, iy = y & 3;
    u8 *cb = b + (kind == 8 ? 0 : 8); u16 c0, c1; memcpy(&c0, cb, 2); memcpy(&c1, cb + 2, 2);
    u32 col[4]; col[0] = rgb565(c0); col[1] = rgb565(c1);
    int r0 = col[0] & 255, g0 = (col[0] >> 8) & 255, b0 = (col[0] >> 16) & 255, r1 = col[1] & 255, g1 = (col[1] >> 8) & 255, b1 = (col[1] >> 16) & 255;
    if (c0 > c1 || kind != 8) { col[2] = (2 * r0 + r1) / 3 | (((2 * g0 + g1) / 3) << 8) | (((2 * b0 + b1) / 3) << 16) | 0xFF000000u; col[3] = (r0 + 2 * r1) / 3 | (((g0 + 2 * g1) / 3) << 8) | (((b0 + 2 * b1) / 3) << 16) | 0xFF000000u; }
    else { col[2] = (r0 + r1) / 2 | (((g0 + g1) / 2) << 8) | (((b0 + b1) / 2) << 16) | 0xFF000000u; col[3] = 0; }
    int sel = (cb[4 + iy] >> (ix * 2)) & 3; u32 c = col[sel];
    if (kind == 9) { int a = (b[iy * 2 + (ix >> 1)] >> ((ix & 1) * 4)) & 15; c = (c & 0xFFFFFF) | ((u32)(a * 17) << 24); }
    else if (kind == 10) { int a0 = b[0], a1 = b[1]; u64 bits = 0; for (int i = 0; i < 6; i++) bits |= (u64)b[2 + i] << (8 * i);
        int idx = (int)((bits >> (3 * (iy * 4 + ix))) & 7), a;
        if (idx == 0) a = a0; else if (idx == 1) a = a1; else if (a0 > a1) a = ((8 - idx) * a0 + (idx - 1) * a1) / 7; else if (idx < 6) a = ((6 - idx) * a0 + (idx - 1) * a1) / 5; else a = idx == 6 ? 0 : 255;
        c = (c & 0xFFFFFF) | ((u32)a << 24); }
    return c; }
static u32 tex_fetch(int x, int y, u32 base, int bufw, int fmt, int swz){
    int bpp = fmt == 3 || fmt == 7 ? 32 : (fmt == 4 ? 4 : (fmt == 5 ? 8 : 16));
    if (fmt >= 8) return dxt_texel(base, bufw, x, y, fmt);
    u32 off;
    if (!swz) off = (u32)((y * bufw + x) * bpp / 8);
    else { int bytes_row = bufw * bpp / 8, bxb = x * bpp / 8; off = (u32)(((y >> 3) * (bytes_row >> 4) + (bxb >> 4)) * 128 + (y & 7) * 16 + (bxb & 15)); }
    u8 *p = gfx_gp(base + off);
    switch (fmt) {
    case 0: { u16 v; memcpy(&v, p, 2); return rgb565(v); }
    case 1: case 2: { u16 v; memcpy(&v, p, 2); u32 r, g, b, a;
        if (fmt == 1) { r = (v & 31) * 255 / 31; g = ((v >> 5) & 31) * 255 / 31; b = ((v >> 10) & 31) * 255 / 31; a = (v & 0x8000) ? 255 : 0; }
        else { r = (v & 15) * 17; g = ((v >> 4) & 15) * 17; b = ((v >> 8) & 15) * 17; a = ((v >> 12) & 15) * 17; }
        return r | (g << 8) | (b << 16) | (a << 24); }
    case 3: { u32 v; memcpy(&v, p, 4); return v; }
    case 4: { int n = (x & 1) ? (*p >> 4) : (*p & 15); return clut_entry(n); }
    case 5: return clut_entry(*p);
    case 6: { u16 v; memcpy(&v, p, 2); return clut_entry(v); }
    default: { u32 v; memcpy(&v, p, 4); return clut_entry((int)v); } } }
static u32 fnv_step(const u32 *p, size_t words, size_t step){ u32 h = 2166136261u; for (size_t i = 0; i < words; i += step) h = (h ^ p[i]) * 16777619u; return h ^ (u32)words; }
static u32 tex_hash_cb(void *ud){
    const gtex_key_t *k = ud; int f = k->fmt; size_t bytes;
    if (f >= 8) bytes = (size_t)((k->bufw + 3) / 4) * ((k->h + 3) / 4) * (f == 8 ? 8 : 16);
    else { int bpp = (f == 3 || f == 7) ? 32 : (f == 4 ? 4 : (f == 5 ? 8 : 16)); bytes = (size_t)k->bufw * k->h * bpp / 8; }
    size_t base = GADDR(gfx_vram(k->addr)); if (base >= GMEM_SIZE) return 0; if (bytes > GMEM_SIZE - base) bytes = GMEM_SIZE - base;
    size_t words = bytes / 4; const u32 *p = (const u32 *)(g_mem + base);
    if (words <= 4096) return fnv_step(p, words, 1);
    size_t step = words / 256; u32 h = fnv_step(p, words, step);
    for (size_t i = 0; i < 8; i++) h = (h ^ p[i] ^ (p[words - 1 - i] * 31u)) * 16777619u;
    return h; }
static void tex_decode_cb(u32 *dst, void *ud){ const gtex_key_t *k = ud; for (int y = 0; y < k->h; y++) for (int x = 0; x < k->w; x++) dst[y * k->w + x] = tex_fetch(x, y, k->addr, k->bufw, k->fmt, k->swz); }

/* ---- draw state for the renderer (the same derivation as the reference path, from typed state) ---- */
static void rgb24(u32 v, float *o){ o[0] = (v & 255) / 255.0f; o[1] = ((v >> 8) & 255) / 255.0f; o[2] = ((v >> 16) & 255) / 255.0f; }
static void build_state(gfx_state_t *s, int through, int clear){
    memset(s, 0, sizeof *s);
    s->fbfmt = X.fbpsm; s->fbstride = X.fbw ? X.fbw : 512; s->fbaddr = gfx_vram(X.fbp & 0x1FFFFFFFu);
    s->sx1 = X.sx1; s->sy1 = X.sy1; s->sx2 = X.sx2; s->sy2 = X.sy2;
    s->cmr = (X.pm_rgb & 0xFF) != 0xFF; s->cmg = ((X.pm_rgb >> 8) & 0xFF) != 0xFF; s->cmb = ((X.pm_rgb >> 16) & 0xFF) != 0xFF; s->cma = (X.pm_a & 0xFF) != 0xFF;
    s->cull_en = X.en[5] && !through && !clear; s->cull_mode = X.cull_mode;
    s->ztest = X.en[1]; s->zfunc = X.zfunc; s->zwrite = !X.zmask;
    s->blend = X.en[4]; s->bsrc = X.bsrc; s->bdst = X.bdst; s->beq = X.bop; s->bfixa = X.bfixa; s->bfixb = X.bfixb;
    s->atest = X.en[0]; s->afunc = X.afunc; s->aref = X.aref;
    s->fog = X.en[7] && !through && !clear; s->fogcol = X.fog_col;
    if (X.en[3] && !clear) { s->sten = 1; s->sfunc = X.sfunc; s->sref = X.sref; s->smask = X.smask; s->sfail = X.sfail; s->szfail = X.szfail; s->szpass = X.szpass; s->swmask = ~X.pm_a & 255; }
    s->uvs[0] = s->uvs[1] = 1;
    if (X.en[9] && !clear) {
        static gtex_key_t key; memset(&key, 0, sizeof key);
        key.fmt = X.tpsm; key.w = 1 << X.lv[0].lw; key.h = 1 << X.lv[0].lh; key.swz = X.tswz;
        key.addr = gfx_vram(X.lv[0].addr & 0x1FFFFFFFu); key.bufw = X.lv[0].bufw; if (!key.bufw) key.bufw = key.w;
        u32 c5 = (u32)X.cpsm | ((u32)X.cshift << 2) | ((u32)X.cmask << 8) | ((u32)X.cstart << 16);
        key.clut = (key.fmt >= 4 && key.fmt <= 7) ? (X.clut_hash ^ (c5 * 2654435761u)) : 0;
        gtex_src_t src = {tex_hash_cb, tex_decode_cb, &key};
        s->texid = gfx_tex_acquire(&key, &src, s->uvs); s->tex = s->texid != 0;
        if (s->tex) gfx_tex_maps(&s->texmr, &s->texn, &s->texhd);
        s->tfunc = X.tfx; s->trgba = X.tcc; s->tdbl = X.frag2x; s->tclampu = X.twu; s->tclampv = X.twv;
        s->tfilter = (X.tmin & 1) || X.tmag; s->tenv = 0xFFFFFF; } }

static void to44(const float *m43, float *o){ for (int r = 0; r < 4; r++) { for (int c = 0; c < 3; c++) o[r * 4 + c] = m43[r * 3 + c]; o[r * 4 + 3] = r == 3 ? 1.0f : 0.0f; } }
static void mul44(const float *a, const float *b, float *o){ for (int r = 0; r < 4; r++) for (int c = 0; c < 4; c++) o[r * 4 + c] = a[r * 4] * b[c] + a[r * 4 + 1] * b[4 + c] + a[r * 4 + 2] * b[8 + c] + a[r * 4 + 3] * b[12 + c]; }
static void normalize3(float *v){ float l = sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]); if (l > 1e-12f) { v[0] /= l; v[1] /= l; v[2] /= l; } }

static void build_hw(gfx_hw_t *h, u32 vt, const int *off){
    int skin = ((vt >> 9) & 3) != 0, nw = ((vt >> 14) & 7) + 1, lit = X.en[10] && off[3] >= 0;
    memset(h, 0, sizeof *h); h->skin = skin; h->lit = lit;
    float w4[16], v4[16], wv[16], mvp[16]; to44(X.world, w4); to44(X.view, v4); mul44(w4, v4, wv); mul44(wv, X.proj, mvp);
    for (int r = 0; r < 4; r++) for (int c = 0; c < 4; c++) h->mvp[c * 4 + r] = mvp[r * 4 + c];
    for (int r = 0; r < 4; r++) h->wvz[r] = wv[r * 4 + 2];
    for (int r = 0; r < 4; r++) for (int c = 0; c < 3; c++) h->wld[c * 4 + r] = X.world[r * 3 + c];
    float ox = (float)(X.ofs_x & 0xFFFF) / 16.0f, oy = (float)(X.ofs_y & 0xFFFF) / 16.0f;
    h->vp0[0] = X.xs; h->vp0[1] = X.ys; h->vp0[2] = X.zs; h->vp1[0] = X.xc - ox; h->vp1[1] = X.yc - oy; h->vp1[2] = X.zc; h->vp2[0] = ox; h->vp2[1] = oy; h->vp2[2] = (float)X.en[8];
    for (int r = 0; r < 4; r++) for (int c = 0; c < 3; c++) h->wv[c * 4 + r] = wv[r * 4 + c];
    memcpy(h->view, X.view, sizeof h->view);
    h->lfl[3] = off[3] >= 0 ? 1.0f : 0.0f;
    h->uvt[0] = X.su; h->uvt[1] = X.sv; h->uvt[2] = X.ou; h->uvt[3] = X.ov; h->fogp[0] = X.fog_far; h->fogp[1] = X.fog_slope; h->fogp[2] = (float)X.en[7];
    if (skin) for (int b = 0; b < nw && b < 8; b++) for (int r = 0; r < 4; r++) for (int c = 0; c < 3; c++) h->bone[(b * 3 + c) * 4 + r] = X.bone[b][r * 3 + c];
    if (lit) { int hc = off[2] >= 0, n = 0;
        rgb24(X.mat_amb, h->mamb); h->mamb[3] = (X.mat_a & 255) / 255.0f; rgb24(X.mat_dif, h->mdif); rgb24(X.mat_emi, h->memi); rgb24(X.amb, h->msca);
        h->lfl[0] = (hc && (X.colmat & 1)) ? 1.0f : 0.0f; h->lfl[1] = (hc && (X.colmat & 2)) ? 1.0f : 0.0f;
        for (int i = 0; i < 4; i++) { if (!X.en[11 + i]) continue; int j = n++;
            float lp[3] = {X.L[i].pos[0], X.L[i].pos[1], X.L[i].pos[2]}; if (X.L[i].type == 0) normalize3(lp);
            float sd[3] = {X.spot_dir[0], X.spot_dir[1], X.spot_dir[2]}; normalize3(sd);
            memcpy(&h->lpos[j * 4], lp, 12); h->lpos[j * 4 + 3] = (float)X.L[i].type;
            h->latt[j * 4] = X.L[i].att[0]; h->latt[j * 4 + 1] = X.L[i].att[1]; h->latt[j * 4 + 2] = X.L[i].att[2]; h->latt[j * 4 + 3] = X.spot_exp;
            memcpy(&h->lspot[j * 4], sd, 12); h->lspot[j * 4 + 3] = X.spot_cut; rgb24(X.L[i].ca, &h->la[j * 4]); rgb24(X.L[i].cd, &h->ld[j * 4]); }
        h->lfl[2] = (float)n; } }

/* ---- CPU vertex path: sprites (2D rectangles), lines/points, and anything the renderer does not take natively ---- */
typedef struct { float px, py, pz, u, v, col[4], nx, ny, nz, wgt[8]; int hascol; } rawv_t;
static float rdc(const u8 *p, int fmt, int through, int isuv){
    switch (fmt) {
    case 1: return isuv ? (through ? *p : *p / 128.0f) : (through ? (float)(s8)*p : (s8)*p / 128.0f);
    case 2: { s16 v; memcpy(&v, p, 2); if (isuv) { u16 uv = (u16)v; return through ? uv : uv / 32768.0f; } return through ? (float)v : v / 32768.0f; }
    default: { float f; memcpy(&f, p, 4); return f; } } }
static void decode_vertex(u32 vt, const u8 *p, const int *off, rawv_t *o){
    int tf = vt & 3, cf = (vt >> 2) & 7, nf = (vt >> 5) & 3, pf = (vt >> 7) & 3, wf = (vt >> 9) & 3, nw = ((vt >> 14) & 7) + 1, thr = (vt >> 23) & 1;
    static const int fs[4] = {0, 1, 2, 4};
    memset(o, 0, sizeof *o); o->col[0] = o->col[1] = o->col[2] = o->col[3] = 255;
    if (off[0] >= 0) for (int i = 0; i < nw && i < 8; i++) { const u8 *q = p + off[0] + i * fs[wf]; if (wf == 1) o->wgt[i] = *q / 128.0f; else if (wf == 2) { u16 v; memcpy(&v, q, 2); o->wgt[i] = v / 32768.0f; } else memcpy(&o->wgt[i], q, 4); }
    if (off[1] >= 0) { o->u = rdc(p + off[1], tf, thr, 1); o->v = rdc(p + off[1] + fs[tf], tf, thr, 1); }
    if (off[2] >= 0) { const u8 *q = p + off[2]; o->hascol = 1;
        if (cf == 7) { o->col[0] = q[0]; o->col[1] = q[1]; o->col[2] = q[2]; o->col[3] = q[3]; }
        else { u16 v; memcpy(&v, q, 2);
            if (cf == 4) { o->col[0] = (v & 31) * 255 / 31; o->col[1] = ((v >> 5) & 63) * 255 / 63; o->col[2] = ((v >> 11) & 31) * 255 / 31; o->col[3] = 255; }
            else if (cf == 5) { o->col[0] = (v & 31) * 255 / 31; o->col[1] = ((v >> 5) & 31) * 255 / 31; o->col[2] = ((v >> 10) & 31) * 255 / 31; o->col[3] = (v & 0x8000) ? 255 : 0; }
            else { o->col[0] = (v & 15) * 17; o->col[1] = ((v >> 4) & 15) * 17; o->col[2] = ((v >> 8) & 15) * 17; o->col[3] = ((v >> 12) & 15) * 17; } } }
    if (off[3] >= 0) { o->nx = rdc(p + off[3], nf, 0, 0); o->ny = rdc(p + off[3] + fs[nf], nf, 0, 0); o->nz = rdc(p + off[3] + 2 * fs[nf], nf, 0, 0); }
    if (off[4] >= 0) { o->px = rdc(p + off[4], pf, thr, 0); o->py = rdc(p + off[4] + fs[pf], pf, thr, 0); o->pz = rdc(p + off[4] + 2 * fs[pf], pf, thr, 0);
        if (thr && pf == 2) { u16 z; memcpy(&z, p + off[4] + 4, 2); o->pz = z; } } }
static void emit_scr(gfx_vtx_t *o, const rawv_t *col, float sx, float sy, float sz, float u, float v){
    o->x = sx * (2.0f / 512) - 1; o->y = sy * (2.0f / 512) - 1; o->z = sz * (2.0f / 65535) - 1; o->w = 1; o->u = u; o->v = v;
    o->r = col->col[0] / 255.0f; o->g = col->col[1] / 255.0f; o->b = col->col[2] / 255.0f; o->a = col->col[3] / 255.0f; o->f = 1.0f; }

static u32 st_draws, st_prims;
static void exec_draw(const u32 *payload){
    const drawhdr_t *d = (const drawhdr_t *)payload; const u8 *vb = (const u8 *)(d + 1); const u16 *ix = d->idxf ? (const u16 *)(vb + (size_t)d->nvert * d->vsz) : NULL;
    u32 vt = d->vt; int ptype = (int)d->prim, count = (int)d->count, through = (vt >> 23) & 1; int off[5]; int vsz = vt_layout(vt, off); (void)vsz;
    st_prims++;
    float defc[4] = {(float)(X.mat_amb & 255), (float)((X.mat_amb >> 8) & 255), (float)((X.mat_amb >> 16) & 255), (float)(X.mat_a & 255)};
    /* the renderer reads the PSP vertex format itself (triangles, strips, fans): native draw */
    if (ptype >= 3 && ptype <= 5) {
        gfx_state_t st; build_state(&st, through, 0); static gfx_hw_t h;
        if (!through) build_hw(&h, vt, off);
        else { memset(&h, 0, sizeof h); h.uvt[0] = st.tex ? 1.0f / (float)(1 << X.lv[0].lw) : 1.0f; h.uvt[1] = st.tex ? 1.0f / (float)(1 << X.lv[0].lh) : 1.0f; }
        static u8 *idx8; static int icap; const u8 *ip = NULL; int idxf = 0;
        if (ix) { if (icap < count * 2) { icap = count * 2 + 1024; idx8 = realloc(idx8, (size_t)icap); } memcpy(idx8, ix, (size_t)count * 2); ip = idx8; idxf = 2; }
        gfx_native_t nv = {vt & ~(3u << 11), (int)d->vsz, count, ptype, idxf, vb, ip, {defc[0] / 255.0f, defc[1] / 255.0f, defc[2] / 255.0f, defc[3] / 255.0f}, {off[0], off[1], off[2], off[3], off[4]}};
        if (idxf) nv.vt = (vt & ~(3u << 11)) | (2u << 11);
        if (gfx_draw_native(&st, &h, &nv)) { st_draws++; return; } }
    /* sprites (2D rectangles) and the rest: corners on the CPU */
    if (ptype == 6 && through) {
        gfx_state_t st; build_state(&st, 1, 0);
        static gfx_vtx_t *out; static int ocap; if (ocap < count * 3 + 6) { ocap = count * 3 + 64; out = realloc(out, sizeof *out * (size_t)ocap); }
        float iw = st.tex ? 1.0f / (float)(1 << X.lv[0].lw) : 1.0f, ih = st.tex ? 1.0f / (float)(1 << X.lv[0].lh) : 1.0f; int n = 0;
        for (int i = 0; i + 1 < count; i += 2) {
            rawv_t a, b; decode_vertex(vt, vb + (size_t)(ix ? ix[i] : i) * d->vsz, off, &a); decode_vertex(vt, vb + (size_t)(ix ? ix[i + 1] : i + 1) * d->vsz, off, &b);
            if (!b.hascol) for (int k = 0; k < 4; k++) b.col[k] = defc[k];
            float bz = b.pz < 0 ? 0 : (b.pz > 65535 ? 65535 : b.pz); gfx_vtx_t A, B, C, D;
            emit_scr(&A, &b, a.px, a.py, bz, a.u * iw, a.v * ih); emit_scr(&B, &b, b.px, a.py, bz, b.u * iw, a.v * ih);
            emit_scr(&C, &b, a.px, b.py, bz, a.u * iw, b.v * ih); emit_scr(&D, &b, b.px, b.py, bz, b.u * iw, b.v * ih);
            out[n++] = A; out[n++] = B; out[n++] = C; out[n++] = B; out[n++] = D; out[n++] = C; }
        gfx_draw(&st, out, n); st_draws++; return; }
    static int warned[8]; if (ptype < 8 && !warned[ptype]++) fprintf(stderr, "[GU] primitive type %d%s is not drawn natively\n", ptype, through ? " (2D)" : ""); }

static void exec_clear(const rop_t *r){
    gfx_state_t st; build_state(&st, 1, 1);
    u32 col = r->a[1]; float rgba[4] = {(col & 255) / 255.0f, ((col >> 8) & 255) / 255.0f, ((col >> 16) & 255) / 255.0f, (col >> 24) / 255.0f};
    int w = (int)r->a[3], h = (int)r->a[4], fl = (int)r->a[0];
    gfx_clear(&st, 0, 0, w - 1, h - 1, rgba, (float)r->a[2] / 65535.0f, fl & 1, (fl >> 1) & 1, (fl >> 2) & 1); }

static void exec_copy(const rop_t *r, const u32 *q){
    int bpp = (int)r->a[0]; u32 src = gfx_vram(r->a[1]), dst = gfx_vram(r->a[4]); int sw = (int)r->a[2], dw = (int)r->a[5];
    int sx = r->a[3] & 0x3FF, sy = (r->a[3] >> 10) & 0x3FF, dx = q[0] & 0x3FF, dy = (q[0] >> 10) & 0x3FF, w = (q[1] & 0x3FF) + 1, h = ((q[1] >> 10) & 0x3FF) + 1;
    gfx_flush();
    gfx_transfer(src, sw, sx, sy, dst, dw, dx, dy, w, h, bpp);
    for (int y = 0; y < h; y++) memmove(gfx_gp(dst + (u32)(((dy + y) * dw + dx) * bpp)), gfx_gp(src + (u32)(((sy + y) * sw + sx) * bpp)), (size_t)w * bpp);
    rs_gfx_epoch++; }

static void exec_op(const rop_t *r){
    const u32 *pl = (const u32 *)r + HDR_WORDS; const u32 *a = r->a;
    switch (r->op) {
    case OP_RESET: exec_reset(); break;
    case OP_ENABLE: if (a[0] < 22) X.en[a[0]] = (int)a[1]; break;
    case OP_FRAG2X: X.frag2x = (int)a[0]; break;
    case OP_MATRIX: { const float *m = (const float *)pl; switch (a[0]) { case 0: memcpy(X.proj, m, 64); break; case 1: memcpy(X.view, m, 48); break; case 2: memcpy(X.world, m, 48); break; default: memcpy(X.texm, m, 48); } } break;
    case OP_BONE: memcpy(X.bone[a[0] & 7], pl, 48); break;
    case OP_VIEWPORT: X.xs = bitsf(a[0]); X.ys = bitsf(a[1]); X.xc = bitsf(a[2]); X.yc = bitsf(a[3]); break;
    case OP_DEPTHRANGE: X.zs = bitsf(a[0]); X.zc = bitsf(a[1]); X.zmin = (int)a[2]; X.zmax = (int)a[3]; break;
    case OP_OFFSET: X.ofs_x = (int)a[0]; X.ofs_y = (int)a[1]; break;
    case OP_SCISSOR: X.sx1 = (int)a[0]; X.sy1 = (int)a[1]; X.sx2 = (int)a[2]; X.sy2 = (int)a[3]; break;
    case OP_CULLMODE: X.cull_mode = (int)a[0]; break;
    case OP_AMBIENT: X.amb = a[0]; X.amb_a = a[1]; break;
    case OP_COLMAT: X.colmat = (int)a[0]; break;
    case OP_MATERIAL: if (a[0] & 1) { X.mat_amb = a[1]; X.mat_a = a[2]; } if (a[0] & 2) X.mat_dif = a[1]; if (a[0] & 4) X.mat_spe = a[1]; break;
    case OP_LIGHT: X.L[a[0]].type = (int)a[1]; X.L[a[0]].pos[0] = bitsf(a[2]); X.L[a[0]].pos[1] = bitsf(a[3]); X.L[a[0]].pos[2] = bitsf(a[4]); break;
    case OP_LIGHTATT: X.L[a[0]].att[0] = bitsf(a[1]); X.L[a[0]].att[1] = bitsf(a[2]); X.L[a[0]].att[2] = bitsf(a[3]); break;
    case OP_LIGHTCOL: { int l = a[0] & 3; if (a[0] & 0x100) { if (a[1] != 0xFFFFFFFFu) X.L[l].ca = a[1]; if (a[2] != 0xFFFFFFFFu) X.L[l].cd = a[2]; if (a[3] != 0xFFFFFFFFu) X.L[l].cs = a[3]; }
                        else { X.L[l].ca = a[1]; X.L[l].cd = a[2]; X.L[l].cs = a[3]; } } break;
    case OP_TEXMODE: X.tpsm = (int)a[0]; X.tmaxlv = (int)a[1]; X.tmulti = (int)a[2]; X.tswz = (int)a[3]; break;
    case OP_TEXFILTER: X.tmin = (int)a[0]; X.tmag = (int)a[1]; break;
    case OP_TEXFUNC: X.tfx = (int)a[0]; X.tcc = (int)a[1]; break;
    case OP_TEXWRAP: X.twu = (int)a[0]; X.twv = (int)a[1]; break;
    case OP_TEXIMAGE: X.lv[a[0]].lw = (int)a[1]; X.lv[a[0]].lh = (int)a[2]; X.lv[a[0]].bufw = (int)a[3]; X.lv[a[0]].addr = a[4]; break;
    case OP_TEXSCALE: X.su = bitsf(a[0]); X.sv = bitsf(a[1]); break;
    case OP_TEXOFFSET: X.ou = bitsf(a[0]); X.ov = bitsf(a[1]); break;
    case OP_CLUTMODE: X.cpsm = (int)a[0]; X.cshift = (int)a[1]; X.cmask = (int)a[2]; X.cstart = (int)a[3]; break;
    case OP_CLUTLOAD: { int n = (int)a[0]; memcpy(X.clut, pl, (size_t)n); X.clut_hash = fnvw((const u32 *)X.clut, (size_t)n / 4); } break;
    case OP_FOG: X.fog_far = bitsf(a[0]); X.fog_slope = bitsf(a[1]); X.fog_col = a[2]; break;
    case OP_COLORFUNC: X.ctfunc = (int)a[0]; X.ctref = a[1]; X.ctmask = a[2]; break;
    case OP_ALPHAFUNC: X.afunc = (int)a[0]; X.aref = (int)a[1]; break;
    case OP_STENCILFUNC: X.sfunc = (int)a[0]; X.sref = (int)a[1]; X.smask = (int)a[2]; break;
    case OP_STENCILOP: X.sfail = (int)a[0]; X.szfail = (int)a[1]; X.szpass = (int)a[2]; break;
    case OP_DEPTHFUNC: X.zfunc = (int)a[0]; break;
    case OP_DEPTHMASK: X.zmask = (int)a[0]; break;
    case OP_BLEND: X.bop = (int)a[0]; X.bsrc = (int)a[1]; X.bdst = (int)a[2]; X.bfixa = a[3]; X.bfixb = a[4]; break;
    case OP_PIXELMASK: X.pm_rgb = a[0]; X.pm_a = a[1]; break;
    case OP_DRAWBUF: X.fbpsm = (int)a[0]; X.fbp = a[1]; X.fbw = (int)a[2]; break;
    case OP_DRAW: exec_draw(pl); break;
    case OP_CLEAR: exec_clear(r); break;
    case OP_COPY: exec_copy(r, pl); break;
    default: break; } }

static void exec_buffer(void *arg){
    int idx = *(const int *)arg; cbuf_t *b = &bufs[idx]; u64 t0 = rs_perf_us();
    for (size_t p = 0; p < b->n; ) { const rop_t *r = (const rop_t *)(b->w + p); size_t words = r->words ? r->words : r->a[5]; if (!words) break; exec_op(r); p += words; }
    gfx_flush(); rs_perf.ge_us += rs_perf_us() - t0;
    __sync_synchronize(); b->busy = 0; executed++; }

/* ===================================================================== what the rest of the platform layer expects from the GPU side */
#ifndef RS_GE_REFERENCE
u32 rs_ge_cb_finish_func, rs_ge_cb_finish_arg;
__attribute__((weak)) void rs_overlay_draw(u32 addr, u32 stride, u32 fmt){ (void)addr; (void)stride; (void)fmt; }   /* colour_picker.c: menus drawn natively over the frame */
static void disp_job(void *p){ const u32 *a = p; rs_overlay_draw(a[0], a[1], a[2]); gfx_set_display(a[0], a[1], a[2]); rs_gfx_epoch++; gfx_frame_ready(); }
void rs_display_set(u32 addr, u32 stride, u32 fmt){ u32 a[3] = {addr, stride, fmt}; gfx_post(disp_job, a, sizeof a); }
typedef struct { u32 *out; int ret; } rd_t;
static void read_job(void *p){ rd_t *r = p; r->ret = gfx_read_display(r->out); }
int rs_display_read(u32 *out){ rd_t r = {out, 0}; gfx_run(read_job, &r); return r.ret; }
/* raw GE lists: nothing in the game submits one except GU, which no longer does */
int rs_ge_enqueue(u32 list, u32 stall){ (void)stall; static int w; if (!w++) fprintf(stderr, "[GU] a raw GE list (%08x) was submitted - not supported natively\n", list); void rs_ge_finish_hook(int); rs_ge_finish_hook(0); return 0; }
void rs_ge_update_stall(int id, u32 stall){ (void)id; (void)stall; }
int rs_ge_busy(void){ return posted != executed; }
unsigned rs_ge_posted(void){ return posted; }
int rs_ge_done_upto(unsigned mark){ return (int)(executed - mark) >= 0; }
void rs_ge_wait_idle(void){ rs_big_unlock(); gfx_run(nop_job, NULL); rs_big_lock(); }
void rs_ge_reset(void){ }
u32 rs_ge_prims(void){ return st_prims; }
void rs_ge_summary(void){ char b[256]; gfx_stats(b, sizeof b); fprintf(stderr, "[GU] native: %u primitives, %u draws  %s\n", st_prims, st_draws, b); }
void rs_capture_request(void){ }
#endif
