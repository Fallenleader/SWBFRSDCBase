/* The 3DS build has no movie decoder yet (the other builds play the movies from MP4s through FFmpeg or the Vita's decoder:
 * platform/common/mpeg.c).  The game's movie calls are answered as mpeg.c answers them when there is no MP4: every movie is empty and
 * the game goes on at once.  Online play (gamespy_ui.c, net.c) is not in this build either: its hooks are empty here. */
#include <string.h>
#include "psp_impl.h"

#define A0 (c->r[4])
#define A1 (c->r[5])
#define A2 (c->r[6])
#define A3 (c->r[7])
#define T0 (c->r[8])
#define T1 (c->r[9])
#define V0 (c->r[2])
#define ERR_NO_DATA 0x80618001u
static u32 ring_addr;

void hm_PsmfSetPsmf(sdkcall_t *c){ V0 = 0; }
void hm_PsmfGetNumberOfSpecificStreams(sdkcall_t *c){ V0 = 1; }
void hm_MpegInit(sdkcall_t *c){ V0 = 0; }
void hm_MpegFinish(sdkcall_t *c){ V0 = 0; }
void hm_MpegQueryMemSize(sdkcall_t *c){ V0 = 0x10000; }
void hm_MpegRingbufferQueryMemSize(sdkcall_t *c){ V0 = A0 * (104 + 2048); }
void hm_MpegRingbufferConstruct(sdkcall_t *c){
    u32 r = A0; ring_addr = r; SW(r, A1); SW(r + 4, 0); SW(r + 8, 0); SW(r + 12, 0); SW(r + 16, 2048); SW(r + 20, A2); SW(r + 24, T0); SW(r + 28, T1);
    SW(r + 32, A2 + A1 * 2048); SW(r + 36, 0); SW(r + 40, 0); V0 = 0; }
void hm_MpegRingbufferDestruct(sdkcall_t *c){ ring_addr = 0; V0 = 0; }
void hm_MpegCreate(sdkcall_t *c){ ring_addr = A3; if (A1) for (int i = 0; i < 8; i++) SB(A1 + (u32)i, (u8)"LIBMPEG"[i]); V0 = 0; }
void hm_MpegDelete(sdkcall_t *c){ V0 = 0; }
void hm_MpegQueryStreamOffset(sdkcall_t *c){ u8 h[16]; for (int i = 0; i < 16; i++) h[i] = LB(A1 + (u32)i);
    SW(A2, memcmp(h, "PSMF", 4) ? 0x800 : ((u32)h[8] << 24 | (u32)h[9] << 16 | (u32)h[10] << 8 | h[11])); V0 = 0; }
void hm_MpegQueryStreamSize(sdkcall_t *c){ SW(A1, 0); V0 = 0; }            /* an empty movie */
void hm_MpegRegistStream(sdkcall_t *c){ V0 = 0x100 + (u32)A1 * 16 + (u32)A2; }
void hm_MpegUnRegistStream(sdkcall_t *c){ V0 = 0; }
void hm_MpegMallocAvcEsBuf(sdkcall_t *c){ V0 = 1; }
void hm_MpegFreeAvcEsBuf(sdkcall_t *c){ V0 = 0; }
void hm_MpegInitAu(sdkcall_t *c){ u32 au = A2; SW(au, 0xFFFFFFFFu); SW(au + 4, 0xFFFFFFFFu); SW(au + 8, 0xFFFFFFFFu); SW(au + 12, 0xFFFFFFFFu); SW(au + 16, A1); SW(au + 20, 0); V0 = 0; }
void hm_MpegQueryAtracEsSize(sdkcall_t *c){ SW(A1, 2112); SW(A2, 8192); V0 = 0; }
void hm_MpegRingbufferAvailableSize(sdkcall_t *c){ u32 n = ring_addr ? LW(ring_addr) : 0x400; if (ring_addr) SW(ring_addr + 12, 0); V0 = n; }
void hm_MpegRingbufferPut(sdkcall_t *c){ V0 = 0; }
void hm_MpegGetAvcAu(sdkcall_t *c){ V0 = ERR_NO_DATA; }
void hm_MpegAvcDecode(sdkcall_t *c){ if (T0) SW(T0, 0); V0 = ERR_NO_DATA; }
void hm_MpegAvcDecodeStop(sdkcall_t *c){ if (T0) SW(T0, 0); V0 = 0; }
void hm_MpegGetAtracAu(sdkcall_t *c){ V0 = ERR_NO_DATA; }
void hm_MpegAtracDecode(sdkcall_t *c){ V0 = ERR_NO_DATA; }

const char *rs_gamespy_patch_file(const char *rel, const char *src){ (void)rel; (void)src; return 0; }
void rs_gs_draw(void){ }
void rs_gs_frame(void){ }
void rs_gs_string_var(u32 name, u32 buf){ (void)name; (void)buf; }
void rs_gs_login(u32 *nick, u32 *email, u32 *pass){ (void)nick; (void)email; (void)pass; }
void rs_gs_register(void){ }
void rs_gs_loaded(void){ }
u32 rs_pad_inject(u32 buttons){ return buttons; }
void rs_oskpanel_draw(void){ }
struct gfx_state_s; int rs_movie_draw(void *st){ (void)st; return 0; }
void rs_movie_note_file(const char *p){ (void)p; }
const struct { u32 nid; void *fn; const char *name; } rs_net_tbl[1]; const int rs_net_ntbl = 0;
