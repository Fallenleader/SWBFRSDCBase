/* SWBFRS Conversion Tool (Windows / Linux PC): prepares the game's media for a device on the PC, where it takes minutes, instead of
 * at the device's first start.  The game files are the user's own (their UMD image or its extracted folder); nothing of the game
 * ships with the tool.
 *
 * Targets (the same converter as the devices' own first start, platform/common/convert.c):
 *   vita  the Vita's formats: all audio -> 16-bit PCM .wav, the movies (.PMF) -> .mp4 in the Vita movie format (H.264 copied,
 *         AAC-LC 160 kbit/s, moov first): exactly what the Vita port's first start writes ("rsconv 3"), so it only checks it.
 *         Copy the output to ux0:data/SWBFRS/converted (or ux0:data/Aurek/converted).
 *   3ds   all audio -> DSP-ADPCM .adp (the 3DS sound chip's own format).  Copy the output to sdmc:/3ds/SWBFRS/converted.
 *         (The movies stay as they are: nothing on the 3DS plays them yet.)
 *   gc    the GameCube's formats: all audio -> DSP-ADPCM .adp (its DSP's format), the movies -> THP (its movie format,
 *         tools/conversion_tool/thp.c: Motion JPEG 512x384, letterboxed to 4:3, DSP-ADPCM sound at 32 kHz).  make_gcm.py packs it.
 *   The vita and gc movies need FFmpeg's command-line tool (ffmpeg.exe next to the tool, or on PATH, or --ffmpeg).
 *
 * usage: SWBFRS_ConversionTool [vita | 3ds | gc] [--out folder] [--video-kbps N] [--ffmpeg path] [game.iso | game folder] [output folder]
 *   The target: as given; else gc when the tool sits next to aurek.dol (the GameCube build folder); else 3ds.
 *   The game: as given; else game.iso, GAME (holding PSP_GAME) or PSP_GAME next to the tool, in the folder above it, or in a folder
 *   beside it (the GameCube build folder's GAME, say).
 *   The output: --out or the second path; else Converted/<Vita | 3DS | GameCube> next to the tool. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <dirent.h>
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
extern int rs_conv_thp, rs_conv_pcm, rs_conv_mp4_cli; extern const char *rs_thp_ffmpeg; extern int rs_thp_video_kbps;

static int exists(const char *p, int dir){ struct stat s; return stat(p, &s) == 0 && (!dir || (s.st_mode & S_IFDIR)); }
static void pause_exit(int code, int interactive){ if (interactive) { printf("\nPress Enter to close."); fflush(stdout); getchar(); } exit(code); }
static void exe_dir(char *o, size_t n, const char *argv0){
#ifdef _WIN32
    GetModuleFileNameA(NULL, o, (DWORD)n);
#else
    snprintf(o, n, "%s", argv0);
#endif
    char *s = strrchr(o, '/'), *b = strrchr(o, '\\'); if (b > s) s = b; if (s) *s = 0; else snprintf(o, n, "."); }

/* the game in folder d: game.iso, GAME (holding PSP_GAME), or PSP_GAME itself (then d is the game folder) */
static int game_in(const char *d, char *out, size_t n){
    char p[1300];
    snprintf(p, sizeof p, "%s/game.iso", d); if (exists(p, 0)) { snprintf(out, n, "%s", p); return 1; }
    snprintf(p, sizeof p, "%s/GAME/PSP_GAME", d); if (exists(p, 1)) { snprintf(out, n, "%s/GAME", d); return 1; }
    snprintf(p, sizeof p, "%s/PSP_GAME", d); if (exists(p, 1)) { snprintf(out, n, "%s", d); return 1; }
    return 0; }
static int find_game(const char *here, char *out, size_t n){
    if (game_in(here, out, n)) return 1;
    char up[1100]; snprintf(up, sizeof up, "%s/..", here); if (game_in(up, out, n)) return 1;
    DIR *dd = opendir(up); if (!dd) return 0; struct dirent *e; int ok = 0;          /* a folder beside the tool's */
    while (!ok && (e = readdir(dd))) { if (e->d_name[0] == '.') continue; char s[1300]; snprintf(s, sizeof s, "%s/%s", up, e->d_name); if (exists(s, 1)) ok = game_in(s, out, n); }
    closedir(dd); return ok; }

/* FFmpeg with the encoder the target needs */
static int ffmpeg_has(const char *ff, const char *enc){
    char cmd[1400];
#ifdef _WIN32
    snprintf(cmd, sizeof cmd, "\"\"%s\" -hide_banner -h encoder=%s 2>NUL\"", ff, enc);
#else
    snprintf(cmd, sizeof cmd, "\"%s\" -hide_banner -h encoder=%s 2>/dev/null", ff, enc);
#endif
    FILE *p = popen(cmd, "r"); char line[256]; int ok = 0; if (p) { while (fgets(line, sizeof line, p)) if (strstr(line, "Encoder ")) ok = 1; pclose(p); }
    return ok; }

