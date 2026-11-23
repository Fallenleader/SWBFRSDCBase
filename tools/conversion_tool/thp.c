/* PMF -> THP, the GameCube's movie format (the conversion tool's "gc" target).
 *
 * Picture: FFmpeg's command-line tool (found next to the tool or on PATH) decodes the PMF's H.264 and encodes Motion JPEG at
 * 512x384, a 4:3 frame: the 480x272 picture is scaled to the full width keeping its shape (512x290) and letterboxed with black
 * bars, never cropped or stretched.  The JPEGs are rewritten into THP's form: the entropy-coded data without the 0x00 stuffing
 * bytes after 0xFF (FFmpeg's THP decoder copies the scan data raw, libavcodec/mjpegdec.c), and without APPn/COM segments.
 *
 * Sound: the PMF's ATRAC3plus (private stream 1) is decoded with the engine's decoder (ext/at3), lined up with the first picture
 * by the PES timestamps, resampled to 32 kHz by FFmpeg, and DSP-ADPCM encoded (rs_adpcm.c) into one chunk per frame (whole 14-sample
 * ADPCM frames, so the channels follow each other exactly): u32 channel size, u32 samples, the 8 predictor pairs per channel, the history (h1, h2) per channel, then each channel's 8-byte frames.
 *
 * Container (big-endian, libavformat/thp.c): "THP\0", version 1.1, max frame size, max audio samples per frame, fps (float), frame
 * count, first frame size, data size, component offset 0x30, 0, first frame offset, last frame offset; the components (count, 16
 * type bytes, video width/height/type, audio channels/frequency/samples/count); then the frames, each 32-byte aligned: next frame
 * size, previous frame size, video size, audio size, the JPEG, the audio chunk.  The last frame's "next" size is the first frame's. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <sys/stat.h>
#include "vfs.h"
#include "rs_adpcm.h"
#ifdef _WIN32
#include <windows.h>
#include <io.h>
#include <fcntl.h>
#endif

void *rs_at3p_alloc(int ch, int ba); int rs_at3p_decode(void *c, float *l, float *r, int *ns, const unsigned char *buf, int size); void rs_at3p_free(void *c);
void rs_conv_dec_lock(int on);

const char *rs_thp_ffmpeg = "ffmpeg";   /* set by main.c */
int rs_thp_video_kbps = 1500;           /* the game's 36 minutes of movies in about 480 MB: with the rest of the game and its converted sound, the disc (1392 MB) holds it */
#define THP_W 512
#define THP_H 384
#define THP_RATE 32000
#define FPS_NUM 30000
#define FPS_DEN 1001                    /* the PSP movies: 29.97 fps */

static void wbe32(uint8_t *p, uint32_t v){ p[0] = (uint8_t)(v >> 24); p[1] = (uint8_t)(v >> 16); p[2] = (uint8_t)(v >> 8); p[3] = (uint8_t)v; }
static void wbe16(uint8_t *p, uint16_t v){ p[0] = (uint8_t)(v >> 8); p[1] = (uint8_t)v; }
static int64_t rd_pts(const unsigned char *p){ return ((int64_t)(p[0] & 0x0E) << 29) | ((int64_t)p[1] << 22) | ((int64_t)(p[2] & 0xFE) << 14) | ((int64_t)p[3] << 7) | (p[4] >> 1); }

static void put_wav_header(FILE *f, int ch, int rate, uint32_t frames){
    uint8_t h[44]; uint32_t db = frames * (uint32_t)ch * 2; memcpy(h, "RIFF", 4); h[4] = (uint8_t)(36 + db); h[5] = (uint8_t)((36 + db) >> 8); h[6] = (uint8_t)((36 + db) >> 16); h[7] = (uint8_t)((36 + db) >> 24);
    memcpy(h + 8, "WAVEfmt ", 8); uint32_t v[] = {16}; memcpy(h + 16, v, 4); h[20] = 1; h[21] = 0; h[22] = (uint8_t)ch; h[23] = 0;
    uint32_t br = (uint32_t)rate * (uint32_t)ch * 2; memcpy(h + 24, &rate, 4); memcpy(h + 28, &br, 4); h[32] = (uint8_t)(ch * 2); h[33] = 0; h[34] = 16; h[35] = 0;
    memcpy(h + 36, "data", 4); memcpy(h + 40, &db, 4); fseek(f, 0, SEEK_SET); fwrite(h, 1, 44, f); }   /* (little-endian host) */

