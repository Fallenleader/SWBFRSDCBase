/* PSP networking on the host (RSServer): the firmware calls the game's online mode makes, on the host's own sockets.
 *
 *   sceNetInet*        BSD sockets -> host sockets (POSIX or Winsock).  PSP socket ids are slots of a table; addresses are the PSP's
 *                      BSD layout (len, family, port, address); option and errno values are translated.  Calls that can block
 *                      (connect, accept, recv, select with a timeout) let the other game threads run while they wait.
 *   sceNetApctl*       the access point: always connected (the host's network); GetInfo 8 = the host's address.  The game's
 *                      connection handler is told "got an IP address" when the connection dialog finishes.
 *   sceUtilityNetconf* the "connect to an access point" dialog: finishes at once, connected.
 *   sceNetResolver*    names -> addresses.  The game's GameSpy names (*.gamespy.com) go to the RS server: one found on the LAN
 *                      first (a broadcast to UDP 27950, answered by rsserver/rsmaster.py), else RS_SERVER in settings.txt.  Other
 *                      names go to the host's resolver.
 *   sceNetAdhoc*       ad hoc play is not offered (the multiplayer menu shows only "Search for Servers"): every call fails.
 * RS_NET_LOG=1 logs every socket call. */
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <winsock2.h>
#include <ws2tcpip.h>
typedef SOCKET sock_t;
#define BADSOCK INVALID_SOCKET
#define sclose closesocket
#define serrno() WSAGetLastError()
#else
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
typedef int sock_t;
#define BADSOCK (-1)
#define sclose close
#define serrno() errno
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "psp_impl.h"

#define A0 (c->r[4])
#define A1 (c->r[5])
#define A2 (c->r[6])
#define A3 (c->r[7])
#define T0 (c->r[8])
#define T1 (c->r[9])
#define V0 (c->r[2])

extern const char *rs_platform_setting(const char *key);
extern int rs_setting_int(const char *k, int d);
extern void rs_big_unlock(void), rs_big_lock(void);
static int nlog = -1;
#define NLOG(...) do { if (nlog < 0) nlog = getenv("RS_NET_LOG") != 0; if (nlog) { fprintf(stderr, "[NET] " __VA_ARGS__); fputc('\n', stderr); } } while (0)

static char *gstr(u32 a, char *b, int n){ int i = 0; while (i < n - 1) { char ch = (char)LB(a + i); b[i++] = ch; if (!ch) break; } b[i < n ? i : n - 1] = 0; return b; }
static void gread(u32 a, void *dst, u32 n){ u8 *d = dst; for (u32 i = 0; i < n; i++) d[i] = LB(a + i); }
static void gwrite(u32 a, const void *src, u32 n){ const u8 *s = src; for (u32 i = 0; i < n; i++) SB(a + i, s[i]); }

/* ------------------------------------------------------------------ errno (PSP newlib values) */
static int perr;                                      /* sceNetInetGetErrno (per process is enough: one network thread) */
static int psp_errno(int e){
#ifdef _WIN32
    switch (e) { case WSAEWOULDBLOCK: return 11; case WSAEINPROGRESS: return 119; case WSAEALREADY: return 120; case WSAEISCONN: return 127;
    case WSAENOTCONN: return 128; case WSAECONNREFUSED: return 111; case WSAECONNRESET: return 104; case WSAETIMEDOUT: return 116;
    case WSAEADDRINUSE: return 112; case WSAEADDRNOTAVAIL: return 125; case WSAENETUNREACH: return 114; case WSAEHOSTUNREACH: return 118;
    case WSAEMSGSIZE: return 122; case WSAECONNABORTED: return 113; case WSAEINVAL: return 22; case WSAENOTSOCK: return 108; default: return 5; }
#else
    switch (e) { case EAGAIN: return 11; case EINPROGRESS: return 119; case EALREADY: return 120; case EISCONN: return 127; case ENOTCONN: return 128;
    case ECONNREFUSED: return 111; case ECONNRESET: return 104; case ETIMEDOUT: return 116; case EADDRINUSE: return 112; case EADDRNOTAVAIL: return 125;
    case ENETUNREACH: return 114; case EHOSTUNREACH: return 118; case EMSGSIZE: return 122; case ECONNABORTED: return 113; case EINVAL: return 22;
    case ENOTSOCK: return 108; case EPIPE: return 32; case EBADF: return 9; default: return 5; }
#endif
}
static u32 fail(int host_err){ perr = psp_errno(host_err); return 0xFFFFFFFFu; }

