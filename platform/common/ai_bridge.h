/* AI bridge (AIAgents branch): the game's bots as seen by tools/aiagents.  The record layout is the wire format (little-endian,
 * packed, version RS_AI_BRIDGE_VERSION); tools/aiagents/rsai/protocol.py mirrors it. */
#ifndef RS_AI_BRIDGE_H
#define RS_AI_BRIDGE_H
#include <stdint.h>
#define RS_AI_BRIDGE_VERSION 3
#pragma pack(push, 1)
struct rs_ai_rec {                /* 112 bytes */
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
    /* v3 */
    uint32_t kit[3];              /* the soldier's weapons (blueprint name hashes, AI object +0xB4 +0xB8 +0xBC): weapon 1, 2, explosive */
    uint32_t fired;               /* the weapon (hash) of its last hit on anyone (damage message +0), 0 none yet */
    uint32_t near_id[3];          /* policy bots: the 3 nearest live enemies (ids, 0 none) */
    uint8_t  near_los[4];         /* 1 = a clear line from eye to eye to near_id[k] (the game's level ray) */
    float    cover[3];            /* policy bots: the nearest point within 8 units hidden from near_id[0] (cover_ok) */
    uint32_t cover_ok;
};
struct rs_ai_evt {                /* 24 bytes: one hit */
    uint32_t target, source;      /* ids */
    float    amount, before, after;   /* damage, the target's health before and after (after <= 0 < before: killed) */
    uint32_t weapon;              /* the weapon / projectile hash */
};
struct rs_ai_veh {                /* 20 bytes: a vehicle */
    float    pos[3];
    uint32_t id;
    int32_t  side;                /* the team of whoever is aboard, -1 empty */
};
struct rs_ai_post {               /* 20 bytes: a command post */
    float    pos[3];
    uint32_t id;
    uint32_t owner;               /* the owning side's team value (as rs_ai_rec.team), 0 = nobody's */
};
struct rs_ai_hdr {                /* 32 bytes, then n records, then n * raw_size bytes, then u32 n_posts + n_posts rs_ai_post,
                                   * then (v3) u32 n_events + rs_ai_evt (hits since the last snapshot), u32 n_vehicles + rs_ai_veh */
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
int rs_ai_events(struct rs_ai_evt *out, int max);
int rs_ai_vehicles(struct rs_ai_veh *out, int max);
int rs_ai_snapshot(struct rs_ai_rec *out, int max, uint8_t *raw, int rawn);
void rs_ai_bridge_frame(void);
#endif