/* ---- pass 1: the PMF copied out (FFmpeg reads it), its ATRAC3plus decoded to a 44.1 kHz WAV lined up with the first picture */
typedef struct { FILE *wav; void *dec; int ach; unsigned char abuf[2048]; int alen; uint32_t frames; int64_t skip, lead; } aud_t;
static void aud_out(aud_t *a, const float *L, const float *R, int ns){
    int16_t s[4096]; int k = 0;
    for (int i = 0; i < ns; i++) { if (a->skip > 0) { a->skip--; continue; }
        for (int c = 0; c < a->ach; c++) { float v = (c ? R : L)[i] * 32768.0f; s[k++] = (int16_t)(v > 32767 ? 32767 : v < -32768 ? -32768 : v); }
        if (k >= 4096 - 2) { fwrite(s, 2, (size_t)k, a->wav); a->frames += (uint32_t)(k / a->ach); k = 0; } }
    if (k) { fwrite(s, 2, (size_t)k, a->wav); a->frames += (uint32_t)(k / a->ach); } }
static void aud_bytes(aud_t *a, const unsigned char *d, int n){
    for (int i = 0; i < n; i++) {
        a->abuf[a->alen++] = d[i]; if (a->alen < 8) continue;
        if (a->abuf[0] != 0x0F || a->abuf[1] != 0xD0) { memmove(a->abuf, a->abuf + 1, (size_t)--a->alen); continue; }
        int fs = (((a->abuf[2] & 3) << 8) | a->abuf[3]) * 8 + 8;
        if (fs < 16 || fs > (int)sizeof a->abuf - 8) { memmove(a->abuf, a->abuf + 1, (size_t)--a->alen); continue; }
        if (a->alen < fs + 8) continue;
        if (!a->dec) { int ch = (a->abuf[2] >> 2) & 7; a->ach = ch == 1 ? 1 : 2; rs_conv_dec_lock(1); a->dec = rs_at3p_alloc(a->ach, fs); rs_conv_dec_lock(0);
            put_wav_header(a->wav, a->ach, 44100, 0);
            if (a->lead > 0) { float z[1024] = {0}; while (a->lead > 0) { int k = a->lead > 1024 ? 1024 : (int)a->lead; aud_out(a, z, z, k); a->lead -= k; } } }
        float L[2048], R[2048]; int ns = 0;
        if (a->dec && rs_at3p_decode(a->dec, L, R, &ns, a->abuf + 8, fs) < 0) ns = 0;
        if (ns <= 0) { ns = 2048; memset(L, 0, sizeof L); memset(R, 0, sizeof R); }
        aud_out(a, L, R, ns); a->alen = 0; } }

/* the first video and audio timestamps (90 kHz), from the first 4 MB */
static void first_pts(FILE *in, uint32_t off, int64_t *v, int64_t *au){
    *v = *au = -1; unsigned char *b = malloc(4 << 20); if (!b) return; fseek(in, (long)off, SEEK_SET); size_t n = fread(b, 1, 4 << 20, in);
    for (size_t p = 0; p + 14 < n && (*v < 0 || *au < 0); p++) {
        if (!(b[p] == 0 && b[p + 1] == 0 && b[p + 2] == 1)) continue; int sid = b[p + 3];
        if ((sid == 0xE0 || sid == 0xBD) && (b[p + 7] & 0x80) && b[p + 8] >= 5) { int64_t t = rd_pts(b + p + 9);
            if (sid == 0xE0 && *v < 0) *v = t; else if (sid == 0xBD && *au < 0 && b[p + 9 + b[p + 8]] == 0) *au = t; } }
    free(b); }

