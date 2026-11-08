/* AI bridge (AIAgents branch): streams the bots' state to the trainer (tools/aiagents) over TCP, on desktop builds.
 *
 * Each setting is read from the environment, else from settings.txt.
 *   RS_AI_BRIDGE=<host:port>    connect to the trainer (tools/aiagents: rsai/bridge.py listens).  Unset: the bridge is off.
 *   RS_AI_BRIDGE_HZ=<n>         snapshots per second of game time (default 5; the game's frames are counted, so a slowed or
 *                               sped-up game keeps the same snapshots per game frame)
 *   RS_AI_BRIDGE_SYNC=1         after each snapshot, wait for the trainer's reply (lockstep: the game does not run ahead)
 *   RS_AI_BRIDGE_CONTROL=1      apply the trainer's replies (lockstep only): each bot named in a reply gets a squad of its own
 *                               and goes to the destination the reply gives (game_patches.c rs_ai_command); the rest stay the game's
 *   RS_AI_BRIDGE_RAW=<bytes>    also send the first <bytes> of each AI object (field finding: health, ammunition, weapon...)
 *
 * The wire format is in ai_bridge.h.  With RS_AI_BRIDGE_CONTROL=1 the trainer's replies move the bots it names (header caps bit 0). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "ai_bridge.h"

#if defined(RS_DESKTOP)
#ifdef _WIN32
#include <winsock2.h>
#include <ws2tcpip.h>
typedef SOCKET sock_t;
#define BAD_SOCK INVALID_SOCKET
#define sclose closesocket
#else
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <netdb.h>
#include <unistd.h>
typedef int sock_t;
#define BAD_SOCK (-1)
#define sclose close
#endif
#include <time.h>

#define MAX_BOTS 256
static sock_t s = BAD_SOCK;
static int state;                  /* 0 not tried, 1 connected, -1 off / given up */
static unsigned frame, period = 12, last_try;
static int sync_mode, rawn, control;
static double t0;
static struct rs_ai_rec recs[MAX_BOTS];
static uint8_t *raw;
static struct rs_ai_act acts[MAX_BOTS]; static int nacts;

const char *rs_platform_setting(const char *key);
static const char *opt(const char *k){ const char *v = getenv(k); if (!v || !*v) v = rs_platform_setting(k); return v && *v ? v : 0; }   /* environment, then settings.txt */
static double now_s(void){ struct timespec ts; timespec_get(&ts, TIME_UTC); return ts.tv_sec + ts.tv_nsec * 1e-9; }
static int send_all(const void *p, size_t n){ const char *c = p; while (n) { int k = send(s, c, (int)n, 0); if (k <= 0) return 0; c += k; n -= (size_t)k; } return 1; }
static int recv_all(void *p, size_t n){ char *c = p; while (n) { int k = recv(s, c, (int)n, 0); if (k <= 0) return 0; c += k; n -= (size_t)k; } return 1; }
static void drop(const char *why){ fprintf(stderr, "[AIBRIDGE] %s: disconnected\n", why); sclose(s); s = BAD_SOCK; state = 0; rs_ai_release_all(); }