/* ------------------------------------------------------------------ sockets */
#define NS 256
static struct { sock_t s; int used, nonblock, type, motd; } socks[NS];
/* the message of the day: the game's request to motd.asp, its answer collected and shown (gamespy_ui.c) */
static char motd_buf[2048]; static int motd_len;
void rs_motd_set(const char *text);
static void motd_done(void){
    motd_buf[motd_len] = 0; char *b = strstr(motd_buf, "\r\n\r\n"); if (b) { b += 4; while (*b == '\r' || *b == '\n') b++; size_t n = strlen(b); while (n && (b[n - 1] == '\r' || b[n - 1] == '\n' || b[n - 1] == ' ')) b[--n] = 0; rs_motd_set(b); }
    motd_len = 0; }
static int net_up;
#ifdef __vita__
#include <psp2/sysmodule.h>
#include <psp2/net/net.h>
#include <psp2/net/netctl.h>
#endif
static void net_start(void){
    if (net_up) return; net_up = 1;
#ifdef _WIN32
    WSADATA w; WSAStartup(MAKEWORD(2, 2), &w);
#elif defined(__vita__)
    /* the PS Vita: the network module and its memory, then the connection manager (Wi-Fi, as the system set it up) */
    sceSysmoduleLoadModule(SCE_SYSMODULE_NET);
    static char mem[1024 * 1024]; SceNetInitParam p; p.memory = mem; p.size = sizeof mem; p.flags = 0;
    int r = sceNetInit(&p); int r2 = sceNetCtlInit();
    fprintf(stderr, "[NET] PS Vita network: init %08x, connection manager %08x\n", (unsigned)r, (unsigned)r2);
#endif
}
static int sk_new(sock_t s, int type){ for (int i = 1; i < NS; i++) if (!socks[i].used) { socks[i].used = 1; socks[i].s = s; socks[i].nonblock = 0; socks[i].type = type; socks[i].motd = 0; return i; } sclose(s); return -1; }
static sock_t sk(u32 id){ return id < NS && socks[id].used ? socks[id].s : BADSOCK; }
static void set_nb(sock_t s, int on){
#ifdef _WIN32
    u_long v = (u_long)on; ioctlsocket(s, FIONBIO, &v);
#elif defined(__vita__)
    setsockopt(s, SOL_SOCKET, SO_NONBLOCK, &on, sizeof on);
#else
    int f = fcntl(s, F_GETFL, 0); fcntl(s, F_SETFL, on ? (f | O_NONBLOCK) : (f & ~O_NONBLOCK));
#endif
}
/* PSP sockaddr_in: u8 len, u8 family, u16 port (network order), u32 address, 8 zero bytes */
static int sa_in(u32 a, struct sockaddr_in *o){ memset(o, 0, sizeof *o); if (!a) return 0; o->sin_family = AF_INET; u16 p; u32 ad; gread(a + 2, &p, 2); gread(a + 4, &ad, 4); o->sin_port = p; o->sin_addr.s_addr = ad; return 1; }
static void sa_out(u32 a, u32 lenp, const struct sockaddr_in *s){
    if (!a) return; u8 b[16] = {16, 2}; memcpy(b + 2, &s->sin_port, 2); memcpy(b + 4, &s->sin_addr.s_addr, 4); gwrite(a, b, 16); if (lenp) SW(lenp, 16); }
static const char *sa_str(const struct sockaddr_in *s){ static char b[2][32]; static int k; char *o = b[k++ & 1]; snprintf(o, 32, "%s:%u", inet_ntoa(s->sin_addr), ntohs(s->sin_port)); return o; }

/* the RS server's address for the game's GameSpy names (see the top) */
static u32 server_ip; static int server_tried;
static u32 lan_discover(void){
    sock_t s = socket(AF_INET, SOCK_DGRAM, 0); if (s == BADSOCK) return 0;
    int on = 1; setsockopt(s, SOL_SOCKET, SO_BROADCAST, (const char *)&on, sizeof on);
    struct sockaddr_in b; memset(&b, 0, sizeof b); b.sin_family = AF_INET; b.sin_port = htons(27950); b.sin_addr.s_addr = htonl(INADDR_BROADCAST);
    u32 got = 0;
    for (int tr = 0; tr < 3 && !got; tr++) {
        sendto(s, "RSSRV?", 6, 0, (struct sockaddr *)&b, sizeof b);
        fd_set r; FD_ZERO(&r); FD_SET(s, &r); struct timeval tv = {0, 300000};
        if (select((int)s + 1, &r, 0, 0, &tv) > 0) { char buf[64]; struct sockaddr_in f; socklen_t fl = sizeof f; int n = (int)recvfrom(s, buf, sizeof buf, 0, (struct sockaddr *)&f, &fl);
            if (n >= 6 && !memcmp(buf, "RSSRV!", 6)) got = f.sin_addr.s_addr; } }
    sclose(s); return got; }