static int demux_audio(const char *pmf, const char *wav, int *has_audio, int *ach){
    FILE *in = fopen(pmf, "rb"); if (!in) return -1;
    unsigned char hdr[16]; if (fread(hdr, 1, 16, in) != 16 || memcmp(hdr, "PSMF", 4)) { fclose(in); return -2; }
    uint32_t off = ((uint32_t)hdr[8] << 24) | ((uint32_t)hdr[9] << 16) | ((uint32_t)hdr[10] << 8) | hdr[11];
    int64_t vp, ap; first_pts(in, off, &vp, &ap); *has_audio = ap >= 0; if (!*has_audio) { fclose(in); return 0; }
    aud_t a; memset(&a, 0, sizeof a); a.wav = fopen(wav, "wb"); if (!a.wav) { fclose(in); return -4; }
    /* sound that starts after the first picture gets silence in front; sound before it is dropped (44.1 kHz samples) */
    if (vp >= 0) { int64_t d = (ap - vp) * 44100 / 90000; if (d > 0) a.lead = d; else a.skip = -d; }
    enum { CH = 65536 }; unsigned char *buf = malloc(CH * 2); int bl = 0, eof = 0; fseek(in, (long)off, SEEK_SET);
    while (buf) {
        if (!eof && bl < CH) { size_t r = fread(buf + bl, 1, (size_t)(CH * 2 - bl), in); if (r == 0) eof = 1; bl += (int)r; }
        if (bl < 6) break; int p = 0;
        while (p + 6 <= bl) {
            if (!(buf[p] == 0 && buf[p + 1] == 0 && buf[p + 2] == 1)) { p++; continue; }
            int sid = buf[p + 3], need;
            if (sid == 0xBA) { if (p + 14 > bl) break; need = 14 + (buf[p + 13] & 7); if (p + need > bl) break; p += need; continue; }
            if (sid == 0xB9) { p = bl; eof = 1; break; }
            if (sid < 0xBB) { p++; continue; }
            int len = (buf[p + 4] << 8) | buf[p + 5]; need = 6 + len; if (p + need > bl) break;
            if (sid == 0xBD && len >= 3) { int hl = buf[p + 8]; const unsigned char *pay = buf + p + 9 + hl; int pl = len - 3 - hl;
                if (pl > 4 && pay[0] == 0x00) aud_bytes(&a, pay + 4, pl - 4); }
            p += need; }
        memmove(buf, buf + p, (size_t)(bl - p)); bl -= p;
        if (eof && p == 0) break; }
    free(buf); fclose(in);
    if (a.dec) { rs_conv_dec_lock(1); rs_at3p_free(a.dec); rs_conv_dec_lock(0); put_wav_header(a.wav, a.ach, 44100, a.frames); }
    fclose(a.wav); *ach = a.ach ? a.ach : 2; if (!a.dec) *has_audio = 0; return 0; }

/* ---- FFmpeg */
static void q(char *o, size_t n, const char *s){ snprintf(o, n, "\"%s\"", s); }
/* FFmpeg as a child process: its standard output readable through child.out.
 * Windows: started with CreateProcess and an explicit list of the handles it inherits (its stdin, the pipe, stderr).  _popen let the
 * child inherit EVERY inheritable handle - the other workers' open output files among them (the C runtime opens files inheritable) -
 * so while one movie's FFmpeg ran, another worker's finished .part file could not be renamed (error -11). */
