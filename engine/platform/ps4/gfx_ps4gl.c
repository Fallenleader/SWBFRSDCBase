/* PS4 renderer: PS4GL_GNM (github.com/markabrazuk336-maker/PS4GL_GNM), OpenGL ES 2-style calls that the driver turns into GNM
 * command packets for the PS4's GPU.  The GL back end (platform/desktop/gfx_gl.c) in GLES 2 form: the shaders are GLSL ES 1.00
 * (platform/ps4/shaders), compiled on the PC by PS4GL's shadersbC.py and loaded with glShaderBinary; 1920x1080 output.  A normal
 * game package (category gd: ~4.5 GiB of memory). */
#include "../../render/ak_gfx.h"
#include "../../render/ak_font.h"
#include "../plat.h"
#include "../../core/ak_settings.h"
#include "ps4gl.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gfx_ps4_sb.h"

struct ak_gfx_buf { GLuint id; GLenum target; };
struct ak_gfx_tex { GLuint id; };

static int W, H; static char name[160];
static GLuint prog[AK_PIPE_COUNT], ui_prog, ui_vbo, ui_ibo, font_tex, white_tex;
static GLint a_pos[AK_PIPE_COUNT], a_uv[AK_PIPE_COUNT], a_nrm[AK_PIPE_COUNT], a_col[AK_PIPE_COUNT], ua_pos, ua_uv, ua_col;
static GLint u_vp[AK_PIPE_COUNT], u_fog[AK_PIPE_COUNT], u_fogr[AK_PIPE_COUNT], u_tint[AK_PIPE_COUNT], ui_scale;
static f32 tint[4] = { 1, 1, 1, 1 }; static bool tint_dirty;
static ak_gfx_env frame_env_;
static GLint u_uvo[AK_PIPE_COUNT]; static f32 uvo[2]; static bool uvo_dirty;
static GLint u_sh[AK_PIPE_COUNT][4], u_lit[AK_PIPE_COUNT]; static f32 light_sh[12]; static f32 light_on; static bool light_dirty;
static int cur_pipe = -1; static GLuint cur_vb, cur_ib, cur_tex;
static ak_gfx_stats st; static u64 t_begin;
static u8 *shot_px;

#define UI_MAXQ 4096
typedef struct { f32 x, y, u, v; u32 c; } uiv;
static uiv *ui_v; static int ui_n;

static GLuint shader(GLenum type, const unsigned char *sb, size_t n)
{
    GLuint sh = glCreateShader(type);
    glShaderBinary(1, &sh, 0, sb, (GLsizei)n);
    return sh;
}
static GLuint link(const unsigned char *vs, size_t nvs, const unsigned char *fs, size_t nfs)
{
    GLuint p = glCreateProgram(), v = shader(GL_VERTEX_SHADER, vs, nvs), f = shader(GL_FRAGMENT_SHADER, fs, nfs);
    glAttachShader(p, v); glAttachShader(p, f); glLinkProgram(p);
    GLint ok = 0; glGetProgramiv(p, GL_LINK_STATUS, &ok);
    if (!ok) AK_ERROR("ps4gl", "program link failed (0x%x)", (unsigned)glGetError());
    glDeleteShader(v); glDeleteShader(f);
    return p;
}
static void log_line(const char *l) { AK_INFO("ps4gl", "%s", l); }

