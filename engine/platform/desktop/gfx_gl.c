/* Desktop renderer, OpenGL 3.3 core (SDL2 window).  The development back end: it runs anywhere, including headless Linux
 * (Xvfb + llvmpipe) for image checks.  The shipping PC / Deck renderer is Vulkan with Frostbite PBR (stage 4). */
#define GL_GLEXT_PROTOTYPES 1
#include "../../render/ak_gfx.h"
#include "../../render/ak_font.h"
#include "../plat.h"
#include "../../core/ak_settings.h"
#include <SDL2/SDL.h>
#include <GL/gl.h>
#include <GL/glext.h>
#include <stdio.h>
#include <stdlib.h>

struct ak_gfx_buf { GLuint id; GLenum target; };
struct ak_gfx_tex { GLuint id; };

static SDL_Window *win; static SDL_GLContext glc;
static int W, H; static char name[160];
static GLuint prog[AK_PIPE_COUNT], ui_prog, vao, ui_vao, ui_vbo, font_tex, white_tex;
static GLint u_vp[AK_PIPE_COUNT], u_fog[AK_PIPE_COUNT], u_fogr[AK_PIPE_COUNT], ui_scale;
static int cur_pipe = -1; static GLuint cur_vb, cur_ib, cur_tex;
static ak_gfx_stats st; static u64 t_begin;
static u8 *shot_px;

#define UI_MAXQ 4096
typedef struct { f32 x, y, u, v; u32 c; } uiv;
static uiv *ui_v; static int ui_n;

static const char *vs_src =
    "#version 330 core\n"
    "layout(location=0) in vec3 aPos; layout(location=1) in vec2 aUv; layout(location=2) in vec4 aNrm; layout(location=3) in vec4 aCol;\n"
    "uniform mat4 uVP; uniform vec3 uFogRange; out vec2 vUv; out vec4 vCol; out float vFog;\n"
    "void main(){ vec4 p = uVP * vec4(aPos, 1.0); gl_Position = p; vUv = aUv; vCol = vec4(aCol.rgb * uFogRange.z, aCol.a);\n"
    "  vFog = uFogRange.y > uFogRange.x ? clamp((p.w - uFogRange.x) / (uFogRange.y - uFogRange.x), 0.0, 1.0) : 0.0; }\n";
static const char *fs_opaque =
    "#version 330 core\nin vec2 vUv; in vec4 vCol; in float vFog; uniform sampler2D uTex; uniform vec3 uFog; out vec4 o;\n"
    "void main(){ vec4 t = texture(uTex, vUv); o = vec4(mix(t.rgb * vCol.rgb, uFog, vFog), 1.0); }\n";
static const char *fs_cutout =
    "#version 330 core\nin vec2 vUv; in vec4 vCol; in float vFog; uniform sampler2D uTex; uniform vec3 uFog; out vec4 o;\n"
    "void main(){ vec4 t = texture(uTex, vUv); if (t.a < 0.5) discard; o = vec4(mix(t.rgb * vCol.rgb, uFog, vFog), 1.0); }\n";
static const char *fs_alpha =      /* layer, blend, add: the blend state differs, the shader does not */
    "#version 330 core\nin vec2 vUv; in vec4 vCol; in float vFog; uniform sampler2D uTex; uniform vec3 uFog; out vec4 o;\n"
    "void main(){ vec4 t = texture(uTex, vUv); o = vec4(mix(t.rgb * vCol.rgb, uFog, vFog), t.a * vCol.a); }\n";
static const char *fs_src[AK_PIPE_COUNT];
static const char *ui_vs =
    "#version 330 core\nlayout(location=0) in vec2 aPos; layout(location=1) in vec2 aUv; layout(location=2) in vec4 aCol; uniform vec2 uScale;\n"
    "out vec2 vUv; out vec4 vCol; void main(){ gl_Position = vec4(aPos.x * uScale.x - 1.0, 1.0 - aPos.y * uScale.y, 0.0, 1.0); vUv = aUv; vCol = aCol; }\n";
static const char *ui_fs =
    "#version 330 core\nin vec2 vUv; in vec4 vCol; uniform sampler2D uTex; out vec4 o; void main(){ o = vec4(vCol.rgb, vCol.a * texture(uTex, vUv).r); }\n";

static GLuint compile(GLenum type, const char *src)
{
    GLuint s = glCreateShader(type); glShaderSource(s, 1, &src, NULL); glCompileShader(s);
    GLint ok; glGetShaderiv(s, GL_COMPILE_STATUS, &ok);
    if (!ok) { char log[1024]; glGetShaderInfoLog(s, sizeof log, NULL, log); AK_ERROR("gl", "shader: %s", log); }
    return s;
}
static GLuint link(const char *vs, const char *fs)
{
    GLuint p = glCreateProgram(), v = compile(GL_VERTEX_SHADER, vs), f = compile(GL_FRAGMENT_SHADER, fs);
    glAttachShader(p, v); glAttachShader(p, f); glLinkProgram(p);
    GLint ok; glGetProgramiv(p, GL_LINK_STATUS, &ok);
    if (!ok) { char log[1024]; glGetProgramInfoLog(p, sizeof log, NULL, log); AK_ERROR("gl", "link: %s", log); }
    glDeleteShader(v); glDeleteShader(f);
    return p;
}