typedef struct { FILE *out; void *proc; } child_t;
static int child_start(child_t *c, const char *args){
    memset(c, 0, sizeof *c); char ff[1100]; q(ff, sizeof ff, rs_thp_ffmpeg);
#ifdef _WIN32
    char cmd[6000]; snprintf(cmd, sizeof cmd, "%s %s", ff, args);   /* (per call: the workers start FFmpeg at once; CreateProcess may write to it) */
    SECURITY_ATTRIBUTES sa = { sizeof sa, NULL, TRUE };
    HANDLE rd = NULL, wr = NULL, in = INVALID_HANDLE_VALUE, er = NULL;
    if (!CreatePipe(&rd, &wr, &sa, 1 << 20)) return -1;
    SetHandleInformation(rd, HANDLE_FLAG_INHERIT, 0);
    in = CreateFileA("NUL", GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, &sa, OPEN_EXISTING, 0, NULL);
    HANDLE se = GetStdHandle(STD_ERROR_HANDLE);
    if (!se || se == INVALID_HANDLE_VALUE || !DuplicateHandle(GetCurrentProcess(), se, GetCurrentProcess(), &er, 0, TRUE, DUPLICATE_SAME_ACCESS))
        er = CreateFileA("NUL", GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, &sa, OPEN_EXISTING, 0, NULL);
    HANDLE list[3]; int nl = 0; list[nl++] = wr; if (in != INVALID_HANDLE_VALUE) list[nl++] = in; if (er && er != INVALID_HANDLE_VALUE) list[nl++] = er;
    SIZE_T asz = 0; InitializeProcThreadAttributeList(NULL, 1, 0, &asz);
    LPPROC_THREAD_ATTRIBUTE_LIST al = (LPPROC_THREAD_ATTRIBUTE_LIST)malloc(asz);
    STARTUPINFOEXA si; memset(&si, 0, sizeof si); si.StartupInfo.cb = sizeof si;
    si.StartupInfo.dwFlags = STARTF_USESTDHANDLES; si.StartupInfo.hStdInput = in; si.StartupInfo.hStdOutput = wr; si.StartupInfo.hStdError = er;
    PROCESS_INFORMATION pi; memset(&pi, 0, sizeof pi); BOOL ok = FALSE;
    if (al && InitializeProcThreadAttributeList(al, 1, 0, &asz) && UpdateProcThreadAttribute(al, 0, PROC_THREAD_ATTRIBUTE_HANDLE_LIST, list, (SIZE_T)nl * sizeof(HANDLE), NULL, NULL)) {
        si.lpAttributeList = al;
        ok = CreateProcessA(NULL, cmd, NULL, NULL, TRUE, EXTENDED_STARTUPINFO_PRESENT, NULL, NULL, &si.StartupInfo, &pi);
        DeleteProcThreadAttributeList(al); }
    free(al); CloseHandle(wr); if (in != INVALID_HANDLE_VALUE) CloseHandle(in); if (er && er != INVALID_HANDLE_VALUE) CloseHandle(er);
    if (!ok) { CloseHandle(rd); return -2; }
    CloseHandle(pi.hThread); c->proc = pi.hProcess;
    int fd = _open_osfhandle((intptr_t)rd, _O_RDONLY | _O_BINARY); c->out = fd >= 0 ? _fdopen(fd, "rb") : NULL;
    if (!c->out) { if (fd >= 0) _close(fd); else CloseHandle(rd); }
    return 0;
#else
    char cmd[6000]; snprintf(cmd, sizeof cmd, "%s %s", ff, args);
    c->out = popen(cmd, "r"); return c->out ? 0 : -1;
#endif
}
/* waits for it; its exit code (-1: could not tell) */
static int child_end(child_t *c){
#ifdef _WIN32
    if (c->out) fclose(c->out);
    DWORD code = (DWORD)-1;
    if (c->proc) { WaitForSingleObject((HANDLE)c->proc, INFINITE); GetExitCodeProcess((HANDLE)c->proc, &code); CloseHandle((HANDLE)c->proc); }
    return (int)code;
#else
    return c->out ? pclose(c->out) : -1;
#endif
}
/* a finished file into place; Windows: a scanner or indexer may hold the new file a moment - a few tries */
int rs_conv_rename(const char *from, const char *to){
    for (int i = 0; ; i++) { remove(to); if (!rename(from, to)) return 0;
#ifdef _WIN32
        if (i < 40) { Sleep(250); continue; }
#endif
        return -1; } }