bool ak_gfx_init(const ak_gfx_config *c)
{
    (void)c;
    ps4glSetLogCallback(log_line);
    {   long mb = ak_setting_int("AK_PS4_VIDEO_MB", 1024);
        if (!ps4glInit((size_t)mb << 20)) { AK_ERROR("ps4gl", "ps4glInit failed"); return false; } }
    {   int ss = ak_setting_int("AK_SUPERSAMPLE", ps4glIsProMode() ? 2 : 1); ps4glSetSupersampling(ss < 1 ? 1 : ss > 2 ? 2 : ss); }
    W = 1920; H = 1080;
    snprintf(name, sizeof name, "PS4GL_GNM %dx%d%s", W, H, ps4glIsProMode() ? " (Pro)" : "");
    static const struct { const unsigned char *p; size_t n; } fs[AK_PIPE_COUNT] = {
        [AK_PIPE_OPAQUE] = { sb_opaque_frag, sizeof sb_opaque_frag }, [AK_PIPE_CUTOUT] = { sb_cutout_frag, sizeof sb_cutout_frag },
        [AK_PIPE_OVERLAY] = { sb_cutout_frag, sizeof sb_cutout_frag }, [AK_PIPE_LAYER] = { sb_alpha_frag, sizeof sb_alpha_frag },
        [AK_PIPE_BLEND] = { sb_alpha_frag, sizeof sb_alpha_frag }, [AK_PIPE_ADD] = { sb_alpha_frag, sizeof sb_alpha_frag },
        [AK_PIPE_BEAM] = { sb_beam_frag, sizeof sb_beam_frag }, [AK_PIPE_HUD] = { sb_alpha_frag, sizeof sb_alpha_frag } };
    for (int i = 0; i < AK_PIPE_COUNT; i++) {
        prog[i] = link(sb_ak_vert, sizeof sb_ak_vert, fs[i].p, fs[i].n);
        u_vp[i] = glGetUniformLocation(prog[i], "uVP"); u_fog[i] = glGetUniformLocation(prog[i], "uFog"); u_fogr[i] = glGetUniformLocation(prog[i], "uFogRange");
        u_tint[i] = glGetUniformLocation(prog[i], "uTint"); u_uvo[i] = glGetUniformLocation(prog[i], "uUvOff");
        u_sh[i][0] = glGetUniformLocation(prog[i], "uSh0"); u_sh[i][1] = glGetUniformLocation(prog[i], "uSh1");
        u_sh[i][2] = glGetUniformLocation(prog[i], "uSh2"); u_sh[i][3] = glGetUniformLocation(prog[i], "uSh3");
        u_lit[i] = -1;                                   /* (the lit flag rides in uFogRange.w) */
        a_pos[i] = glGetAttribLocation(prog[i], "aPos"); a_uv[i] = glGetAttribLocation(prog[i], "aUv");
        a_nrm[i] = glGetAttribLocation(prog[i], "aNrm"); a_col[i] = glGetAttribLocation(prog[i], "aCol");
    }
    ui_prog = link(sb_ui_vert, sizeof sb_ui_vert, sb_ui_frag, sizeof sb_ui_frag); ui_scale = glGetUniformLocation(ui_prog, "uScale");
    ua_pos = glGetAttribLocation(ui_prog, "aPos"); ua_uv = glGetAttribLocation(ui_prog, "aUv"); ua_col = glGetAttribLocation(ui_prog, "aCol");
    glGenBuffers(1, &ui_vbo); glBindBuffer(GL_ARRAY_BUFFER, ui_vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(uiv) * 4 * UI_MAXQ, NULL, GL_STREAM_DRAW);
    glGenBuffers(1, &ui_ibo); glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ui_ibo);
    u16 *q = (u16 *)malloc(UI_MAXQ * 6 * 2);
    for (int i = 0; i < UI_MAXQ; i++) { u16 b = (u16)(i * 4); u16 *p = q + i * 6; p[0] = b; p[1] = b + 1; p[2] = b + 2; p[3] = b + 2; p[4] = b + 1; p[5] = b + 3; }
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, UI_MAXQ * 6 * 2, q, GL_STATIC_DRAW); free(q);
    glGenTextures(1, &font_tex); glBindTexture(GL_TEXTURE_2D, font_tex);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_LUMINANCE, AK_FONT_W, AK_FONT_H_PX, 0, GL_LUMINANCE, GL_UNSIGNED_BYTE, ak_font_alpha);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
    u32 wpx = 0xFFFFFFFFu; glGenTextures(1, &white_tex); glBindTexture(GL_TEXTURE_2D, white_tex);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 1, 1, 0, GL_RGBA, GL_UNSIGNED_BYTE, &wpx);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    ui_v = (uiv *)malloc(sizeof(uiv) * 4 * UI_MAXQ);
    AK_INFO("ps4gl", "%s", name);
    return true;
}

void ak_gfx_shutdown(void) { free(ui_v); free(shot_px); }
void ak_gfx_size(int *w, int *h) { *w = W; *h = H; }
const char *ak_gfx_name(void) { return name; }

static ak_gfx_buf *make_buf(GLenum target, const void *d, size_t n)
{
    ak_gfx_buf *b = (ak_gfx_buf *)calloc(1, sizeof *b);
    b->target = target; glGenBuffers(1, &b->id);
    glBindBuffer(target, b->id); glBufferData(target, (GLsizeiptr)n, d, GL_STATIC_DRAW);
    cur_vb = cur_ib = 0;
    return b;
}
ak_gfx_buf *ak_gfx_vertices(const ak_vtx *v, u32 n) { return make_buf(GL_ARRAY_BUFFER, v, sizeof *v * n); }
ak_gfx_buf *ak_gfx_indices(const u32 *i, u32 n) { return make_buf(GL_ELEMENT_ARRAY_BUFFER, i, 4u * n); }
void ak_gfx_free_buf(ak_gfx_buf *b) { if (b) { glDeleteBuffers(1, &b->id); free(b); cur_vb = cur_ib = 0; } }

