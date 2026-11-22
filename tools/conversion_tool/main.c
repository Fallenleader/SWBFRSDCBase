/* SWBFRS Conversion Tool (Windows / Linux PC): prepares the game's media for a device on the PC, where it takes minutes, instead of
 * at the device's first start.  The game files are the user's own (their UMD image or its extracted folder); nothing of the game
 * ships with the tool.
 *
 * Targets so far:
 *   3ds   all audio (music, voices, effects) -> DSP-ADPCM .adp (the 3DS sound chip's own format), exactly as the 3DS build's own first
 *         start would write it (the same converter, platform/common/convert.c): copy the output folder to sdmc:/3ds/SWBFRS/converted
 *         and the 3DS only checks it (seconds).
 *   gc    the GameCube's own formats: all audio -> DSP-ADPCM .adp (its DSP's format, as the 3DS), and the movies (.PMF) -> THP (the
 *         GameCube's movie format, tools/conversion_tool/thp.c: Motion JPEG 512x384, letterboxed to 4:3, DSP-ADPCM sound at 32 kHz).
 *         The movies need FFmpeg's command-line tool (ffmpeg.exe next to the tool, or on PATH).  Writes "converted" next to the
 *         tool: the GameCube build folder, where make_gcm.py packs it and leaves out the originals it replaces.
 *
 * usage: SWBFRS_ConversionTool [3ds | gc] [--video-kbps N] [--ffmpeg path] [game.iso | game folder] [output folder]
 *   With no arguments: target 3ds, unless the tool sits next to aurek.dol (the GameCube build folder): then gc.  Looks next to the
 *   tool for game.iso, else a GAME folder (holding PSP_GAME), else PSP_GAME itself; writes converted_3ds (3ds) or converted (gc). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#ifdef _WIN32
#include <windows.h>
static void sleep_ms(int ms){ Sleep(ms); }
#define popen _popen
#define pclose _pclose
#else
#include <unistd.h>
static void sleep_ms(int ms){ usleep(ms * 1000); }
#endif
#include "convert.h"
int vfs_iso_mount(const char *path);
extern int rs_conv_thp; extern const char *rs_thp_ffmpeg; extern int rs_thp_video_kbps;

static int exists(const char *p, int dir){ struct stat s; return stat(p, &s) == 0 && (!dir || (s.st_mode & S_IFDIR)); }
static void pause_exit(int code, int interactive){ if (interactive) { printf("\nPress Enter to close."); fflush(stdout); getchar(); } exit(code); }
static void exe_dir(char *o, size_t n, const char *argv0){
#ifdef _WIN32
    GetModuleFileNameA(NULL, o, (DWORD)n);
#else
    snprintf(o, n, "%s", argv0);
#endif
    char *s = strrchr(o, '/'), *b = strrchr(o, '\\'); if (b > s) s = b; if (s) *s = 0; else snprintf(o, n, "."); }

int main(int argc, char **argv){
    int a = 1, interactive = argc <= 1; const char *target = 0; static char ffpath[1100] = "";
    char here[1024]; exe_dir(here, sizeof here, argv[0]);
    for (; a < argc; a++) {
        if (!strcmp(argv[a], "3ds") || !strcmp(argv[a], "3DS")) target = "3ds";
        else if (!strcmp(argv[a], "gc") || !strcmp(argv[a], "GC") || !strcmp(argv[a], "gamecube")) target = "gc";
        else if (!strcmp(argv[a], "--video-kbps") && a + 1 < argc) rs_thp_video_kbps = atoi(argv[++a]);
        else if (!strcmp(argv[a], "--ffmpeg") && a + 1 < argc) snprintf(ffpath, sizeof ffpath, "%s", argv[++a]);
        else if (!strcmp(argv[a], "-h") || !strcmp(argv[a], "--help")) { printf("usage: %s [3ds | gc] [--video-kbps N] [--ffmpeg path] [game.iso | game folder] [output folder]\n", argv[0]); return 0; }
        else break; }
    if (!target) { char d[1200]; snprintf(d, sizeof d, "%s/aurek.dol", here); target = exists(d, 0) ? "gc" : "3ds"; }
    int gc = !strcmp(target, "gc");
    char src[1100], out[1100];
    if (a < argc) snprintf(src, sizeof src, "%s", argv[a++]);
    else { snprintf(src, sizeof src, "%s/game.iso", here);
        if (!exists(src, 0)) snprintf(src, sizeof src, "%s/GAME", here);
        if (!exists(src, 1)) { char p[1200]; snprintf(p, sizeof p, "%s/PSP_GAME", here); if (exists(p, 1)) snprintf(src, sizeof src, "%s", here); } }
    if (a < argc) snprintf(out, sizeof out, "%s", argv[a++]); else snprintf(out, sizeof out, gc ? "%s/converted" : "%s/converted_%s", here, target);
    if (gc) {
        rs_conv_thp = 1; if (rs_thp_video_kbps < 300) rs_thp_video_kbps = 300;
        if (!ffpath[0]) {
#ifdef _WIN32
            snprintf(ffpath, sizeof ffpath, "%s\\ffmpeg.exe", here);
#else
            snprintf(ffpath, sizeof ffpath, "%s/ffmpeg", here);
#endif
            if (!exists(ffpath, 0)) snprintf(ffpath, sizeof ffpath, "ffmpeg"); }
        rs_thp_ffmpeg = ffpath;
        /* the movies need FFmpeg's MJPEG encoder: checked before anything starts */
        char cmd[1400];