static u32 rs_server(void){
    if (server_tried) return server_ip; server_tried = 1;
    rs_big_unlock();
    u32 ip = rs_setting_int("RS_LAN_SEARCH", 1) ? lan_discover() : 0;
    if (ip) { struct in_addr a; a.s_addr = ip; fprintf(stderr, "[NET] RS server on the LAN: %s\n", inet_ntoa(a)); }
    else {
        const char *h = rs_platform_setting("RS_SERVER");
        if (h && *h) { struct addrinfo hi, *r = 0; memset(&hi, 0, sizeof hi); hi.ai_family = AF_INET;
            if (getaddrinfo(h, 0, &hi, &r) == 0 && r) { ip = ((struct sockaddr_in *)r->ai_addr)->sin_addr.s_addr; freeaddrinfo(r); }
            fprintf(stderr, "[NET] no RS server on the LAN; RS_SERVER=%s -> %s\n", h, ip ? "found" : "cannot be resolved"); }
        else fprintf(stderr, "[NET] no RS server on the LAN and none in settings.txt (RS_SERVER)\n"); }
    rs_big_lock(); server_ip = ip; return ip; }
/* "I Forgot" (gamespy_ui.c): the RS server's account for this address (TCP 29910).  1 found, 0 none, -1 banned, -2 no server */
int rs_net_recover(char *nick, int nn, char *user, int un){
    net_start(); u32 ip = rs_server(); if (!ip) return -2;
    rs_big_unlock();
    int res = -2; sock_t s = socket(AF_INET, SOCK_STREAM, 0);
    if (s != BADSOCK) {
        struct sockaddr_in a; memset(&a, 0, sizeof a); a.sin_family = AF_INET; a.sin_port = htons(29910); a.sin_addr.s_addr = ip;
#ifdef _WIN32
        DWORD to = 4000;
#else
        struct timeval to = {4, 0};
#endif
        setsockopt(s, SOL_SOCKET, SO_RCVTIMEO, (const char *)&to, sizeof to);
        if (connect(s, (struct sockaddr *)&a, sizeof a) == 0 && send(s, "RSREC\n", 6, 0) == 6) {
            char b[256]; int n = 0, r;
            while (n < 255 && (r = (int)recv(s, b + n, 255 - n, 0)) > 0) { n += r; if (memchr(b, '\n', (size_t)n)) break; }
            b[n] = 0; char *e = strchr(b, '\n'); if (e) *e = 0;
            if (!strncmp(b, "OK ", 3)) { char *t = strchr(b + 3, '\t');
                if (t) { *t = 0; snprintf(nick, (size_t)nn, "%s", b + 3); snprintf(user, (size_t)un, "%s", t + 1); res = 1; } }
            else if (!strcmp(b, "NONE")) res = 0;
            else if (!strcmp(b, "BANNED")) res = -1; }
        sclose(s); }
    rs_big_lock(); return res; }
void rs_net_forget_server(void){ server_tried = 0; server_ip = 0; }     /* search again (the menu's Search for Servers) */

static void h_Zero(sdkcall_t *c){ V0 = 0; }
static void h_One(sdkcall_t *c){ V0 = 1; }
static void h_Fail(sdkcall_t *c){ V0 = 0x80410D00u; }        /* ad hoc: not available */
static void h_NetInit(sdkcall_t *c){ net_start(); V0 = 0; }

static void h_Socket(sdkcall_t *c){
    net_start(); int type = A1 == 1 ? SOCK_STREAM : A1 == 2 ? SOCK_DGRAM : -1;
    if (A0 != 2 || type < 0) { perr = 22; V0 = 0xFFFFFFFFu; return; }
    sock_t s = socket(AF_INET, type, 0); if (s == BADSOCK) { V0 = fail(serrno()); return; }
    if (type == SOCK_STREAM) { int on = 1; setsockopt(s, IPPROTO_TCP, TCP_NODELAY, (const char *)&on, sizeof on); }
    int id = sk_new(s, type); NLOG("socket %s -> %d", type == SOCK_STREAM ? "tcp" : "udp", id); V0 = (u32)id; }
static void h_Close(sdkcall_t *c){ sock_t s = sk(A0); if (s == BADSOCK) { perr = 9; V0 = 0xFFFFFFFFu; return; } sclose(s); if (socks[A0].motd == 2) motd_done(); socks[A0].used = 0; NLOG("close %d", A0); V0 = 0; }
static void h_Shutdown(sdkcall_t *c){ sock_t s = sk(A0); V0 = s == BADSOCK ? (perr = 9, 0xFFFFFFFFu) : shutdown(s, (int)A1) == 0 ? 0 : fail(serrno()); }
static void h_Bind(sdkcall_t *c){
    sock_t s = sk(A0); struct sockaddr_in a; sa_in(A1, &a); if (s == BADSOCK) { perr = 9; V0 = 0xFFFFFFFFu; return; }
    int on = 1; setsockopt(s, SOL_SOCKET, SO_REUSEADDR, (const char *)&on, sizeof on);
    int r = bind(s, (struct sockaddr *)&a, sizeof a); NLOG("bind %d %s -> %d", A0, sa_str(&a), r); V0 = r == 0 ? 0 : fail(serrno()); }