static ak_gfx_tex *texture_with(const ak_texture *t, const u32 *pal);
ak_gfx_tex *ak_gfx_texture(const ak_texture *t) { return texture_with(t, t->palette); }
ak_gfx_tex *ak_gfx_texture_palette(ak_gfx_tex *base, const ak_texture *t, const u32 *pal) { (void)base; return texture_with(t, pal); }
static ak_gfx_tex *texture_with(const ak_texture *t, const u32 *pal)
{
    ak_gfx_tex *x = (ak_gfx_tex *)calloc(1, sizeof *x);
    glGenTextures(1, &x->id); glBindTexture(GL_TEXTURE_2D, x->id);
    u32 *px = (u32 *)malloc((size_t)t->width * t->height * 4);
    for (int l = 0; l < t->levels; l++) {
        int w = t->width >> l, h = t->height >> l; if (!w) w = 1; if (!h) h = 1;
        { ak_texture tt = *t; memcpy(tt.palette, pal, sizeof(u32) << t->bpp); ak_texture_expand(&tt, l, px); }
        glTexImage2D(GL_TEXTURE_2D, l, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, px);
    }
    free(px);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, t->levels > 1 ? GL_LINEAR_MIPMAP_LINEAR : GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    cur_tex = 0;
    return x;
}
void ak_gfx_free_tex(ak_gfx_tex *t) { if (t) { glDeleteTextures(1, &t->id); free(t); cur_tex = 0; } }
void ak_gfx_wait_idle(void) { glFinish(); }

static int cull_mode = 1, cull_state = -1; static bool cull_on = true;
static ak_m4 cur_vp, frame_vp; static ak_gfx_env cur_env; static bool vp_dirty;
void ak_gfx_begin(u32 clear, const ak_m4 *vp, const ak_gfx_env *env)
{
    t_begin = ak_plat_time_us(); memset(&st, 0, sizeof st);
    glViewport(0, 0, W, H);
    glClearColor((clear & 255) / 255.0f, ((clear >> 8) & 255) / 255.0f, ((clear >> 16) & 255) / 255.0f, 1.0f);
    glDepthMask(GL_TRUE); glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST); glDepthFunc(GL_LEQUAL);
    {   static int cull = -1; if (cull < 0) cull = ak_setting_int("AK_CULL", 0);
        cull_mode = cull; glCullFace(cull == 2 ? GL_FRONT : GL_BACK); glFrontFace(GL_CCW); cull_on = true; cull_state = -1; }
    cur_vp = frame_vp = *vp; cur_env = *env; frame_env_ = *env; cur_pipe = -1; vp_dirty = false; cur_vb = cur_ib = cur_tex = 0;
    tint[0] = tint[1] = tint[2] = tint[3] = 1; tint_dirty = false; light_on = 0; light_dirty = true; uvo[0] = uvo[1] = 0; uvo_dirty = true;
}

void ak_gfx_set_cull(bool on) { cull_on = on; }
void ak_gfx_set_tint(const f32 *rgba)
{
    f32 t[4] = { 1, 1, 1, 1 }; if (rgba) memcpy(t, rgba, sizeof t);
    if (memcmp(t, tint, sizeof t)) { memcpy(tint, t, sizeof t); tint_dirty = true; }
}
void ak_gfx_set_light(const f32 *sh)
{
    f32 on = sh ? 1.0f : 0.0f;
    if (on != light_on || (sh && memcmp(sh, light_sh, sizeof light_sh))) { light_on = on; if (sh) memcpy(light_sh, sh, sizeof light_sh); light_dirty = true; }
}
void ak_gfx_set_fog_range(const f32 *se)
{
    f32 a = se ? se[0] : frame_env_.fog_start, b = se ? se[1] : frame_env_.fog_end;
    if (a != cur_env.fog_start || b != cur_env.fog_end) { cur_env.fog_start = a; cur_env.fog_end = b; cur_pipe = -1; }   /* (re-sent with the pipeline) */
}
void ak_gfx_set_uv_offset(const f32 *uv)
{
    f32 o[2] = { uv ? uv[0] : 0, uv ? uv[1] : 0 };
    if (o[0] != uvo[0] || o[1] != uvo[1]) { uvo[0] = o[0]; uvo[1] = o[1]; uvo_dirty = true; }
}
void ak_gfx_set_transform(const ak_m4 *mvp)
{
    cur_vp = mvp ? *mvp : frame_vp; vp_dirty = true;
}

