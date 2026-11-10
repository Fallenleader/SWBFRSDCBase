/* SWBFRS Conversion Tool (Windows / Linux PC): prepares the game's media for a device on the PC, where it takes minutes, instead of
 * at the device's first start.  The game files are the user's own (their UMD image or its extracted folder); nothing of the game
 * ships with the tool.
 *
 * Targets so far:
 *   3ds   all audio (music, voices, effects) -> DSP-ADPCM .adp (the 3DS sound chip's own format), exactly as the 3DS build's own first
 *         start would write it (the same converter, platform/common/convert.c): copy the output folder to sdmc:/3ds/SWBFRS/converted
 *         and the 3DS only checks it (seconds).
 *
 * usage: SWBFRS_ConversionTool [3ds] [game.iso | game folder] [output folder]
 *   With no arguments: looks next to the tool for game.iso, else a GAME folder (holding PSP_GAME), and writes converted_3ds. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#ifdef _WIN32
#include <windows.h>
static void sleep_ms(int ms){ Sleep(ms); }
#else
#include <unistd.h>
static void sleep_ms(int ms){ usleep(ms * 1000); }
#endif
#include "convert.h"
int vfs_iso_mount(const char *path);

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
    int a = 1, interactive = argc <= 1; const char *target = "3ds";
    if (a < argc && (!strcmp(argv[a], "3ds") || !strcmp(argv[a], "3DS"))) { target = "3ds"; a++; }
    else if (a < argc && (!strcmp(argv[a], "-h") || !strcmp(argv[a], "--help"))) { printf("usage: %s [3ds] [game.iso | game folder] [output folder]\n", argv[0]); return 0; }
    char here[1024]; exe_dir(here, sizeof here, argv[0]);
    char src[1100], out[1100];
    if (a < argc) snprintf(src, sizeof src, "%s", argv[a++]);
    else { snprintf(src, sizeof src, "%s/game.iso", here); if (!exists(src, 0)) snprintf(src, sizeof src, "%s/GAME", here); }
    if (a < argc) snprintf(out, sizeof out, "%s", argv[a++]); else snprintf(out, sizeof out, "%s/converted_%s", here, target);
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
    printf("\nCopy the folder\n  %s\nto the 3DS SD card as\n  sdmc:/3ds/SWBFRS/converted\n(the game's own first-start conversion is then skipped).\n", out);
    pause_exit(0, interactive); return 0; }