bool ak_gfx_init(const ak_gfx_config *c)
{
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3); SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE); SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    win = SDL_CreateWindow(c->title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, c->width, c->height, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
    if (!win) { AK_ERROR("gl", "window: %s", SDL_GetError()); return false; }
    glc = SDL_GL_CreateContext(win);
    if (!glc) { AK_ERROR("gl", "context: %s", SDL_GetError()); return false; }
    SDL_GL_SetSwapInterval(c->vsync ? 1 : 0);
    snprintf(name, sizeof name, "OpenGL %s (%s)", (const char *)glGetString(GL_VERSION), (const char *)glGetString(GL_RENDERER));
    fs_src[AK_PIPE_OPAQUE] = fs_opaque; fs_src[AK_PIPE_CUTOUT] = fs_src[AK_PIPE_OVERLAY] = fs_cutout; fs_src[AK_PIPE_LAYER] = fs_src[AK_PIPE_BLEND] = fs_src[AK_PIPE_ADD] = fs_alpha;
    for (int i = 0; i < AK_PIPE_COUNT; i++) {
        prog[i] = link(vs_src, fs_src[i]);
        u_vp[i] = glGetUniformLocation(prog[i], "uVP"); u_fog[i] = glGetUniformLocation(prog[i], "uFog"); u_fogr[i] = glGetUniformLocation(prog[i], "uFogRange");
    }
    ui_prog = link(ui_vs, ui_fs); ui_scale = glGetUniformLocation(ui_prog, "uScale");
    glGenVertexArrays(1, &vao); glGenVertexArrays(1, &ui_vao); glGenBuffers(1, &ui_vbo);
    glBindVertexArray(ui_vao); glBindBuffer(GL_ARRAY_BUFFER, ui_vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(uiv) * 4 * UI_MAXQ, NULL, GL_STREAM_DRAW);
    glEnableVertexAttribArray(0); glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(uiv), (void *)0);
    glEnableVertexAttribArray(1); glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(uiv), (void *)8);
    glEnableVertexAttribArray(2); glVertexAttribPointer(2, 4, GL_UNSIGNED_BYTE, GL_TRUE, sizeof(uiv), (void *)16);
    GLuint ibo; glGenBuffers(1, &ibo); glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
    u16 *q = (u16 *)malloc(UI_MAXQ * 6 * 2);
    for (int i = 0; i < UI_MAXQ; i++) { u16 b = (u16)(i * 4); u16 *p = q + i * 6; p[0] = b; p[1] = b + 1; p[2] = b + 2; p[3] = b + 2; p[4] = b + 1; p[5] = b + 3; }
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, UI_MAXQ * 6 * 2, q, GL_STATIC_DRAW); free(q);
    glGenTextures(1, &font_tex); glBindTexture(GL_TEXTURE_2D, font_tex);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_R8, AK_FONT_W, AK_FONT_H_PX, 0, GL_RED, GL_UNSIGNED_BYTE, ak_font_alpha);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    u32 wpx = 0xFFFFFFFFu; glGenTextures(1, &white_tex); glBindTexture(GL_TEXTURE_2D, white_tex);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, 1, 1, 0, GL_RGBA, GL_UNSIGNED_BYTE, &wpx);
    ui_v = (uiv *)malloc(sizeof(uiv) * 4 * UI_MAXQ);
    SDL_GL_GetDrawableSize(win, &W, &H);
    return true;
}

void ak_gfx_shutdown(void) { if (glc) SDL_GL_DeleteContext(glc); if (win) SDL_DestroyWindow(win); free(ui_v); free(shot_px); }
void ak_gfx_size(int *w, int *h) { *w = W; *h = H; }
const char *ak_gfx_name(void) { return name; }

static ak_gfx_buf *make_buf(GLenum target, const void *d, size_t n)
{
    ak_gfx_buf *b = (ak_gfx_buf *)calloc(1, sizeof *b);
    b->target = target; glGenBuffers(1, &b->id); glBindVertexArray(0);
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
        glTexImage2D(GL_TEXTURE_2D, l, GL_RGBA8, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, px);
    }
    free(px);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAX_LEVEL, t->levels - 1);
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
    SDL_GL_GetDrawableSize(win, &W, &H);
    glViewport(0, 0, W, H);
    glClearColor((clear & 255) / 255.0f, ((clear >> 8) & 255) / 255.0f, ((clear >> 16) & 255) / 255.0f, 1.0f);
    glDepthMask(GL_TRUE); glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST); glDepthFunc(GL_LEQUAL);
    {   static int cull = -1; if (cull < 0) cull = ak_setting_int("AK_CULL", 0);
        cull_mode = cull; glCullFace(cull == 2 ? GL_FRONT : GL_BACK); glFrontFace(GL_CCW); cull_on = true; cull_state = -1; }
    cur_vp = frame_vp = *vp; cur_env = *env; cur_pipe = -1; vp_dirty = false; cur_vb = cur_ib = cur_tex = 0;
    glBindVertexArray(vao);
}

