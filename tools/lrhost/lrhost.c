/* A minimal libretro front end to run a 3DS homebrew (.3dsx) in Azahar's libretro core, headless:
 *   lrhost <core.so> <game.3dsx> <save dir> <frames> [script] [shot frames, comma list] [out prefix] [key=value core options...]
 * script: "n:lx,ly,keys;..." (keys: a b x y l r s=start e=select u d w=left f=right, z=zl c=zr), lx/ly -1..1 (+y up).
 * Screens are written as PPM at the listed frames. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <dlfcn.h>
#include "libretro.h"

static const char *save_dir; static int pixfmt = RETRO_PIXEL_FORMAT_0RGB1555;
static char *opts[64][2]; static int nopt;
static int cur_frame; static float lx, ly; static char keys[32];
static const void *last_fb; static unsigned last_w, last_h; static size_t last_pitch;

static void logf_(enum retro_log_level l, const char *fmt, ...)
{
    if (l < RETRO_LOG_INFO) return;
    va_list a; va_start(a, fmt); fprintf(stderr, "[core] "); vfprintf(stderr, fmt, a); va_end(a);
}
static bool env(unsigned cmd, void *data)
{
    switch (cmd) {
    case RETRO_ENVIRONMENT_GET_LOG_INTERFACE: ((struct retro_log_callback *)data)->log = logf_; return true;
    case RETRO_ENVIRONMENT_GET_SAVE_DIRECTORY: case RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY: *(const char **)data = save_dir; return true;
    case RETRO_ENVIRONMENT_SET_PIXEL_FORMAT: pixfmt = *(const enum retro_pixel_format *)data; return true;
    case RETRO_ENVIRONMENT_GET_VARIABLE: {
        struct retro_variable *v = (struct retro_variable *)data; v->value = NULL;
        for (int i = 0; i < nopt; i++) if (!strcmp(opts[i][0], v->key)) { v->value = opts[i][1]; return true; }
        return false; }
    case RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE: *(bool *)data = false; return true;
    case RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION: *(unsigned *)data = 0; return true;
    case RETRO_ENVIRONMENT_SET_VARIABLES: case RETRO_ENVIRONMENT_SET_INPUT_DESCRIPTORS: case RETRO_ENVIRONMENT_SET_CONTROLLER_INFO:
    case RETRO_ENVIRONMENT_SET_MEMORY_MAPS: case RETRO_ENVIRONMENT_SET_GEOMETRY: case RETRO_ENVIRONMENT_SET_SERIALIZATION_QUIRKS:
        return true;
    case RETRO_ENVIRONMENT_SET_MESSAGE: fprintf(stderr, "[msg] %s\n", ((const struct retro_message *)data)->msg); return true;
    case RETRO_ENVIRONMENT_GET_JIT_CAPABLE: *(bool *)data = true; return true;
    default: return false;
    }
}
static void video(const void *d, unsigned w, unsigned h, size_t pitch) { if (d) { last_fb = d; last_w = w; last_h = h; last_pitch = pitch; } }
static void shot(const char *path)
{
    if (!last_fb) return;
    FILE *f = fopen(path, "wb"); if (!f) return;
    fprintf(f, "P6\n%u %u\n255\n", last_w, last_h);
    for (unsigned y = 0; y < last_h; y++) for (unsigned x = 0; x < last_w; x++) {
        const unsigned char *row = (const unsigned char *)last_fb + y * last_pitch; unsigned char p[3];
        if (pixfmt == RETRO_PIXEL_FORMAT_XRGB8888) { unsigned v = ((const unsigned *)row)[x]; p[0] = v >> 16; p[1] = v >> 8; p[2] = v; }
        else if (pixfmt == RETRO_PIXEL_FORMAT_RGB565) { unsigned v = ((const unsigned short *)row)[x]; p[0] = (v >> 11) << 3; p[1] = ((v >> 5) & 63) << 2; p[2] = (v & 31) << 3; }
        else { unsigned v = ((const unsigned short *)row)[x]; p[0] = ((v >> 10) & 31) << 3; p[1] = ((v >> 5) & 31) << 3; p[2] = (v & 31) << 3; }
        fwrite(p, 1, 3, f);
    }
    fclose(f);
}
static void audio1(int16_t l, int16_t r) { (void)l; (void)r; }
static size_t audiob(const int16_t *d, size_t n) { (void)d; return n; }
static void poll_(void) {}
static int16_t state(unsigned port, unsigned dev, unsigned idx, unsigned id)
{
    if (port) return 0;
    if (dev == RETRO_DEVICE_ANALOG && idx == RETRO_DEVICE_INDEX_ANALOG_LEFT) return (int16_t)((id == RETRO_DEVICE_ID_ANALOG_X ? lx : -ly) * 32767);
    if (dev != RETRO_DEVICE_JOYPAD) return 0;
    static const struct { char k; unsigned id; } m[] = { { 'a', RETRO_DEVICE_ID_JOYPAD_A }, { 'b', RETRO_DEVICE_ID_JOYPAD_B }, { 'x', RETRO_DEVICE_ID_JOYPAD_X },
        { 'y', RETRO_DEVICE_ID_JOYPAD_Y }, { 'l', RETRO_DEVICE_ID_JOYPAD_L }, { 'r', RETRO_DEVICE_ID_JOYPAD_R }, { 's', RETRO_DEVICE_ID_JOYPAD_START },
        { 'e', RETRO_DEVICE_ID_JOYPAD_SELECT }, { 'u', RETRO_DEVICE_ID_JOYPAD_UP }, { 'd', RETRO_DEVICE_ID_JOYPAD_DOWN }, { 'w', RETRO_DEVICE_ID_JOYPAD_LEFT },
        { 'f', RETRO_DEVICE_ID_JOYPAD_RIGHT }, { 'z', RETRO_DEVICE_ID_JOYPAD_L2 }, { 'c', RETRO_DEVICE_ID_JOYPAD_R2 } };
    if (id == RETRO_DEVICE_ID_JOYPAD_MASK) { int16_t r = 0; for (size_t i = 0; i < sizeof m / sizeof m[0]; i++) if (strchr(keys, m[i].k)) r |= 1 << m[i].id; return r; }
    for (size_t i = 0; i < sizeof m / sizeof m[0]; i++) if (m[i].id == id && strchr(keys, m[i].k)) return 1;
    return 0;
}

int main(int argc, char **argv)
{
    if (argc < 5) { fprintf(stderr, "usage\n"); return 1; }
    save_dir = argv[3]; int frames = atoi(argv[4]); const char *script = argc > 5 ? argv[5] : ""; const char *shots = argc > 6 ? argv[6] : ""; const char *pre = argc > 7 ? argv[7] : "/tmp/lr";
    for (int i = 8; i < argc && nopt < 64; i++) { char *e = strchr(argv[i], '='); if (!e) continue; *e = 0; opts[nopt][0] = argv[i]; opts[nopt][1] = e + 1; nopt++; }
    void *h = dlopen(argv[1], RTLD_NOW); if (!h) { fprintf(stderr, "%s\n", dlerror()); return 1; }
#define SYM(n) typeof(&n) p_##n = (typeof(&n))dlsym(h, #n)
    SYM(retro_set_environment); SYM(retro_set_video_refresh); SYM(retro_set_audio_sample); SYM(retro_set_audio_sample_batch);
    SYM(retro_set_input_poll); SYM(retro_set_input_state); SYM(retro_init); SYM(retro_load_game); SYM(retro_run);
    p_retro_set_environment(env); p_retro_set_video_refresh(video); p_retro_set_audio_sample(audio1); p_retro_set_audio_sample_batch(audiob);
    p_retro_set_input_poll(poll_); p_retro_set_input_state(state);
    p_retro_init();
    struct retro_game_info gi = { argv[2], NULL, 0, NULL };
    if (!p_retro_load_game(&gi)) { fprintf(stderr, "load failed\n"); return 1; }
    for (cur_frame = 0; cur_frame < frames; cur_frame++) {
        int at = 0; const char *q = script; lx = ly = 0; keys[0] = 0;
        while (*q) {
            int n = 0, used = 0; float a = 0, b = 0; char k[32] = "";
            if (sscanf(q, " %d:%f,%f,%31[a-z]%n", &n, &a, &b, k, &used) < 4) { k[0] = 0; used = 0; sscanf(q, " %d:%f,%f%n", &n, &a, &b, &used); }
            if (!used) break;
            if (cur_frame >= at && cur_frame < at + n) { lx = a; ly = b; strcpy(keys, k); }
            at += n; q += used; while (*q == ';' || *q == ' ') q++;
        }
        p_retro_run();
        char tok[16]; const char *s = shots;
        while (*s) { int n = 0, u = 0; if (sscanf(s, "%d%n", &n, &u) < 1) break; if (n == cur_frame) { char p[512]; snprintf(p, sizeof p, "%s_%05d.ppm", pre, n); shot(p); fprintf(stderr, "[host] shot %s\n", p); }
            s += u; while (*s == ',') s++; (void)tok; }
    }
    return 0;
}
