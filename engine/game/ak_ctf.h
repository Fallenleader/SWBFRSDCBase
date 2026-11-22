/* Aurek - capture the flag (modes 1 CTF1, 2 CTF2, 3 HCTF), as traced from the game (PARITY 5.4):
 *
 *  - Flags: class 0x8019 spawners (ENTI type 25, func 089EFC08; record: after the mode mask {u32 owner, u32 flag side (0, 1;
 *    2 = the neutral flag of one-flag CTF), u32, u32, u8 bots may carry, ...}) keep one flag object (class 0x8018, 089F8238) in
 *    the world: when theirs is gone they make a new one at home, 0.5 m up (089EFF44 -> 089F0064).
 *  - Pickup (089F6658 -> 089F708C / 089F7D9C): a flag nobody carries goes to the first live soldier within 4 m (400 in space) who
 *    may carry it - on foot, not of the flag's side (HCTF: anyone), a bot only if the flag allows it (every shipped flag
 *    does) - and carries no other flag.  In a vehicle: only if its blueprint allows (089D0A8C, property 0xA048A140) - not
 *    read yet, so drivers do not pick flags up.
 *  - Carried: it follows the carrier.  When the carrier can no longer carry it (dead) it drops at his feet, raised by its own
 *    height + 0.1 (089F7B4C), and returns after 30 s (none in the campaign); once it rests inside a kill box the time is cut to
 *    5 s (not read yet: no kill boxes in Aurek).  Returning removes it, and its spawner makes a new one at home.
 *  - Bases: class 0x8017 (ENTI type 23, 089EEFBC; record after the mask: {u32 owner, u32 side, f32 radius}).  Each frame
 *    (089EF220) a carried flag within a base's radius scores for the base's side (089EF760 / 089EF7C8 -> 08973830) and returns
 *    home (089F73C0) when the flag is neutral or not the base's side, the carrier is not of the flag's side, and in CTF1 the
 *    base is the carrier's own.  HCTF: a side's own flag carried by its own side into its own base just goes home (089F7894).
 *  - Winning: the score limit (option +428: 5, 3..20; 089722C4 -> 08C28F54) ends the match (0897392C); the time limit
 *    (60 minutes, 08979DB4) ends it for the side with more captures, else (tickets being unlimited in CTF) a draw (08972964).
 *  - Tickets: unlimited outside conquest and the campaign (08987414 sets -1). */
#ifndef AK_CTF_H
#define AK_CTF_H
#include "core/ak_core.h"
#include "assets/asura.h"

#define AK_CTF_MAX 4
typedef struct { u32 id; f32 home[3]; int side; bool bots; } ak_ctf_flag_def;    /* side: 0, 1, or 2 = neutral */
typedef struct { u32 id; f32 pos[3]; int side; f32 radius; } ak_ctf_base_def;
typedef struct { ak_ctf_flag_def flag[AK_CTF_MAX]; u32 nflags; ak_ctf_base_def base[AK_CTF_MAX]; u32 nbases;
                 f32 drop_raise; } ak_ctf_map;   /* drop_raise: the flag model's height + 0.1 (089F7B4C), set by the caller */

typedef struct { bool present, off; f32 pos[3]; s32 carrier; f32 return_t; } ak_ctf_flag;   /* carrier: soldier index, -1 none; off: switched off by the script (the campaign) */
typedef struct {
    ak_ctf_flag flag[AK_CTF_MAX];
    s32 score[2], limit; f32 time, time_limit; int winner;   /* winner: -1 playing, 0 / 1, 2 draw */
    u32 events;                                              /* the last update's AK_CTF_EV_* bits */
    int last_side;                                           /* the side of the last pickup / capture / drop */
    s32 last_capturer;                                       /* the soldier whose capture it was (its index), -1 none */
    bool base_off[AK_CTF_MAX]; s32 last_flag, last_base;     /* bases switched off by the script; the last pickup's flag, the last capture's base */
} ak_ctf;
enum { AK_CTF_EV_PICKUP = 1, AK_CTF_EV_DROP = 2, AK_CTF_EV_RETURN = 4, AK_CTF_EV_CAPTURE = 8 };

typedef struct { f32 pos[3]; int side; bool alive, bot, on_foot; } ak_ctf_soldier;

bool ak_ctf_load(const ak_level *l, int mode, ak_ctf_map *out);        /* the mode's flags and bases (mode mask) */
void ak_ctf_start(const ak_ctf_map *m, ak_ctf *s);                     /* AK_CTF_CAPTURES / AK_TIME_LIMIT (minutes) set the options */
void ak_ctf_update(const ak_ctf_map *m, ak_ctf *s, int mode, bool space, const ak_ctf_soldier *sol, u32 n, f32 dt);
/* the side holding flag f's carrier, -1 if not carried */
static inline int ak_ctf_carried_by(const ak_ctf *s, const ak_ctf_soldier *sol, u32 f) { return s->flag[f].carrier >= 0 ? sol[s->flag[f].carrier].side : -1; }
#endif
