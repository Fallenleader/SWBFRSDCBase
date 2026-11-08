/* Dedicated host (RS_DEDICATED=1, launched by tools/rsserver/sessions.py): makes the game host its session by itself.
 *
 * The game has a developer console with server commands (registered in func_08A60C74; their help texts are in the game image):
 *   AddMap <map> [<gametype>] [<era>]   func_08A612B8   "adds map and optionally sets new gametype and era ('prequel' or 'classic')"
 *   ResetMapRotation                     func_08A61B1C?  (not used: the rotation starts empty)
 *   FE_HostGame                          func_08A31E2C   what the menu's Launch button runs: needs a non-empty rotation, sets the
 *                                                        host flags (as Host, func_08A61004, does) and asks the front end to start
 *                                                        the first map (func_08A27544(4)).  (NextMap only works inside a game.)
 * Nothing in the PSP release types these, so a dedicated instance used to sit on the title screen: it answered nobody and listed no
 * game.  Here they are called directly, on the game thread (from the pad read every frame), once the front end has had time to start:
 * the session's maps (RS_SESSION_MAPS = MAP:ERA:MODE,...) go into the rotation, the session settings into the game's variables, then
 * Host.  The gametype names the console accepts are the game's own (localised) mode names: they are read from the game at run time.
 * Commands registered with func_08897754 take (wide-string arguments, help flag, 0): AddMap.  Those registered with func_08897664 take
 * (help flag) only: Host, NextMap, FE_HostGame.  The strings live in the calling thread's stack, which is inside the guest window. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <strings.h>
#include "rs_base.h"

extern int rs_setting_int(const char *k, int dflt);
rv_t func_08A612B8(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);   /* AddMap */
rv_t func_088A49D4(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);   /* NetStartup <type> */
rv_t func_08A31E2C(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);   /* FE_HostGame */
u32 func_08973540(u32 mode);                                                                                          /* mode name */

static const char *setting(const char *k){ const char *v = getenv(k); return v && *v ? v : 0; }   /* sessions.py passes the session in the environment */
static double now(void){ struct timespec t; clock_gettime(CLOCK_MONOTONIC, &t); return t.tv_sec + t.tv_nsec * 1e-9; }

static void wide_to_utf8(u32 ga, char *out, int n){ int i = 0; if (ga) for (; i < n - 1; i++) { u16 c = *(u16 *)PTR(ga + 2u * i); if (!c) break; out[i] = c < 128 ? (char)c : '?'; } out[i] = 0; }

/* the session's mode code -> the game's mode index, found by the game's own mode names */
static int mode_index(const char *code, char names[6][64]){
    for (int m = 0; m < 6; m++) if (!strcasecmp(names[m], code)) return m;      /* the PSP release names them by code: CQST CTF1 CTF2 HCTF */
    static const char *want[][3] = {{"CQST", "conquest", 0}, {"CTF1", "1-flag", "one flag"}, {"CTF2", "2-flag", "capture the flag"}, {"HCTF", "hunt", "hero"}};
    for (int k = 0; k < 4; k++) if (!strcmp(code, want[k][0]))
        for (int m = 0; m < 6; m++) for (int j = 1; j < 3 && want[k][j]; j++) {
            char low[64]; int i = 0; for (; names[m][i] && i < 63; i++) low[i] = (char)(names[m][i] >= 'A' && names[m][i] <= 'Z' ? names[m][i] + 32 : names[m][i]); low[i] = 0;
            if (strstr(low, want[k][j])) return m; }
    return -1; }

static void run(rv_t (*fn)(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float), const char *args){
    u16 w[256]; int i = 0; for (; args[i] && i < 255; i++) w[i] = (u8)args[i]; w[i] = 0;
    fn(RS_GADDR(w), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); }



/* QR2 heartbeats (net.c sendto to port 27900): a dedicated host reports the session's name as its hostname.  A heartbeat is
 * type 0x03, a 4-byte instance key, then "key\0value\0" pairs (an empty key ends them), then the player and team tables. */
u32 rs_dedicated_qr2(u8 *p, u32 n, u32 cap){
    const char *name = setting("RS_SESSION_NAME");
    if (!name || !setting("RS_DEDICATED") || n < 6 || p[0] != 0x03) return n;
    u32 i = 5;
    while (i < n && p[i]) {
        const char *k = (const char *)p + i; u32 kl = (u32)strnlen(k, n - i); if (i + kl + 1 >= n) return n;
        u32 v = i + kl + 1, vl = (u32)strnlen((const char *)p + v, n - v); if (v + vl >= n) return n;
        if (!strcmp(k, "hostname")) {
            u32 nl = (u32)strlen(name); if (nl > 63) nl = 63;
            if (n - vl + nl > cap) return n;
            memmove(p + v + nl, p + v + vl, n - (v + vl)); memcpy(p + v, name, nl); return n - vl + nl; }
        i = v + vl + 1; }
    return n; }