static void h_Listen(sdkcall_t *c){ sock_t s = sk(A0); V0 = s == BADSOCK ? (perr = 9, 0xFFFFFFFFu) : listen(s, (int)A1) == 0 ? 0 : fail(serrno()); }
static void h_Connect(sdkcall_t *c){
    sock_t s = sk(A0); struct sockaddr_in a; sa_in(A1, &a); if (s == BADSOCK) { perr = 9; V0 = 0xFFFFFFFFu; return; }
    int nb = socks[A0].nonblock; if (!nb) rs_big_unlock();
    int r = connect(s, (struct sockaddr *)&a, sizeof a); int e = serrno();
    if (!nb) rs_big_lock();
    NLOG("connect %d %s -> %d", A0, sa_str(&a), r); V0 = r == 0 ? 0 : fail(e); }
static void h_Accept(sdkcall_t *c){
    sock_t s = sk(A0); if (s == BADSOCK) { perr = 9; V0 = 0xFFFFFFFFu; return; }
    struct sockaddr_in a; socklen_t l = sizeof a; int nb = socks[A0].nonblock; if (!nb) rs_big_unlock();
    sock_t n = accept(s, (struct sockaddr *)&a, &l); int e = serrno(); if (!nb) rs_big_lock();
    if (n == BADSOCK) { V0 = fail(e); return; }
    int id = sk_new(n, SOCK_STREAM); sa_out(A1, A2, &a); NLOG("accept %d <- %s = %d", A0, sa_str(&a), id); V0 = (u32)id; }
static u8 iobuf[65536 + 16];
static int host_flags(u32 f){ int o = 0; if (f & 1) o |= MSG_OOB; if (f & 2) o |= MSG_PEEK;
#ifndef _WIN32
    if (f & 0x80) o |= MSG_DONTWAIT;
#endif
    return o; }
static void h_Send(sdkcall_t *c){
    sock_t s = sk(A0); u32 n = A2 > 65536 ? 65536 : A2; if (s == BADSOCK) { perr = 9; V0 = 0xFFFFFFFFu; return; }
    gread(A1, iobuf, n); int r = (int)send(s, (const char *)iobuf, (int)n, host_flags(A3) & ~MSG_PEEK);
    if (n > 20 && !memcmp(iobuf, "GET /motd/motd.asp", 18)) { socks[A0].motd = 1; motd_len = 0; }
    NLOG("send %d %u -> %d", A0, n, r); V0 = r >= 0 ? (u32)r : fail(serrno()); }
static void h_Sendto(sdkcall_t *c){
    sock_t s = sk(A0); u32 n = A2 > 65536 ? 65536 : A2; if (s == BADSOCK) { perr = 9; V0 = 0xFFFFFFFFu; return; }
    struct sockaddr_in a; int has = sa_in(T0, &a); gread(A1, iobuf, n);
    if (has && a.sin_addr.s_addr == htonl(INADDR_BROADCAST)) { int on = 1; setsockopt(s, SOL_SOCKET, SO_BROADCAST, (const char *)&on, sizeof on); }
    int r = (int)(has ? sendto(s, (const char *)iobuf, (int)n, host_flags(A3), (struct sockaddr *)&a, sizeof a) : send(s, (const char *)iobuf, (int)n, host_flags(A3)));
    NLOG("sendto %d %u %s -> %d", A0, n, has ? sa_str(&a) : "-", r); V0 = r >= 0 ? (u32)r : fail(serrno()); }
static int rd_wait(sock_t s, int idx, u32 flags){
    /* a blocking read: wait with the lock released (other guest threads run), then read */
    if (socks[idx].nonblock || (flags & 0x80)) return 0;
    rs_big_unlock();
    for (;;) { fd_set r; FD_ZERO(&r); FD_SET(s, &r); struct timeval tv = {0, 100000}; int k = select((int)s + 1, &r, 0, 0, &tv); if (k != 0) break; }
    rs_big_lock(); return 0; }