int main(int argc, char **argv){
    int a = 1, interactive = argc <= 1; const char *target = 0; static char ffpath[1100] = "", out[1100] = "", src[1100] = "";
    char here[1024]; exe_dir(here, sizeof here, argv[0]);
    for (; a < argc; a++) {
        if (!strcmp(argv[a], "3ds") || !strcmp(argv[a], "3DS")) target = "3ds";
        else if (!strcmp(argv[a], "gc") || !strcmp(argv[a], "GC") || !strcmp(argv[a], "gamecube") || !strcmp(argv[a], "GameCube")) target = "gc";
        else if (!strcmp(argv[a], "vita") || !strcmp(argv[a], "Vita") || !strcmp(argv[a], "VITA")) target = "vita";
        else if (!strcmp(argv[a], "--video-kbps") && a + 1 < argc) rs_thp_video_kbps = atoi(argv[++a]);
        else if (!strcmp(argv[a], "--ffmpeg") && a + 1 < argc) snprintf(ffpath, sizeof ffpath, "%s", argv[++a]);
        else if (!strcmp(argv[a], "--out") && a + 1 < argc) snprintf(out, sizeof out, "%s", argv[++a]);
        else if (!strcmp(argv[a], "--pause")) interactive = 1;
        else if (!strcmp(argv[a], "-h") || !strcmp(argv[a], "--help")) { printf("usage: %s [vita | 3ds | gc] [--out folder] [--video-kbps N] [--ffmpeg path] [game.iso | game folder] [output folder]\n", argv[0]); return 0; }
        else if (!src[0]) snprintf(src, sizeof src, "%s", argv[a]);
        else if (!out[0]) snprintf(out, sizeof out, "%s", argv[a]);
        else { printf("unexpected argument: %s\n", argv[a]); return 1; } }
    if (!target) { char d[1200]; snprintf(d, sizeof d, "%s/aurek.dol", here); target = exists(d, 0) ? "gc" : "3ds"; }
    int gc = !strcmp(target, "gc"), vita = !strcmp(target, "vita");
    const char *console = gc ? "GameCube" : vita ? "Vita" : "3DS";
    if (!src[0] && !find_game(here, src, sizeof src)) {
        printf("No game found: put game.iso (your UMD image) or the extracted GAME folder (holding PSP_GAME) next to the tool,\nor give its path.\n"); pause_exit(1, interactive); }
    if (!out[0]) snprintf(out, sizeof out, "%s/Converted/%s", here, console);
    for (char *p = src; *p; p++) if (*p == '\\') *p = '/';
    for (char *p = out; *p; p++) if (*p == '\\') *p = '/';
    { char c[1200]; snprintf(c, sizeof c, "%s", out); char *s = strrchr(c, '/'); if (s && s != c) { *s = 0;
#ifdef _WIN32
        CreateDirectoryA(c, NULL);
#else
        mkdir(c, 0777);
#endif
    } }
    if (gc || vita) {
        if (gc) { rs_conv_thp = 1; if (rs_thp_video_kbps < 300) rs_thp_video_kbps = 300; }
        if (vita) { rs_conv_pcm = 1; rs_conv_mp4_cli = 1; }
        if (!ffpath[0]) {
#ifdef _WIN32
            snprintf(ffpath, sizeof ffpath, "%s\\ffmpeg.exe", here);
#else
            snprintf(ffpath, sizeof ffpath, "%s/ffmpeg", here);
#endif
            if (!exists(ffpath, 0)) snprintf(ffpath, sizeof ffpath, "ffmpeg"); }
        rs_thp_ffmpeg = ffpath;
        if (!ffmpeg_has(ffpath, gc ? "mjpeg" : "aac")) {   /* checked before anything starts */
            printf("FFmpeg was not found (%s).\nThe movies need it: put ffmpeg.exe next to the tool (https://ffmpeg.org/download.html),\nor give its path with --ffmpeg.\n", ffpath); pause_exit(1, interactive); } }
    printf("SWBFRS Conversion Tool - target: %s\n\n  game:   %s\n  output: %s\n", console, src, out);
    if (gc) printf("  FFmpeg: %s\n  movies: THP, 512x384 (4:3, letterboxed), Motion JPEG %d kbit/s, DSP-ADPCM sound 32 kHz\n", ffpath, rs_thp_video_kbps);
    else if (vita) printf("  FFmpeg: %s\n  audio:  16-bit WAV;  movies: MP4 (the H.264 as it is, AAC 160 kbit/s)\n", ffpath);
    else printf("  audio:  DSP-ADPCM\n");
    printf("\n");
    const char *root = src; size_t l = strlen(src);
    if (l > 4 && (!strcmp(src + l - 4, ".iso") || !strcmp(src + l - 4, ".ISO"))) {
        if (vfs_iso_mount(src)) { printf("Cannot read %s as a UMD image.\n", src); pause_exit(1, interactive); }
        root = "iso:"; }
    else { char p[1200]; snprintf(p, sizeof p, "%s/PSP_GAME", src);
        if (!exists(p, 1)) { printf("No game in %s: it should hold PSP_GAME (or give game.iso).\n", src); pause_exit(1, interactive); } }
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
    if (gc) printf("\nThe folder\n  %s\nis ready. make_gcm.py (in the GameCube build folder) finds it there or as Converted/GameCube beside it,\npacks it and leaves out the originals it replaces.\n", out);
    else if (vita) printf("\nCopy the folder\n  %s\nto the Vita as\n  ux0:data/SWBFRS/converted   (or ux0:data/Aurek/converted)\n(the first-start conversion then only checks it).\n", out);
    else printf("\nCopy the folder\n  %s\nto the 3DS SD card as\n  sdmc:/3ds/SWBFRS/converted\n(the game's own first-start conversion is then skipped).\n", out);
    pause_exit(0, interactive); return 0; }