/* a JPEG from FFmpeg -> THP's form; returns the new length (in place) */
static int thp_jpeg(uint8_t *j, int n){
    if (n < 4 || j[0] != 0xFF || j[1] != 0xD8) return -1;
    int r = 2, w = 2;
    while (r + 4 <= n) {
        if (j[r] != 0xFF) return -1; int m = j[r + 1]; if (m == 0xFF) { r++; continue; }
        int len = (j[r + 2] << 8) | j[r + 3]; if (r + 2 + len > n) return -1;
        int keep = !((m >= 0xE0 && m <= 0xEF) || m == 0xFE);
        if (keep) { memmove(j + w, j + r, (size_t)(2 + len)); w += 2 + len; }
        r += 2 + len;
        if (m == 0xDA) {                                                     /* the scan: unstuff up to EOI */
            while (r < n) { uint8_t b = j[r++];
                if (b != 0xFF) { j[w++] = b; continue; }
                if (r >= n) return -1; uint8_t c = j[r];
                if (c == 0x00) { j[w++] = 0xFF; r++; continue; }
                if (c == 0xFF) continue;                                     /* fill byte */
                if (c >= 0xD0 && c <= 0xD7) { j[w++] = 0xFF; j[w++] = c; r++; continue; }
                if (c == 0xD9) { j[w++] = 0xFF; j[w++] = 0xD9; return w; }
                return -1; }
            return -1; } }
    return -1; }

/* the next whole JPEG from the pipe (SOI .. EOI, walking the segments so table bytes are never read as markers) */
typedef struct { FILE *p; uint8_t *b; int len, cap, eof; } pipe_t;
static int fill(pipe_t *s, int need){
    while (s->len < need && !s->eof) { if (s->cap < need + 65536) { s->cap = need + 262144; s->b = realloc(s->b, (size_t)s->cap); }
        size_t r = fread(s->b + s->len, 1, (size_t)(s->cap - s->len), s->p); if (r == 0) s->eof = 1; s->len += (int)r; }
    return s->len >= need; }
static int next_jpeg(pipe_t *s){
    if (!fill(s, 4)) return 0; if (s->b[0] != 0xFF || s->b[1] != 0xD8) return -1;
    int r = 2;
    for (;;) {
        if (!fill(s, r + 4)) return -1; if (s->b[r] != 0xFF) return -1; int m = s->b[r + 1]; if (m == 0xFF) { r++; continue; }
        int len = (s->b[r + 2] << 8) | s->b[r + 3]; r += 2 + len;
        if (m == 0xDA) for (;;) { if (!fill(s, r + 2)) return -1; if (s->b[r] == 0xFF && s->b[r + 1] == 0xD9) return r + 2; r++; } } }