static void h_Recv(sdkcall_t *c){
    sock_t s = sk(A0); u32 n = A2 > 65536 ? 65536 : A2; if (s == BADSOCK) { perr = 9; V0 = 0xFFFFFFFFu; return; }
    rd_wait(s, (int)A0, A3);
#ifdef _WIN32
    if (A3 & 0x80) set_nb(s, 1);
#endif
    int r = (int)recv(s, (char *)iobuf, (int)n, host_flags(A3)); int e = serrno();
#ifdef _WIN32
    if ((A3 & 0x80) && !socks[A0].nonblock) set_nb(s, 0);
#endif
    if (r > 0) gwrite(A1, iobuf, (u32)r);
    if (socks[A0].motd && r > 0) { int k = r; if (motd_len + k > (int)sizeof motd_buf - 1) k = (int)sizeof motd_buf - 1 - motd_len; memcpy(motd_buf + motd_len, iobuf, (size_t)k); motd_len += k; socks[A0].motd = 2; }
    if (socks[A0].motd == 2 && r == 0) { motd_done(); socks[A0].motd = 3; }
    if (r >= 0 || nlog > 0) NLOG("recv %d %u -> %d", A0, n, r);
    V0 = r >= 0 ? (u32)r : fail(e); }
static void h_Recvfrom(sdkcall_t *c){
    sock_t s = sk(A0); u32 n = A2 > 65536 ? 65536 : A2; if (s == BADSOCK) { perr = 9; V0 = 0xFFFFFFFFu; return; }
    rd_wait(s, (int)A0, A3);
#ifdef _WIN32
    if (A3 & 0x80) set_nb(s, 1);
#endif
    struct sockaddr_in a; socklen_t l = sizeof a; memset(&a, 0, sizeof a);
    int r = (int)recvfrom(s, (char *)iobuf, (int)n, host_flags(A3), (struct sockaddr *)&a, &l); int e = serrno();
#ifdef _WIN32
    if ((A3 & 0x80) && !socks[A0].nonblock) set_nb(s, 0);
#endif
    if (r >= 0) { gwrite(A1, iobuf, (u32)r); sa_out(T0, T1, &a); NLOG("recvfrom %d %u <- %s = %d", A0, n, sa_str(&a), r); }
    V0 = r >= 0 ? (u32)r : fail(e); }
static void h_Setsockopt(sdkcall_t *c){
    sock_t s = sk(A0); u32 lvl = A1, opt = A2, val = T0 >= 4 && A3 ? LW(A3) : 0; if (s == BADSOCK) { perr = 9; V0 = 0xFFFFFFFFu; return; }
    int r = 0, v = (int)val;
    if (lvl == 0xFFFF) switch (opt) {
        case 0x1009: socks[A0].nonblock = v != 0; set_nb(s, v != 0); break;                       /* SO_NONBLOCK (PSP) */
        case 0x0004: r = setsockopt(s, SOL_SOCKET, SO_REUSEADDR, (const char *)&v, sizeof v); break;
        case 0x0008: r = setsockopt(s, SOL_SOCKET, SO_KEEPALIVE, (const char *)&v, sizeof v); break;
        case 0x0020: r = setsockopt(s, SOL_SOCKET, SO_BROADCAST, (const char *)&v, sizeof v); break;
        case 0x1001: r = setsockopt(s, SOL_SOCKET, SO_SNDBUF, (const char *)&v, sizeof v); break;
        case 0x1002: r = setsockopt(s, SOL_SOCKET, SO_RCVBUF, (const char *)&v, sizeof v); break;
        case 0x0080: { struct linger lg; lg.l_onoff = (u16)LW(A3); lg.l_linger = (u16)LW(A3 + 4); r = setsockopt(s, SOL_SOCKET, SO_LINGER, (const char *)&lg, sizeof lg); break; }
        default: break; }
    else if (lvl == 6 && opt == 1) r = setsockopt(s, IPPROTO_TCP, TCP_NODELAY, (const char *)&v, sizeof v);
    NLOG("setsockopt %d %x %x = %d -> %d", A0, lvl, opt, v, r); V0 = r == 0 ? 0 : fail(serrno()); }
static void h_Getsockopt(sdkcall_t *c){
    sock_t s = sk(A0); if (s == BADSOCK) { perr = 9; V0 = 0xFFFFFFFFu; return; }
    int v = 0; socklen_t l = sizeof v; int r = 0;
    if (A1 == 0xFFFF && A2 == 0x1007) r = getsockopt(s, SOL_SOCKET, SO_ERROR, (char *)&v, &l), v = v ? psp_errno(v) : 0;
    else if (A1 == 0xFFFF && A2 == 0x1009) v = socks[A0].nonblock;
    else if (A1 == 0xFFFF && A2 == 0x1008) v = socks[A0].type == SOCK_STREAM ? 1 : 2;
    else if (A1 == 0xFFFF && A2 == 0x1001) r = getsockopt(s, SOL_SOCKET, SO_SNDBUF, (char *)&v, &l);
    else if (A1 == 0xFFFF && A2 == 0x1002) r = getsockopt(s, SOL_SOCKET, SO_RCVBUF, (char *)&v, &l);
    if (A3) SW(A3, (u32)v); if (T0) SW(T0, 4); V0 = r == 0 ? 0 : fail(serrno()); }