void ak_gfx_draw(ak_pipe p, ak_gfx_tex *t, ak_gfx_buf *vb, ak_gfx_buf *ib, u32 first, u32 count);
void ak_gfx_draw_immediate(ak_pipe p, ak_gfx_tex *t, const ak_vtx *v, u32 count)
{
    static ak_gfx_buf vb, ib; static u32 cap; static u32 *seq;
    if (!count) return;
    if (!vb.id) { glGenBuffers(1, &vb.id); glGenBuffers(1, &ib.id); }
    if (count > cap) {
        u32 nc = count * 2; u32 *ns = (u32 *)realloc(seq, 4u * nc); if (!ns) return;
        seq = ns; for (u32 i = cap; i < nc; i++) seq[i] = i;
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ib.id); glBufferData(GL_ELEMENT_ARRAY_BUFFER, 4u * nc, seq, GL_STATIC_DRAW); cur_ib = ib.id;
        cap = nc;
    }
    glBindBuffer(GL_ARRAY_BUFFER, vb.id); glBufferData(GL_ARRAY_BUFFER, sizeof *v * count, v, GL_STREAM_DRAW);
    cur_vb = 0;                                          /* re-point the attributes at the new data */
    ak_gfx_draw(p, t, &vb, &ib, 0, count);
}
static int attr_pipe = -1;
static void attrib(GLint loc, int n, GLenum type, GLboolean norm, size_t off) { if (loc < 0) return; glEnableVertexAttribArray((GLuint)loc); glVertexAttribPointer((GLuint)loc, n, type, norm, sizeof(ak_vtx), (void *)off); }
static void set_fogr(ak_pipe p)
{
    if (p == AK_PIPE_HUD) glUniform4f(u_fogr[p], 0.0f, 0.0f, 1.0f, light_on);
    else glUniform4f(u_fogr[p], cur_env.fog_start, cur_env.fog_end, cur_env.colour_scale, light_on);
}
static void set_sh(ak_pipe p) { for (int k = 0; k < 4; k++) glUniform4f(u_sh[p][k], light_sh[k * 3], light_sh[k * 3 + 1], light_sh[k * 3 + 2], 0.0f); }
void ak_gfx_draw(ak_pipe p, ak_gfx_tex *t, ak_gfx_buf *vb, ak_gfx_buf *ib, u32 first, u32 count)
{
    if (vp_dirty && (int)p == cur_pipe) { glUniformMatrix4fv(u_vp[p], 1, GL_FALSE, cur_vp.m); vp_dirty = false; }
    if (tint_dirty && (int)p == cur_pipe) { glUniform4fv(u_tint[p], 1, tint); tint_dirty = false; }
    if (light_dirty && (int)p == cur_pipe) { set_fogr(p); if (light_on > 0) set_sh(p); light_dirty = false; }
    if (uvo_dirty && (int)p == cur_pipe) { glUniform4f(u_uvo[p], uvo[0], uvo[1], 0, 0); uvo_dirty = false; }
    if ((int)p != cur_pipe) {
        glUseProgram(prog[p]);
        glUniformMatrix4fv(u_vp[p], 1, GL_FALSE, cur_vp.m); vp_dirty = false;
        glUniform4f(u_fog[p], cur_env.fog_rgb[0], cur_env.fog_rgb[1], cur_env.fog_rgb[2], 1.0f);
        set_fogr(p);
        if (p == AK_PIPE_HUD) glDisable(GL_DEPTH_TEST); else glEnable(GL_DEPTH_TEST);
        glUniform4fv(u_tint[p], 1, tint); tint_dirty = false; set_sh(p); light_dirty = false; glUniform4f(u_uvo[p], uvo[0], uvo[1], 0, 0); uvo_dirty = false;
        if (p == AK_PIPE_OVERLAY || p == AK_PIPE_BLEND) { glEnable(GL_POLYGON_OFFSET_FILL); glPolygonOffset(-1.0f, -2.0f); }
        else glDisable(GL_POLYGON_OFFSET_FILL);
        if (p == AK_PIPE_ADD) { glEnable(GL_BLEND); glBlendFunc(GL_SRC_ALPHA, GL_ONE); glDepthMask(GL_FALSE); }
        else if (p == AK_PIPE_BEAM) { glEnable(GL_BLEND); glBlendFunc(GL_ONE, GL_ONE_MINUS_SRC_ALPHA); glDepthMask(GL_FALSE); }
        else if (p >= AK_PIPE_LAYER) { glEnable(GL_BLEND); glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); glDepthMask(GL_FALSE); }
        else { glDisable(GL_BLEND); glDepthMask(GL_TRUE); }
        cur_pipe = (int)p;
    }
    {   int want = cull_mode && cull_on && (p == AK_PIPE_OPAQUE || p == AK_PIPE_OVERLAY);
        if (want != cull_state) { if (want) glEnable(GL_CULL_FACE); else glDisable(GL_CULL_FACE); cull_state = want; } }
    if (vb->id != cur_vb || (int)p != attr_pipe) {
        glBindBuffer(GL_ARRAY_BUFFER, vb->id);
        attrib(a_pos[p], 3, GL_FLOAT, GL_FALSE, offsetof(ak_vtx, pos)); attrib(a_uv[p], 2, GL_FLOAT, GL_FALSE, offsetof(ak_vtx, uv));
        attrib(a_nrm[p], 4, GL_BYTE, GL_TRUE, offsetof(ak_vtx, nrm)); attrib(a_col[p], 4, GL_UNSIGNED_BYTE, GL_TRUE, offsetof(ak_vtx, col));
        cur_vb = vb->id; attr_pipe = (int)p;
    }
    if (ib->id != cur_ib) { glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ib->id); cur_ib = ib->id; }
    GLuint tid = t ? t->id : white_tex;
    if (tid != cur_tex) { glBindTexture(GL_TEXTURE_2D, tid); cur_tex = tid; }
    glDrawElements(GL_TRIANGLES, (GLsizei)count, GL_UNSIGNED_INT, (void *)(uintptr_t)(first * 4u));
    st.draws++; st.tris += count / 3;
}