int rs_conv_thp_file(const char *src, const char *tmp, uint64_t *out_size, void (*work)(uint64_t)){
    char pmf[1400], w44[1400], w32[1400]; snprintf(pmf, sizeof pmf, "%s.pmf", tmp); snprintf(w44, sizeof w44, "%s.44.wav", tmp); snprintf(w32, sizeof w32, "%s.32.wav", tmp);
    int rc = 0; uint64_t size = 0; int16_t *pcm = 0;
    { FILE *in = vfs_fopen(src, "rb"), *o = in ? fopen(pmf, "wb") : 0; if (!o) { if (in) fclose(in); return -1; }
      uint8_t *cb = malloc(1 << 20); size_t n; while (cb && (n = fread(cb, 1, 1 << 20, in)) > 0) { fwrite(cb, 1, n, o); size += n; } free(cb); fclose(in); if (fclose(o) || !cb) { remove(pmf); return -4; } }
    work(size / 4);
    int has_audio = 0, ach = 2; rc = demux_audio(pmf, w44, &has_audio, &ach); if (rc) goto out;
    uint32_t nsamp = 0; int16_t coef[2][16];
    if (has_audio) {
        char a[3200], i1[1500], o1[1500]; q(i1, sizeof i1, w44); q(o1, sizeof o1, w32);
        snprintf(a, sizeof a, "-hide_banner -v error -y -i %s -ar %d -c:a pcm_s16le %s", i1, THP_RATE, o1);
        child_t ch; if (child_start(&ch, a) || child_end(&ch) != 0) { fprintf(stderr, "[CONV] FFmpeg could not resample the sound of %s\n", src); rc = -20; goto out; }
        for (int c = 0; c < ach; c++) rs_adp_wav_coefs(w32, c, coef[c]);
        FILE *f = fopen(w32, "rb"); if (!f) { rc = -21; goto out; }
        uint8_t h[12]; fread(h, 1, 12, f);
        for (;;) { uint8_t c[8]; if (fread(c, 1, 8, f) != 8) break; uint32_t l = c[4] | c[5] << 8 | c[6] << 16 | (uint32_t)c[7] << 24;
            if (!memcmp(c, "data", 4)) { nsamp = l / (uint32_t)(2 * ach); pcm = malloc((size_t)nsamp * (size_t)ach * 2 + 64); if (pcm) nsamp = (uint32_t)fread(pcm, (size_t)(2 * ach), nsamp, f); break; }
            fseek(f, (long)(l + (l & 1)), SEEK_CUR); }
        fclose(f); if (!pcm) { rc = -22; goto out; } }
    work(size / 4);

    /* the picture: 4:3 frame, full width, aspect kept, black bars above and below */
    char a[3200], i1[1500]; q(i1, sizeof i1, pmf);
    snprintf(a, sizeof a, "-hide_banner -v error -i %s -an -vf \"scale=%d:-2:flags=lanczos,pad=%d:%d:0:(oh-ih)/2:black,setsar=1\" -r %d/%d "
             "-c:v mjpeg -pix_fmt yuvj420p -b:v %dk -f image2pipe -", i1, THP_W, THP_W, THP_H, FPS_NUM, FPS_DEN, rs_thp_video_kbps);
    /* (an average rate only: the disc budget is the total.  A -maxrate / -bufsize cap made FFmpeg report "rc buffer underflow" on a
     * busy frame it could not squeeze enough - harmless, the frame was still written - and bought nothing) */
    pipe_t s; memset(&s, 0, sizeof s); child_t vch; if (child_start(&vch, a) || !vch.out) { child_end(&vch); rc = -23; goto out; } s.p = vch.out;
    FILE *o = fopen(tmp, "wb"); if (!o) { child_end(&vch); rc = -4; goto out; }
    const uint32_t first_off = 0x60;
    uint8_t hdr[0x60]; memset(hdr, 0, sizeof hdr); fwrite(hdr, 1, sizeof hdr, o);
    uint8_t *prev = 0; int prev_len = 0, prev_cap = 0; uint32_t prev_total = 0, first_size = 0, max_size = 0, max_aud = 0, nframes = 0, last_off = first_off, aud_total = 0;
    uint32_t pos = first_off; int h1[2] = {0, 0}, h2[2] = {0, 0}; uint64_t est = 0;
    uint8_t *fb = 0; int fcap = 0;
    for (;;) {
        int jl = next_jpeg(&s); if (jl == 0) break; if (jl < 0) { rc = -24; break; }
        int tl = thp_jpeg(s.b, jl); if (tl < 0) { rc = -25; memmove(s.b, s.b + jl, (size_t)(s.len - jl)); s.len -= jl; break; }
        /* this frame's sound: samples [i*rate/fps, (i+1)*rate/fps), each end rounded down to whole 14-sample ADPCM frames (1064 or
         * 1078 samples): FFmpeg 6's THP decoder reads the channels back to back and rounds the count down to 14 */
        uint32_t s0 = (uint32_t)((uint64_t)nframes * THP_RATE * FPS_DEN / FPS_NUM) / 14 * 14, s1 = (uint32_t)((uint64_t)(nframes + 1) * THP_RATE * FPS_DEN / FPS_NUM) / 14 * 14, ns = s1 - s0;
        int vlen = (tl + 3) & ~3, alen = 0; uint32_t chsz = (ns + 13) / 14 * 8;
        if (has_audio) alen = 8 + 36 * ach + (int)chsz * ach;
        int hl = has_audio ? 16 : 12, total = (hl + vlen + alen + 31) & ~31;
        if (fcap < total) { fcap = total + 65536; fb = realloc(fb, (size_t)fcap); }
        memset(fb, 0, (size_t)total); wbe32(fb + 4, prev_total); wbe32(fb + 8, (uint32_t)vlen); if (has_audio) wbe32(fb + 12, (uint32_t)alen);
        memcpy(fb + hl, s.b, (size_t)tl);
        if (has_audio) {
            uint8_t *ap = fb + hl + vlen; wbe32(ap, chsz); wbe32(ap + 4, ns);
            for (int c = 0; c < ach; c++) { for (int i = 0; i < 16; i++) wbe16(ap + 8 + c * 32 + i * 2, (uint16_t)coef[c][i]);
                wbe16(ap + 8 + 32 * ach + c * 4, (uint16_t)(int16_t)h1[c]); wbe16(ap + 8 + 32 * ach + c * 4 + 2, (uint16_t)(int16_t)h2[c]); }
            uint8_t *d = ap + 8 + 36 * ach;
            for (int c = 0; c < ach; c++) for (uint32_t k = 0; k < ns; k += 14) {
                int16_t x[14] = {0}; int n = ns - k < 14 ? (int)(ns - k) : 14;
                for (int i = 0; i < n; i++) { uint32_t si = s0 + k + (uint32_t)i; x[i] = si < nsamp ? pcm[(size_t)si * (size_t)ach + (size_t)c] : 0; }
                rs_adp_encode_frame(x, n, coef[c], &h1[c], &h2[c], d + (size_t)c * chsz + k / 14 * 8); }
            aud_total += ns; if (ns > max_aud) max_aud = ns; }
        /* the previous frame is written now that this one's size is known */
        if (prev) { wbe32(prev, (uint32_t)total); fwrite(prev, 1, (size_t)prev_len, o); last_off = pos; pos += (uint32_t)prev_len; }
        else first_size = (uint32_t)total;
        if (prev_cap < total) { prev_cap = total + 65536; prev = realloc(prev, (size_t)prev_cap); }
        memcpy(prev, fb, (size_t)total); prev_len = total; prev_total = (uint32_t)total; if ((uint32_t)total > max_size) max_size = (uint32_t)total; nframes++;
        memmove(s.b, s.b + jl, (size_t)(s.len - jl)); s.len -= jl;
        if (nframes % 64 == 0) { uint64_t e = size / 2 * nframes / (nframes + 900); if (e > est) { work(e - est); est = e; } } }
    int prc = child_end(&vch);
    if (!rc && prc != 0) { fprintf(stderr, "[CONV] FFmpeg failed on the picture of %s (exit %d)\n", src, prc); rc = -26; }
    if (!rc && !nframes) rc = -27;
    if (!rc) { wbe32(prev, first_size); fwrite(prev, 1, (size_t)prev_len, o); last_off = pos; pos += (uint32_t)prev_len;
        memcpy(hdr, "THP\0", 4); wbe32(hdr + 4, 0x00011000); wbe32(hdr + 8, max_size); wbe32(hdr + 12, max_aud);
        float fps = (float)FPS_NUM / FPS_DEN; uint32_t fu; memcpy(&fu, &fps, 4); wbe32(hdr + 16, fu); wbe32(hdr + 20, nframes); wbe32(hdr + 24, first_size);
        wbe32(hdr + 28, pos - first_off); wbe32(hdr + 32, 0x30); wbe32(hdr + 36, 0); wbe32(hdr + 40, first_off); wbe32(hdr + 44, last_off);
        uint8_t *c = hdr + 0x30; wbe32(c, has_audio ? 2 : 1); memset(c + 4, 0xFF, 16); c[4] = 0; if (has_audio) c[5] = 1;
        wbe32(c + 20, THP_W); wbe32(c + 24, THP_H); wbe32(c + 28, 0);                    /* video: width, height, type 0 (progressive) */
        if (has_audio) { wbe32(c + 32, (uint32_t)ach); wbe32(c + 36, THP_RATE); wbe32(c + 40, aud_total); wbe32(c + 44, 1); }   /* [assumed] 4th field: 1 audio track */
        fseek(o, 0, SEEK_SET); fwrite(hdr, 1, sizeof hdr, o); }
    if (fclose(o) && !rc) rc = -4;
    free(prev); free(fb); free(s.b);
    if (!rc) { struct stat st; if (stat(tmp, &st) == 0) *out_size = (uint64_t)st.st_size; else rc = -10;
        fprintf(stderr, "[CONV] %s: %u frames %dx%d, %s\n", src, nframes, THP_W, THP_H, has_audio ? (ach == 1 ? "mono sound" : "stereo sound") : "no sound"); }
    if (size / 2 > est) work(size / 2 - est);
out:
    free(pcm); remove(pmf); if (!getenv("RS_THP_KEEP")) { remove(w44); remove(w32); }   /* (RS_THP_KEEP: the sound's WAVs kept, for checking) */
    return rc; }