void ak_gfx_set_cull(bool on) { cull_on = on; }
void ak_gfx_set_transform(const ak_m4 *mvp)
{
    cur_vp = mvp ? *mvp : frame_vp; vp_dirty = true;
}

void ak_gfx_draw(ak_pipe p, ak_gfx_tex *t, ak_gfx_buf *vb, ak_gfx_buf *ib, u32 first, u32 count)
{
    if (vp_dirty && (int)p == cur_pipe) { glUniformMatrix4fv(u_vp[p], 1, GL_FALSE, cur_vp.m); vp_dirty = false; }
    if ((int)p != cur_pipe) {
        glUseProgram(prog[p]);
        glUniformMatrix4fv(u_vp[p], 1, GL_FALSE, cur_vp.m); vp_dirty = false;
        glUniform3fv(u_fog[p], 1, cur_env.fog_rgb); glUniform3f(u_fogr[p], cur_env.fog_start, cur_env.fog_end, cur_env.colour_scale);
        if (p == AK_PIPE_OVERLAY || p == AK_PIPE_BLEND) { glEnable(GL_POLYGON_OFFSET_FILL); glPolygonOffset(-1.0f, -2.0f); }
        else glDisable(GL_POLYGON_OFFSET_FILL);
        if (p == AK_PIPE_ADD) { glEnable(GL_BLEND); glBlendFunc(GL_SRC_ALPHA, GL_ONE); glDepthMask(GL_FALSE); }
        else if (p >= AK_PIPE_LAYER) { glEnable(GL_BLEND); glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); glDepthMask(GL_FALSE); }
        else { glDisable(GL_BLEND); glDepthMask(GL_TRUE); }
        cur_pipe = (int)p;
    }
    {   int want = cull_mode && cull_on && (p == AK_PIPE_OPAQUE || p == AK_PIPE_OVERLAY);
        if (want != cull_state) { if (want) glEnable(GL_CULL_FACE); else glDisable(GL_CULL_FACE); cull_state = want; } }
    if (vb->id != cur_vb) {
        glBindBuffer(GL_ARRAY_BUFFER, vb->id);
        glEnableVertexAttribArray(0); glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(ak_vtx), (void *)offsetof(ak_vtx, pos));
        glEnableVertexAttribArray(1); glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(ak_vtx), (void *)offsetof(ak_vtx, uv));
        glEnableVertexAttribArray(2); glVertexAttribPointer(2, 4, GL_BYTE, GL_TRUE, sizeof(ak_vtx), (void *)offsetof(ak_vtx, nrm));
        glEnableVertexAttribArray(3); glVertexAttribPointer(3, 4, GL_UNSIGNED_BYTE, GL_TRUE, sizeof(ak_vtx), (void *)offsetof(ak_vtx, col));
        cur_vb = vb->id;
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
        glUseProgram(ui_prog); glUniform2f(ui_scale, 2.0f / W, 2.0f / H);
        glBindVertexArray(ui_vao); glBindBuffer(GL_ARRAY_BUFFER, ui_vbo);
        glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(uiv) * 4 * (size_t)ui_n, ui_v);
        glBindTexture(GL_TEXTURE_2D, font_tex);
        glDrawElements(GL_TRIANGLES, ui_n * 6, GL_UNSIGNED_SHORT, 0);
        ui_n = 0; cur_tex = 0;
    }
    st.cpu_submit_ms = (ak_plat_time_us() - t_begin) / 1000.0f;
    if (getenv("AK_SCREENSHOT")) {              /* keep the frame for ak_gfx_screenshot */
        free(shot_px); shot_px = (u8 *)malloc((size_t)W * H * 3);
        glPixelStorei(GL_PACK_ALIGNMENT, 1); glReadPixels(0, 0, W, H, GL_RGB, GL_UNSIGNED_BYTE, shot_px);
    }
    u64 t0 = ak_plat_time_us();
    SDL_GL_SwapWindow(win);
    st.gpu_wait_ms = (ak_plat_time_us() - t0) / 1000.0f;
    if (out) *out = st;
}

bool ak_gfx_screenshot(const char *path)
{
    if (!shot_px) return false;
    FILE *f = fopen(path, "wb");
    if (!f) return false;
    fprintf(f, "P6\n%d %d\n255\n", W, H);
    for (int y = H - 1; y >= 0; y--) fwrite(shot_px + (size_t)y * W * 3, 3, (size_t)W, f);
    fclose(f);
    return true;
}