void ak_gfx_text(f32 x, f32 y, u32 c, const char *s)
{
    for (; *s && ui_n < UI_MAXQ; s++, x += AK_FONT_CW) {
        int ch = (u8)*s; if (ch < 32 || ch > 126) ch = '?';
        if (ch == ' ') continue;
        int i = ch - 32; f32 u0 = (f32)((i % 16) * AK_FONT_CW) / AK_FONT_W, v0 = (f32)((i / 16) * AK_FONT_CH) / AK_FONT_H_PX;
        f32 u1 = u0 + (f32)AK_FONT_CW / AK_FONT_W, v1 = v0 + (f32)AK_FONT_CH / AK_FONT_H_PX;
        uiv *v = ui_v + ui_n * 4; ui_n++;
        v[0] = (uiv){ x, y, u0, v0, c }; v[1] = (uiv){ x + AK_FONT_CW, y, u1, v0, c }; v[2] = (uiv){ x, y + AK_FONT_CH, u0, v1, c }; v[3] = (uiv){ x + AK_FONT_CW, y + AK_FONT_CH, u1, v1, c };
    }
}

void ak_gfx_end(ak_gfx_stats *out)
{
    if (ui_n) {
        glDisable(GL_DEPTH_TEST); glDisable(GL_CULL_FACE); cull_state = 0; glEnable(GL_BLEND); glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glUseProgram(ui_prog); glUniform4f(ui_scale, 2.0f / W, 2.0f / H, 0, 0);
        glBindBuffer(GL_ARRAY_BUFFER, ui_vbo); glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ui_ibo);
        glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(uiv) * 4 * (size_t)ui_n, ui_v);
        if (ua_pos >= 0) { glEnableVertexAttribArray((GLuint)ua_pos); glVertexAttribPointer((GLuint)ua_pos, 2, GL_FLOAT, GL_FALSE, sizeof(uiv), (void *)0); }
        if (ua_uv >= 0) { glEnableVertexAttribArray((GLuint)ua_uv); glVertexAttribPointer((GLuint)ua_uv, 2, GL_FLOAT, GL_FALSE, sizeof(uiv), (void *)8); }
        if (ua_col >= 0) { glEnableVertexAttribArray((GLuint)ua_col); glVertexAttribPointer((GLuint)ua_col, 4, GL_UNSIGNED_BYTE, GL_TRUE, sizeof(uiv), (void *)16); }
        glBindTexture(GL_TEXTURE_2D, font_tex);
        glDrawElements(GL_TRIANGLES, ui_n * 6, GL_UNSIGNED_SHORT, 0);
        ui_n = 0; cur_tex = 0; cur_vb = cur_ib = 0; cur_pipe = -1; attr_pipe = -1;
    }
    st.cpu_submit_ms = (ak_plat_time_us() - t_begin) / 1000.0f;
    u64 t0 = ak_plat_time_us();
    ps4glSwapBuffers();
    st.gpu_wait_ms = (ak_plat_time_us() - t0) / 1000.0f;
    if (out) *out = st;
}

bool ak_gfx_screenshot(const char *path) { (void)path; return false; }
void ak_gfx_set_projection(const ak_m4 *proj) { (void)proj; }   /* (the full transform is enough here) */