static void try_connect(void){
    const char *cfg = opt("RS_AI_BRIDGE"); if (!cfg) { state = -1; return; }
    if (frame - last_try < 120 && last_try) return;        /* retry every ~2 s while the trainer is not up */
    last_try = frame ? frame : 1;
    char host[128]; snprintf(host, sizeof host, "%s", cfg); char *port = strrchr(host, ':'); if (!port) { fprintf(stderr, "[AIBRIDGE] RS_AI_BRIDGE=%s: expected host:port\n", cfg); state = -1; return; }
    *port++ = 0;
#ifdef _WIN32
    { static int wsa; if (!wsa) { WSADATA w; WSAStartup(MAKEWORD(2, 2), &w); wsa = 1; } }
#endif
    struct addrinfo hints, *ai = 0; memset(&hints, 0, sizeof hints); hints.ai_family = AF_INET; hints.ai_socktype = SOCK_STREAM;
    if (getaddrinfo(host, port, &hints, &ai) || !ai) return;
    s = socket(ai->ai_family, ai->ai_socktype, ai->ai_protocol);
    if (s == BAD_SOCK || connect(s, ai->ai_addr, (int)ai->ai_addrlen)) { if (s != BAD_SOCK) sclose(s); s = BAD_SOCK; freeaddrinfo(ai); return; }
    freeaddrinfo(ai);
    int one = 1; setsockopt(s, IPPROTO_TCP, TCP_NODELAY, (const char *)&one, sizeof one);
    const char *hz = opt("RS_AI_BRIDGE_HZ"); int h = hz ? atoi(hz) : 5; if (h < 1) h = 1; if (h > 60) h = 60; period = 60u / (unsigned)h; if (!period) period = 1;
    sync_mode = opt("RS_AI_BRIDGE_SYNC") && atoi(opt("RS_AI_BRIDGE_SYNC"));
    control = sync_mode && opt("RS_AI_BRIDGE_CONTROL") && atoi(opt("RS_AI_BRIDGE_CONTROL"));
    rawn = opt("RS_AI_BRIDGE_RAW") ? atoi(opt("RS_AI_BRIDGE_RAW")) : 0; if (rawn < 0) rawn = 0; if (rawn > 2048) rawn = 2048; rawn &= ~3;
    if (rawn && !raw) raw = malloc((size_t)MAX_BOTS * 2048);
    t0 = now_s(); state = 1;
    fprintf(stderr, "[AIBRIDGE] connected to %s: %u Hz of game frames, %s, raw %d bytes\n", cfg, 60u / period, sync_mode ? (control ? "lockstep, bots controlled" : "lockstep") : "free-running", rawn); }

void rs_ai_bridge_frame(void){
    frame++;
    if (state < 0) return;
    if (state == 0) { try_connect(); if (state != 1) return; }
    if (frame % period) return;
    int n = rs_ai_snapshot(recs, MAX_BOTS, rawn ? raw : 0, rawn);
    struct rs_ai_hdr h; memcpy(h.magic, "RSAI", 4); h.version = RS_AI_BRIDGE_VERSION; h.frame = frame; h.time_s = (float)(now_s() - t0);
    h.n = (uint32_t)n; h.rec_size = sizeof(struct rs_ai_rec); h.raw_size = (uint32_t)rawn; h.caps = control ? 1u : 0u;
    if (!send_all(&h, sizeof h) || (n && !send_all(recs, sizeof(struct rs_ai_rec) * (size_t)n)) || (n && rawn && !send_all(raw, (size_t)n * rawn))) { drop("send"); return; }
    { struct rs_ai_post ps[8]; uint32_t np = (uint32_t)rs_ai_posts(ps, 8); if (!send_all(&np, 4) || (np && !send_all(ps, sizeof ps[0] * np))) { drop("send"); return; } }
    if (!sync_mode) return;
    char m[4]; uint32_t na;
    if (!recv_all(m, 4) || memcmp(m, "RSAA", 4) || !recv_all(&na, 4)) { drop("reply"); return; }
    nacts = 0;
    for (uint32_t i = 0; i < na; i++) { struct rs_ai_act a; if (!recv_all(&a, sizeof a)) { drop("actions"); return; } if (nacts < MAX_BOTS) acts[nacts++] = a; }
    if (control) { static unsigned why[6], nb; int bad = 0;
        for (int i = 0; i < nacts; i++) if (acts[i].param[3] == 1.0f) { int r = rs_ai_command(acts[i].id, 1, acts[i].param); if (r < 0) { bad++; why[-r < 6 ? -r : 0]++; } }
        if (bad && (nb += (unsigned)bad) / 200 != (nb - (unsigned)bad) / 200)
            fprintf(stderr, "[AIBRIDGE] %u commands not applied so far (normal: a bot dies between snapshot and reply): bot gone or dead %u, no commander %u, no squad made %u, no slot %u\n", nb, why[2], why[3], why[4], why[5]); } }

/* the trainer's last action for a soldier id (0 = none) */
const struct rs_ai_act *rs_ai_bridge_action(uint32_t id){ for (int i = 0; i < nacts; i++) if (acts[i].id == id) return &acts[i]; return 0; }
#else
void rs_ai_bridge_frame(void){}
#endif