static void h_Getsockname(sdkcall_t *c){
    sock_t s = sk(A0); if (s == BADSOCK) { perr = 9; V0 = 0xFFFFFFFFu; return; }
    struct sockaddr_in a; socklen_t l = sizeof a; if (getsockname(s, (struct sockaddr *)&a, &l) != 0) { V0 = fail(serrno()); return; }
    sa_out(A1, A2, &a); V0 = 0; }
static void h_Select(sdkcall_t *c){
    /* PSP fd_set: 256 bits (u32[8]); timeval: s32 seconds, s32 microseconds */
    u32 nf = A0 > NS ? NS : A0, sets[3] = {A1, A2, A3};
    fd_set hs[3]; sock_t mx = 0; int any = 0;
    for (int k = 0; k < 3; k++) { FD_ZERO(&hs[k]); if (!sets[k]) continue;
        for (u32 i = 0; i < nf; i++) if (LW(sets[k] + 4 * (i >> 5)) >> (i & 31) & 1) { sock_t s = sk(i); if (s == BADSOCK) continue; FD_SET(s, &hs[k]); if (s > mx) mx = s; any = 1; } }
    struct timeval tv, *tp = 0; long wait_us = -1;
    if (T0) { tv.tv_sec = (long)LW(T0); tv.tv_usec = (long)LW(T0 + 4); tp = &tv; wait_us = tv.tv_sec * 1000000L + tv.tv_usec; }
    int r;
    if (!any) { if (wait_us > 0) { rs_big_unlock(); struct timespec ts = {wait_us / 1000000L, (wait_us % 1000000L) * 1000L}; nanosleep(&ts, 0); rs_big_lock(); } r = 0; }
    else if (wait_us == 0) r = select((int)mx + 1, &hs[0], &hs[1], &hs[2], tp);
    else { rs_big_unlock(); r = select((int)mx + 1, &hs[0], &hs[1], &hs[2], tp); rs_big_lock(); }
    if (r < 0) { V0 = fail(serrno()); return; }
    for (int k = 0; k < 3; k++) { if (!sets[k]) continue;
        for (u32 w = 0; w < (nf + 31) / 32; w++) { u32 bits = 0; for (u32 b = 0; b < 32; b++) { u32 i = w * 32 + b; if (i >= nf) break; sock_t s = sk(i); if (s != BADSOCK && FD_ISSET(s, &hs[k])) bits |= 1u << b; } SW(sets[k] + 4 * w, bits); } }
    V0 = (u32)r; }
static void h_GetErrno(sdkcall_t *c){ V0 = (u32)perr; }
static void h_InetAddr(sdkcall_t *c){ char b[64]; struct in_addr a; V0 = inet_pton(AF_INET, gstr(A0, b, sizeof b), &a) == 1 ? a.s_addr : 0xFFFFFFFFu; }
static void h_InetNtop(sdkcall_t *c){ u32 ad = LW(A1); struct in_addr a; a.s_addr = ad; const char *s = inet_ntoa(a); u32 n = (u32)strlen(s) + 1; if (n > A3) { V0 = 0; return; } gwrite(A2, s, n); V0 = A2; }

/* ------------------------------------------------------------------ access point (always connected) */
static u32 local_ip(void){
    static u32 ip; if (ip) return ip;
    sock_t s = socket(AF_INET, SOCK_DGRAM, 0); struct sockaddr_in a; memset(&a, 0, sizeof a); a.sin_family = AF_INET; a.sin_port = htons(53);
    a.sin_addr.s_addr = server_ip ? server_ip : inet_addr("8.8.8.8");
    if (s != BADSOCK && connect(s, (struct sockaddr *)&a, sizeof a) == 0) { socklen_t l = sizeof a; getsockname(s, (struct sockaddr *)&a, &l); ip = a.sin_addr.s_addr; }
    if (s != BADSOCK) sclose(s);
    if (!ip) ip = htonl(0x7F000001); return ip; }
static u32 ap_handler, ap_arg;
typedef struct { u32 r[2]; float f; } rv3_t;
static void ap_notify(u32 oldst, u32 newst, u32 ev){
    if (!ap_handler) return;
    typedef rv_t (*fn_t)(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);
#ifdef RS_GUEST64
    extern void *rs_fn_native(u32); fn_t f = (fn_t)rs_fn_native(ap_handler);
#else
    fn_t f = (fn_t)(uintptr_t)ap_handler;                                  /* 32-bit: a native address */
#endif
    NLOG("apctl handler %08x: %u -> %u", ap_handler, oldst, newst); f(oldst, newst, ev, 0, ap_arg, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); }
