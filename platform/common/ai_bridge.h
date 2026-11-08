/* AI bridge (AIAgents branch): the game's bots as seen by tools/aiagents.  The record layout is the wire format (little-endian,
 * packed, version RS_AI_BRIDGE_VERSION); tools/aiagents/rsai/protocol.py mirrors it. */
#ifndef RS_AI_BRIDGE_H
#define RS_AI_BRIDGE_H
#include <stdint.h>
#define RS_AI_BRIDGE_VERSION 1
#pragma pack(push, 1)
struct rs_ai_rec {                /* 56 bytes */
    uint32_t id;                  /* the soldier's object id (stable for the match) */
    uint32_t obj;                 /* the AI object's guest address */
    uint32_t team;                /* AI object +12 */
    uint32_t alive;               /* AI object +5 && +0x40 */
    float    pos[3];              /* world position (the soldier's own, through its sub-object's virtual) */
    int32_t  goal;                /* the current goal's type (behaviour +0xC -> +10); < 0 none */
    uint32_t squad_order;         /* the squad's order (squad +0x4C), 0 without a squad */
    uint32_t squad_post;          /* the command post the squad is sent to (squad +0x3C), 999 none */
    uint32_t has_squad;
    uint32_t vehicle;             /* +0xF8: non-zero aboard a vehicle */
    uint32_t ctl;                 /* +0x54 */
    uint32_t flags;               /* +0xC8 (bit 0x20: taken out of its squad) */
};
struct rs_ai_hdr {                /* 32 bytes, then n records, then n * raw_size bytes */
    char     magic[4];            /* "RSAI" */
    uint32_t version;
    uint32_t frame;               /* game frames since start (pad reads) */
    float    time_s;              /* seconds since the bridge connected */
    uint32_t n;
    uint32_t rec_size;            /* sizeof(struct rs_ai_rec) */
    uint32_t raw_size;            /* RS_AI_BRIDGE_RAW bytes of each AI object (0 = none) */
    uint32_t caps;                /* bit 0: actions are applied to the game (not yet: 0) */
};
struct rs_ai_act {                /* the trainer's reply (RS_AI_BRIDGE_SYNC=1): "RSAA", u32 n, then n of these */
    uint32_t id;
    uint32_t action;              /* index into the action set (tools/aiagents/rsai/spaces.py) */
    float    param[4];
};
#pragma pack(pop)
int rs_ai_snapshot(struct rs_ai_rec *out, int max, uint8_t *raw, int rawn);
void rs_ai_bridge_frame(void);
#endif
