/* Locomotion from animation: a soldier moves as its clips carry it.
 *
 * Traced and measured against the original (tools/harness, Hoth):
 *  - The ground velocity is the root motion of the clips playing: each clip's root channel (its last) is a piecewise-linear path,
 *    so within a key segment the clip moves the body at that segment's constant slope.  The original's measured speed steps every
 *    key (0.067 s) through the run clip's slopes (6.45, 7.59, 6.47, 6.04, 5.96, 5.80, 6.20 m/s) to within 0.5 %.  The anim player
 *    (088155D0) sums its layers' root velocities by layer weight into +0x48 and sets flag 0x80000 (read by 088166EC).
 *  - A clip change crossfades linearly over 0.2 s, the new clip starting at time 0 (the start-up ramp: 1/12 of the run slope more
 *    every frame for 12 frames; letting go: the run fades out the same way while its clip keeps running).
 *  - Playback rate 1: the stick does not scale the speed, it chooses the clip (ak_loco_pick).
 * Aurek precomputes each clip's segment slopes once (ak_root_track) instead of sampling poses every frame. */
#ifndef AK_LOCO_H
#define AK_LOCO_H
#include "assets/model.h"

typedef struct { u32 n; f32 dur; f32 *t; f32 (*v)[2]; } ak_root_track;   /* segment k starts at t[k]; v[k] = (forward, right) m/s */
typedef struct { s32 cur, prev; f32 t, prev_t, w; } ak_loco;            /* clip indices (-1 none), their times, the fade-in weight */

#define AK_LOCO_FADE 0.2f               /* the crossfade (measured: 12 frames at 60 Hz) */

/* one track per clip of the set (tracks[i].n = 0: no root motion) */
ak_root_track *ak_root_tracks_make(const ak_model_set *m, ak_arena *a);
/* a track's velocity at clip time t (wrapped: looping clips) */
void ak_root_track_vel(const ak_root_track *tr, f32 t, f32 out[2]);

void ak_loco_reset(ak_loco *l, s32 clip);
/* switch to a clip: the current one becomes the one fading out, the new one starts at 0 (no change when already playing) */
void ak_loco_play(ak_loco *l, s32 clip);
void ak_loco_advance(ak_loco *l, f32 dt, f32 rate);
/* the blended root velocity (forward, right) in m/s, unscaled */
void ak_loco_vel(const ak_loco *l, const ak_root_track *tracks, f32 out[2]);

/* the soldier's stick, as the game reads it (088FDA34): per axis, a dead zone of 0.25 (the profile's "PSP.Deadzone" default:
 * 0.25 x 128 counts) and the rest rescaled to 0..1 */
f32 ak_loco_stick_axis(f32 v);
/* the clip family for a stick magnitude (measured): below 0.35 stand, below 0.56 walk, else run.  0 / 1 / 2 */
int ak_loco_gait(f32 magnitude);   /* PARITY(1.1c): the two thresholds are measured (to 0.01), not yet found in the code */

#endif
