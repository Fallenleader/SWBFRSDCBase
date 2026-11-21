/* Aurek - the level script: SMSG message groups and the script nodes that fire them (PARITY 5.4, traced 2026-11-20).
 *
 * The game's runtime (D_08B29170, funcs 08879DB8 / 0887A040 / 08879BE4):
 *  - SMSG chunks, one per side: side 0 holds groups 0..29999, side 1 30000..59999 (table 0x08AD4B98).  A group is a list of
 *    messages { u16 type, u16 extra size, u32 target entity, f32 delay (version >= 3), f32 probability (version > 4), u32
 *    (version > 5) } then the extra bytes, padded to 4 (loader 088251C4).
 *  - Firing a group sends each message whose probability roll passes (1.0: always; else the game's random number x 2^-31 <= p)
 *    to its target: at once when the delay is 0, else through a queue of 100 pending { group, message, time left, sender }
 *    (08879F28: when full, the one due first goes now) that counts down every frame and sends the expired ones in time order.
 *  - A target is an entity id; small ids (0..11) are the network's special addresses, 0x3E8 the game itself.
 * The script nodes (unflagged ENTI types; base 08869BD4, vtable 08AF6018, handler 08869FCC):
 *  - the base record: version; version > 2: u32, count, count words; version >= 5: one more word [assumed: read from the
 *    records]; then "active" (+0x1C bit 0).  A disabled object (+0x10 bit 0: its mode mask leaves it out) ignores everything.
 *  - messages: 3 activate (if inactive), 4 deactivate (if active), 5 succeed (if active), 10 fail (if active), 2 end
 *    (deactivates).  The node family (08872328, vtable 08AF6718; timers 1, counters 13, FMV 28) has 5 groups (version >= 3;
 *    4 before): [0] fired on activate, [1] deactivate, [2] succeed, [3] end, [4] fail; active nodes test their condition every
 *    frame (088724BC: +0x5C true -> succeed).
 *  - timer (1, 08871DD0 / 08872230): time, time left (version >= 1, else the time), flags (version 3: u8, >= 4: u32; bit 0
 *    repeat, bit 1 stops while the game is paused).  Counts down while active; at 0 it succeeds - a one-shot deactivates (without
 *    its group [1]) and rewinds, a repeating one carries the overshoot (time + fmod).  Activating rewinds it.  Messages 0x2B
 *    {f32} elapsed, 0x2C {f32} a new time, 0x2E pause, 0x2F resume, 0x0E restart.  The timer records carry one word before the
 *    base [assumed] and end with { 0, the mode mask }.
 *  - counter (13, 0886C52C / 0886C8F0): a count (+0x28) and entries { name hash, threshold, u16 group, u16 flags: bit 0 armed,
 *    bit 1 re-arms }.  Succeed adds 1, fail takes 1 (not below 0); 0x30 {u32} sets, 0x56 {s32} adds, 0x0E clears; when the
 *    count rises past a threshold (old < t <= new) an armed entry fires its group, and is disarmed unless it re-arms.
 *    0x31 / 0x32 {hash} arm / disarm an entry, 0x33 {hash, threshold} moves one.
 *  - selector (11, 08870630 / 08870D50): flags (bit 0 a weighted random pick, bit 3 in turn, else every armed entry; bit 1 an
 *    entry disarms when it fires; bit 2 a random delay in [min, max]), entries { u16 group | 0x10000 armed, weight }.  Succeed
 *    picks.  6 / 7 {index} arm / disarm.
 *  - music (31, 0886F34C / 0886F41C): succeed plays a list (see ak_audio.c), reported to the caller.
 *  - FMV (28): succeed plays fmv/<name>.pmf (08A69C54) - reported, not played. */
#ifndef AK_SCRIPT_H
#define AK_SCRIPT_H
#include "core/ak_core.h"
#include "assets/asura.h"

typedef struct { u16 type, nextra; u32 target; f32 delay, prob; const u8 *extra; } ak_smsg;

enum { AK_SN_TIMER = 1, AK_SN_SELECTOR = 11, AK_SN_COUNTER = 13, AK_SN_FMV = 28, AK_SN_MUSIC = 31 };
typedef struct {
    u32 id; u16 type; bool active, disabled, node; s16 group[5];
    f32 time, left; u32 tflags;                                          /* timer */
    u32 sflags, n, next; u32 *ent; f32 *wait; f32 dmin, dmax;           /* selector: ent = { group | flags, weight } x n */
    s32 count; u32 *cnt;                                                 /* counter: cnt = { hash, threshold, group | flags << 16 } x n */
    u32 list, mflags;                                                    /* music */
} ak_snode;

#define AK_SCRIPT_QUEUE 100
typedef struct {
    struct { ak_smsg *msg; u32 *first; u8 *count; u32 ngroups; } side[2];
    ak_snode *node; u32 nnodes;
    struct { u16 group, msg; f32 t; u32 sender; } q[AK_SCRIPT_QUEUE]; u32 nq;
    struct { const ak_smsg *m; u32 sender; } now[256]; u32 nnow, head, depth;        /* sent this frame, not yet handled */
    u32 rng[2];                                                          /* the game's random numbers (D_08B25AC0 / C4) */
    u32 sent, dropped;                                                   /* tests */
} ak_script;

/* what the script sends to anything that is not one of its own nodes (and the music / FMV nodes' plays: target = the node,
 * type = 5, node set) */
typedef struct { u16 type; u32 target, sender; const u8 *extra; u32 nextra; const ak_snode *node; } ak_script_msg;
typedef void (*ak_script_sink)(void *user, const ak_script_msg *m);

/* reads the level's script; nodes whose mode mask leaves out `mode` (0..5) are disabled */
bool ak_script_load(const ak_level *l, int mode, u32 seed, ak_arena *a, ak_script *out);
/* one frame: the timers and selectors count down, the queue sends what is due; `paused` stops the timers that stop */
void ak_script_update(ak_script *s, f32 dt, bool paused, ak_script_sink sink, void *user);
/* fire a group (as an object of the level does), then handle what it sends */
void ak_script_fire(ak_script *s, s32 group, u32 sender, ak_script_sink sink, void *user);
/* send one message to a node (as the game does to script objects) */
void ak_script_send(ak_script *s, u16 type, u32 target, const u8 *extra, u32 nextra, ak_script_sink sink, void *user);
/* An object's event table (08874D30, read by every script-aware object's base: version; version > 2: u32, count, count x
 * { u16 event, u16 group }; the record's base sits at word `at` - posts 4, placed walkers 2): when the game raises an event on the
 * object (0887514C) every entry with that event fires its group.  Events found (the raisers): 10000 a post is captured, 10001 it
 * goes neutral, 10002 / 10003 captured by team 1 / 2 (089ECDE4); 10005 - 10007 a walker spawner (0897E7B4, 0897F230: its walker
 * is destroyed, 0897FDE0: a new one made); 10004 a CTF capture, 10009 / 10010 / 10012 objectives, 10011, 10013 / 10015 vehicle
 * spawns, 10014 turrets.  Reads the record with that id; returns the entries (event | group << 16). */
u32 ak_script_events(const ak_level *l, u32 id, u32 at, u32 *out, u32 max);
void ak_script_raise(ak_script *s, const u32 *ev, u32 nev, u32 event, u32 sender, ak_script_sink sink, void *user);
const ak_snode *ak_script_node(const ak_script *s, u32 id);
#endif
