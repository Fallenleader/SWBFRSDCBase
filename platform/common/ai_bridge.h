/* AI bridge (AIAgents branch): the game's bots as seen by tools/aiagents.  The record layout is the wire format (little-endian,
 * packed, version RS_AI_BRIDGE_VERSION); tools/aiagents/rsai/protocol.py mirrors it. */
#ifndef RS_AI_BRIDGE_H
#define RS_AI_BRIDGE_H
#include <stdint.h>
#define RS_AI_BRIDGE_VERSION 2
#pragma pack(push, 1)
struct rs_ai_rec {                /* 64 bytes */
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
    float    health;              /* the soldier sub-object's +0x28; <= 0 dead */
    uint32_t policy;              /* 1: under the trainer's control (a squad of its own, sent where the trainer says) */
};
struct rs_ai_post {               /* 20 bytes: a command post */
    float    pos[3];
    uint32_t id;
    uint32_t owner;               /* the owning side's team value (as rs_ai_rec.team), 0 = nobody's */
};
struct rs_ai_hdr {                /* 32 bytes, then n records, then n * raw_size bytes, then u32 n_posts + n_posts rs_ai_post */
    char     magic[4];            /* "RSAI" */
    uint32_t version;
    uint32_t frame;               /* game frames since start (pad reads) */
    float    time_s;              /* seconds since the bridge connected */
    uint32_t n;
    uint32_t rec_size;            /* sizeof(struct rs_ai_rec) */
    uint32_t raw_size;            /* RS_AI_BRIDGE_RAW bytes of each AI object (0 = none) */
    uint32_t caps;                /* bit 0: actions are applied to the game (RS_AI_BRIDGE_CONTROL=1) */
};
struct rs_ai_act {                /* the trainer's reply (RS_AI_BRIDGE_SYNC=1): "RSAA", u32 n, then n of these */
    uint32_t id;
    uint32_t action;              /* index into the action set (tools/aiagents/rsai/spaces.py; for the log only) */
    float    param[4];            /* param[0..2]: the destination (x, y, z); param[3]: 1 = go there, 0 = no change */
};
#pragma pack(pop)
int rs_ai_command(uint32_t id, int kind, const float *dest);
void rs_ai_release_all(void);
int rs_ai_posts(struct rs_ai_post *out, int max);
int rs_ai_snapshot(struct rs_ai_rec *out, int max, uint8_t *raw, int rawn);
void rs_ai_bridge_frame(void);
#endif