/* the session's settings -> the game's own variables (addresses from the variable registry, RS_VAR_LOG=1), in the game's ranges */
static void put(const char *what, u32 addr, int v, int lo, int hi){
    if (v < lo) v = lo; if (v > hi) v = hi; *(u32 *)PTR(addr) = (u32)v; fprintf(stderr, "[HOST] %s = %d\n", what, v); }
static void apply_settings(void){
    const char *s;
    if ((s = setting("RS_SESSION_MAX_PLAYERS"))) put("BFF.MaxPlayers (people)", 0x08B1BB40u, atoi(s), 1, 8);
    if ((s = setting("RS_SESSION_BOTS"))) put("BFF.MinPlayersInfrastructure (filled with AI)", 0x08C294D4u, atoi(s), 1, 16);
    if ((s = setting("RS_SESSION_TICKETS"))) put("BFF.InitialTickets", 0x08C294E4u, atoi(s), 25, 1000);
    if ((s = setting("RS_SESSION_HERO_TIME"))) put("BFF.HeroUnlockTime (minutes)", 0x08C294E0u, (atoi(s) + 30) / 60, 1, 10); }

void rs_dedicated_tick(void){
    static int state = -1; static double t0;
    if (state == -1) { state = rs_setting_int("RS_DEDICATED", 0) || (setting("RS_DEDICATED") && atoi(setting("RS_DEDICATED"))) ? 0 : 3; t0 = now(); }
    if (state != 0) return;
    if (now() - t0 < (double)rs_setting_int("RS_SESSION_HOST_DELAY", 12)) return;      /* let the front end come up */
    /* the network first, as the Online menu does: the console's network startup (func_088A49D4, "initiate network startup with type
     * (0 = internet, 1 = LAN)") sets the internet/LAN switch (0x08B2AE2C) and starts the connection; its state is 0x08B2AE28
     * (1 starting, 2 or 7..10 up, 3 failed: func_088A4B54).  FE_HostGame hosts on the internet only once it is up. */
    static int net = 0; static double tn;
    u32 ns = *(u32 *)PTR(0x08B2AE28u);
    if (!net) { fprintf(stderr, "[HOST] network startup (internet)\n"); func_088A49D4(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); net = 1; tn = now(); return; }
    if (!(ns == 2 || (ns >= 7 && ns <= 10))) {
        static u32 last = 99; if (ns != last) { fprintf(stderr, "[HOST] network state %u\n", ns); last = ns; }
        if (ns == 3 || now() - tn > 60) { fprintf(stderr, "[HOST] the network did not come up (state %u): retrying\n", ns); net = 0; t0 = now() - 1e6; }
        return; }
    fprintf(stderr, "[HOST] network up (state %u)\n", ns);
    state = 1;
    char names[6][64];
    for (int m = 0; m < 6; m++) { wide_to_utf8(func_08973540((u32)m), names[m], 64); fprintf(stderr, "[HOST] game mode %d: \"%s\"\n", m, names[m]); }
    const char *maps = setting("RS_SESSION_MAPS"); int added = 0;
    if (maps) {
        char *s = strdup(maps), *save = 0;
        for (char *tok = strtok_r(s, ",", &save); tok; tok = strtok_r(0, ",", &save)) {
            char map[64] = "", era[32] = "", mode[16] = "";
            if (sscanf(tok, "%63[^:]:%31[^:]:%15s", map, era, mode) < 1) continue;
            int mi = mode_index(mode, names); char cmd[200];
            snprintf(cmd, sizeof cmd, "%s%s%s %s", map, mi >= 0 ? " " : "", mi >= 0 ? names[mi] : "", !strcmp(era, "PREQUEL") ? "prequel" : "classic");
            fprintf(stderr, "[HOST] AddMap %s\n", cmd); run(func_08A612B8, cmd); added++; }
        free(s); }
    if (!added) fprintf(stderr, "[HOST] no maps in RS_SESSION_MAPS: hosting the game's default rotation\n");
    apply_settings();
    fprintf(stderr, "[HOST] FE_HostGame (session \"%s\")\n", setting("RS_SESSION_NAME") ? setting("RS_SESSION_NAME") : "?");
    rv_t r = func_08A31E2C(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    fprintf(stderr, "[HOST] FE_HostGame %s\n", r.v0 ? "accepted: loading the first map" : "refused (empty rotation?)");
    state = 2; }