/* ---- PMF -> MP4, the Vita movie format (the tool's "vita" target): exactly what the Vita port's own first-start conversion writes
 * (platform/common/convert.c conv_video): the H.264 copied as it is (the PSP's streams are already inside the Vita's limits), the
 * ATRAC3plus decoded here and lined up with the first picture as above, AAC-LC 160 kbit/s 44.1 kHz stereo, the moov box first.
 * FFmpeg's command-line tool does the muxing and the AAC (it cannot read the PMF's ATRAC3plus itself). */
int rs_conv_mp4_file(const char *src, const char *tmp, uint64_t *out_size, void (*work)(uint64_t)){
    char pmf[1400], w44[1400]; snprintf(pmf, sizeof pmf, "%s.pmf", tmp); snprintf(w44, sizeof w44, "%s.44.wav", tmp);
    int rc = 0; uint64_t size = 0;
    { FILE *in = vfs_fopen(src, "rb"), *o = in ? fopen(pmf, "wb") : 0; if (!o) { if (in) fclose(in); return -1; }
      uint8_t *cb = malloc(1 << 20); size_t n; while (cb && (n = fread(cb, 1, 1 << 20, in)) > 0) { fwrite(cb, 1, n, o); size += n; } free(cb); fclose(in); if (fclose(o) || !cb) { remove(pmf); return -4; } }
    work(size / 3);
    int has_audio = 0, ach = 2; rc = demux_audio(pmf, w44, &has_audio, &ach);
    if (!rc) {
        work(size / 3);
        char a[4800], i1[1500], i2[1500], o1[1500]; q(i1, sizeof i1, pmf); q(i2, sizeof i2, w44); q(o1, sizeof o1, tmp);
        if (has_audio) snprintf(a, sizeof a, "-hide_banner -v error -y -fflags +genpts -i %s -i %s -map 0:v:0 -map 1:a:0 -c:v copy -c:a aac -profile:a aac_low -b:a 160k -ar 44100 -ac 2 "
                                "-movflags +faststart -f mp4 %s", i1, i2, o1);
        else snprintf(a, sizeof a, "-hide_banner -v error -y -fflags +genpts -i %s -map 0:v:0 -c:v copy -an -movflags +faststart -f mp4 %s", i1, o1);
        child_t ch; int prc = child_start(&ch, a) ? -1 : child_end(&ch);
        if (prc != 0) { fprintf(stderr, "[CONV] FFmpeg could not write the movie %s (exit %d)\n", src, prc); rc = -26; }
        else { struct stat st; if (stat(tmp, &st) == 0 && st.st_size > 0) *out_size = (uint64_t)st.st_size; else rc = -10; }
        work(size - size / 3 * 2); }
    remove(pmf); if (!getenv("RS_THP_KEEP")) remove(w44);
    return rc; }