static void h_ApAddHandler(sdkcall_t *c){ ap_handler = A0; ap_arg = A1; V0 = 1; }
static void h_ApDelHandler(sdkcall_t *c){ ap_handler = 0; V0 = 0; }
static void h_ApGetInfo(sdkcall_t *c){
    u8 b[128]; memset(b, 0, sizeof b); u32 n = 64;
    switch (A0) {
    case 0: strcpy((char *)b, "RS Network"); break;                                    /* profile name */
    case 2: strcpy((char *)b, "RS"); break;                                            /* SSID */
    case 3: SW(A1, 2); V0 = 0; return;                                                /* SSID length */
    case 4: SW(A1, 0); V0 = 0; return;                                                /* security */
    case 5: SW(A1, 100); V0 = 0; return;                                              /* signal strength */
    case 6: SW(A1, 11); V0 = 0; return;                                               /* channel */
    case 8: { struct in_addr a; a.s_addr = local_ip(); strcpy((char *)b, inet_ntoa(a)); n = 16; break; }   /* IP address */
    case 9: strcpy((char *)b, "255.255.255.0"); n = 16; break;
    case 10: case 11: case 12: strcpy((char *)b, "0.0.0.0"); n = 16; break;
    default: break; }
    gwrite(A1, b, n); V0 = 0; }

/* the connection dialog: done at once, connected (pspUtilityNetconfData: result at +0x1C) */
static u32 nc_param; static int nc_status;
static void h_NcInit(sdkcall_t *c){ nc_param = A0; nc_status = 1; net_start(); NLOG("netconf start (action %u)", A0 ? LW(A0 + 0x30) : 0); V0 = 0; }
static void h_NcStatus(sdkcall_t *c){
    int s = nc_status;
    if (s == 1) nc_status = 2;
    else if (s == 2) { if (nc_param) SW(nc_param + 0x1C, 0); nc_status = 3; ap_notify(0, 2, 1); ap_notify(2, 3, 2); ap_notify(3, 4, 3); }   /* scanning, joining, got an IP */
    else if (s == 4) nc_status = 0;
    V0 = (u32)s; }
static void h_NcUpdate(sdkcall_t *c){ V0 = 0; }
static void h_NcShutdown(sdkcall_t *c){ nc_status = 4; V0 = 0; }

/* ------------------------------------------------------------------ resolver */
static int is_gamespy(const char *h){ size_t n = strlen(h); return (n >= 12 && !strcmp(h + n - 12, ".gamespy.com")) || !strcmp(h, "gamespy.com"); }
static void h_ResCreate(sdkcall_t *c){ static u32 id = 1; if (A0) SW(A0, id++); V0 = 0; }
static void h_ResNtoA(sdkcall_t *c){
    char h[256]; gstr(A1, h, sizeof h); u32 ip = 0;
    if (is_gamespy(h)) ip = rs_server();
    else { struct addrinfo hi, *r = 0; memset(&hi, 0, sizeof hi); hi.ai_family = AF_INET; rs_big_unlock();
        if (getaddrinfo(h, 0, &hi, &r) == 0 && r) { ip = ((struct sockaddr_in *)r->ai_addr)->sin_addr.s_addr; freeaddrinfo(r); }
        rs_big_lock(); }
    { struct in_addr a; a.s_addr = ip; fprintf(stderr, "[NET] resolve %s -> %s\n", h, ip ? inet_ntoa(a) : "(not found)"); }
    if (!ip) { V0 = 0x80410408u; return; }                       /* SCE_NET_RESOLVER_ERROR_HOST_NOT_FOUND-ish: the game shows "DNS failed" */
    SW(A2, ip); V0 = 0; }

/* MAC address: from the host address (stable per machine) */
static void h_GetEther(sdkcall_t *c){ u32 ip = local_ip(); u8 m[6] = {0x02, 0x52, 0x53, (u8)(ip >> 8), (u8)(ip >> 16), (u8)(ip >> 24)}; gwrite(A0, m, 6); V0 = 0; }
static void h_EtherNtostr(sdkcall_t *c){ char s[18]; u8 m[6]; gread(A0, m, 6); snprintf(s, sizeof s, "%02x:%02x:%02x:%02x:%02x:%02x", m[0], m[1], m[2], m[3], m[4], m[5]); gwrite(A1, s, 18); V0 = 0; }
static void h_EtherStrton(sdkcall_t *c){ char s[32]; unsigned m[6] = {0}; gstr(A0, s, sizeof s); sscanf(s, "%x:%x:%x:%x:%x:%x", &m[0], &m[1], &m[2], &m[3], &m[4], &m[5]); for (int i = 0; i < 6; i++) SB(A1 + i, m[i]); V0 = 0; }