#ifdef _WIN32
        snprintf(cmd, sizeof cmd, "\"\"%s\" -hide_banner -h encoder=mjpeg 2>NUL\"", ffpath);
#else
        snprintf(cmd, sizeof cmd, "\"%s\" -hide_banner -h encoder=mjpeg 2>/dev/null", ffpath);
#endif
        FILE *p = popen(cmd, "r"); char line[256]; int ok = 0; if (p) { while (fgets(line, sizeof line, p)) if (strstr(line, "MJPEG")) ok = 1; pclose(p); }
        if (!ok) { printf("FFmpeg was not found (%s).\nThe movies need it: put ffmpeg.exe next to the tool (https://ffmpeg.org/download.html),\nor give its path with --ffmpeg.\n", ffpath); pause_exit(1, interactive); }
        printf("  FFmpeg: %s\n  movies: THP, 512x384 (4:3, letterboxed), Motion JPEG %d kbit/s, DSP-ADPCM sound 32 kHz\n", ffpath, rs_thp_video_kbps); }
    for (char *p = src; *p; p++) if (*p == '\\') *p = '/';
    for (char *p = out; *p; p++) if (*p == '\\') *p = '/';
    printf("SWBFRS Conversion Tool - target: %s\n\n  game:   %s\n  output: %s\n\n", target, src, out);
    const char *root = src; size_t l = strlen(src);
    if (l > 4 && (!strcmp(src + l - 4, ".iso") || !strcmp(src + l - 4, ".ISO"))) {
        if (vfs_iso_mount(src)) { printf("Cannot read %s as a UMD image.\n", src); pause_exit(1, interactive); }
        root = "iso:"; }
    else { char p[1200]; snprintf(p, sizeof p, "%s/PSP_GAME", src);
        if (!exists(p, 1)) { printf("No game found: put game.iso (your UMD image) or the extracted GAME folder (holding PSP_GAME) next to the tool,\nor give its path.\n"); pause_exit(1, interactive); } }
    int workers = 4;
#ifdef _WIN32
    { SYSTEM_INFO si; GetSystemInfo(&si); workers = (int)si.dwNumberOfProcessors; }
#else
    { long n = sysconf(_SC_NPROCESSORS_ONLN); if (n > 0) workers = (int)n; }
#endif
    if (workers > 4) workers = 4; if (workers < 1) workers = 1;
    if (rs_convert_start(root, out, workers, 0)) { printf("Could not start the conversion.\n"); pause_exit(1, interactive); }
    int last = -1;
    for (;;) {
        rs_conv_status_t s; rs_convert_status(&s);
        if (s.phase == RS_CONV_DONE) { printf("\rDone: %d files ready (%d converted now).                                        \n", s.files_total, s.files_done); break; }
        if (s.phase == RS_CONV_FAILED) { printf("\nFailed: %s\n", s.message); pause_exit(1, interactive); }
        int pct = s.work_total ? (int)(s.work_done * 100 / s.work_total) : 0;
        if (s.phase == RS_CONV_CONVERTING && pct != last) { last = pct; printf("\rConverting: %3d%%  (%d of %d files)  %-40.40s", pct, s.files_done, s.files_todo, s.current[0]); fflush(stdout); }
        sleep_ms(200); }
    if (gc) { printf("\nThe folder\n  %s\nis ready. Run make_gcm.py in the GameCube build folder: it packs the converted files\nand leaves out the originals they replace.\n", out); pause_exit(0, interactive); }
    printf("\nCopy the folder\n  %s\nto the 3DS SD card as\n  sdmc:/3ds/SWBFRS/converted\n(the game's own first-start conversion is then skipped).\n", out);
    pause_exit(0, interactive); return 0; }