typedef struct { u32 nid; const char *name; void (*fn)(sdkcall_t *); } net_hle_t;
const net_hle_t rs_net_tbl[] = {
 {0x39AF39A6,"sceNetInit",h_NetInit},{0x281928A9,"sceNetTerm",h_Zero},
 {0x17943399,"sceNetInetInit",h_NetInit},{0xA9ED66B9,"sceNetInetTerm",h_Zero},
 {0x8B7B220F,"sceNetInetSocket",h_Socket},{0x8D7284EA,"sceNetInetClose",h_Close},{0x4CFE4E56,"sceNetInetShutdown",h_Shutdown},
 {0x1A33F9AE,"sceNetInetBind",h_Bind},{0xD10A1A7A,"sceNetInetListen",h_Listen},{0x410B34AA,"sceNetInetConnect",h_Connect},{0xDB094E1B,"sceNetInetAccept",h_Accept},
 {0x7AA671BC,"sceNetInetSend",h_Send},{0x05038FC7,"sceNetInetSendto",h_Sendto},{0xCDA85C99,"sceNetInetRecv",h_Recv},{0xC91142E4,"sceNetInetRecvfrom",h_Recvfrom},
 {0x2FE71FE7,"sceNetInetSetsockopt",h_Setsockopt},{0x4A114C7C,"sceNetInetGetsockopt",h_Getsockopt},{0x162E6FD5,"sceNetInetGetsockname",h_Getsockname},
 {0x5BE8D595,"sceNetInetSelect",h_Select},{0xFBABE411,"sceNetInetGetErrno",h_GetErrno},{0xB75D5B0A,"sceNetInetInetAddr",h_InetAddr},{0xD0792666,"sceNetInetInetNtop",h_InetNtop},
 {0xE2F91F9B,"sceNetApctlInit",h_Zero},{0xB3EDD0EC,"sceNetApctlTerm",h_Zero},{0x8ABADD51,"sceNetApctlAddHandler",h_ApAddHandler},{0x5963991B,"sceNetApctlDelHandler",h_ApDelHandler},
 {0x2BEFDF23,"sceNetApctlGetInfo",h_ApGetInfo},
 {0x4DB1E739,"sceUtilityNetconfInitStart",h_NcInit},{0x6332AA39,"sceUtilityNetconfGetStatus",h_NcStatus},{0x91E70E35,"sceUtilityNetconfUpdate",h_NcUpdate},{0xF88155F6,"sceUtilityNetconfShutdownStart",h_NcShutdown},
 {0xF3370E61,"sceNetResolverInit",h_Zero},{0x6138194A,"sceNetResolverTerm",h_Zero},{0x244172AF,"sceNetResolverCreate",h_ResCreate},{0x94523E09,"sceNetResolverDelete",h_Zero},
 {0x224C5F44,"sceNetResolverStartNtoA",h_ResNtoA},
 {0x0BF0A3AE,"sceNetGetLocalEtherAddr",h_GetEther},{0x89360950,"sceNetEtherNtostr",h_EtherNtostr},{0xD27961C9,"sceNetEtherStrton",h_EtherStrton},
 {0xD7763699,"sceWlanGetSwitchState",h_One},{0x090CCB3F,"sceKernelPowerTick",h_Zero},
 {0xE1D621D7,"sceNetAdhocInit",h_Fail},{0xA62C6F57,"sceNetAdhocTerm",h_Zero},{0x6F92741B,"sceNetAdhocPdpCreate",h_Fail},{0x7F27BB5E,"sceNetAdhocPdpDelete",h_Zero},
 {0xDFE53E03,"sceNetAdhocPdpRecv",h_Fail},{0xABED3790,"sceNetAdhocPdpSend",h_Fail},{0xE26F226E,"sceNetAdhocctlInit",h_Fail},{0x9D689E13,"sceNetAdhocctlTerm",h_Zero},
 {0x20B317A0,"sceNetAdhocctlAddHandler",h_Fail},{0x6402490B,"sceNetAdhocctlDelHandler",h_Zero},{0x0AD043ED,"sceNetAdhocctlConnect",h_Fail},{0x34401D65,"sceNetAdhocctlDisconnect",h_Zero},
 {0x81AEE1BE,"sceNetAdhocctlGetScanInfo",h_Fail},{0x75ECD386,"sceNetAdhocctlGetState",h_Fail},
};
const int rs_net_ntbl = (int)(sizeof rs_net_tbl / sizeof rs_net_tbl[0]);
