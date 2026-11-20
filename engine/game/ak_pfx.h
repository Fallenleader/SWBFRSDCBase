/* Aurek - particle effects (the game's PFX: FXET effects, FXST particle systems, FXPT particle types, read from the level file).
 *
 * The data and the rules follow the game (PARITY_TASKS R.6): loaders 0882A2E0 / 0882A350 / 0882A3C0, spawn 088E6E9C, the
 * particle step 088E6638, motion 088E2DDC, the draw 0891589C.  Particles live in the game's axes (Y down) and are turned into
 * engine axes (x, -y, -z) when drawn.  An effect is played at a position and orientation; each of its emitters runs its system
 * for the system's duration, and the effect ends when every emitter is done and its last particle has died.
 *
 * Drawing: one camera-facing quad (two triangles) per particle, textured from the level's \specialfx\partclfx.tga sheet; the
 * particle type's kind picks the blending (1 alpha, 5 additive - 0890D108). */
#ifndef AK_PFX_H
#define AK_PFX_H
#include "../core/ak_core.h"
#include "../assets/asura.h"

typedef struct { u32 n; u8 width; const u8 *v; } ak_pfx_curve;        /* n evenly spaced samples over [0, 1], width floats each */

typedef struct {
    u32 hash; const char *name;
    ak_pfx_curve colour, size, spin, size_rand;   /* RGBA over life; c1 the size; c2 the turn; c3 how much a random shrinks it */
    f32 uv[4];                                    /* the first texture cell (u0, v0, u1, v1) */
    s32 kind;                                     /* +0x50: the blending (1 alpha, 5 additive, ...) */
    f32 life, life_spread;                        /* +0x54, +0x58 (flags 0x20000) */
    u32 flags;                                    /* +0x8C */
} ak_pfx_type;

typedef struct {
    u32 hash; const char *name;
    ak_pfx_curve a, b, c, d, e, f, g, h;          /* speed, angle (x pi), speed spread, angle spread, rate, spawn chance, gravity, noise */
    f32 grav[3];                                  /* +0xA0 */
    f32 duration, drag, time_scale, inherit, noise;   /* +0xB0, +0xB4, +0xC4, +0xC8, +0xCC */
    u32 limit;                                    /* +0xDC */
    u32 flags;                                    /* +0xE4 */
    const ak_pfx_type *type;
} ak_pfx_system;

typedef struct {
    const ak_pfx_system *sys;
    f32 pos[3], m[9];                             /* in the effect's frame, game axes; m row-major */
    u32 shape, shape_flags; f32 sh[6];            /* 1 box (min/max per axis), 2 sphere (radius), 3 ellipsoid (radii); flags 1 = on the surface */
} ak_pfx_emitter_def;

typedef struct { u32 hash; const char *name; ak_pfx_emitter_def *em; u32 nem; } ak_pfx_effect;

typedef struct {
    ak_pfx_effect *fx; u32 nfx;
    ak_pfx_system *sys; u32 nsys;
    ak_pfx_type *type; u32 ntype;
} ak_pfx_lib;

bool ak_pfx_lib_load(const ak_blob *level, ak_arena *a, ak_pfx_lib *out);
s32  ak_pfx_find(const ak_pfx_lib *l, const char *name);       /* -1 = none; case-insensitive */

/* ---- the running effects */
enum { AK_PFX_MAX_EFFECTS = 256, AK_PFX_MAX_EMITTERS = 1024, AK_PFX_MAX_PARTICLES = 2048 };
typedef struct { f32 pos[3], vel[3], age, life, rnd, turn0; u16 em; u16 alive; } ak_pfx_particle;   /* turn0: the starting turn (0..1) */
typedef struct {
    s16 effect; u16 nlive;                        /* effect index in the pool (-1 free) */
    f32 t, acc; bool burst_done;
    const ak_pfx_emitter_def *def;
} ak_pfx_emitter;
typedef struct {
    const ak_pfx_effect *fx; bool alive;
    f32 M[12];                                    /* the effect's frame, game axes: 3x3 rows + position (column 3) */
    f32 vel[3]; f32 scale;
    u16 first_em, nem;
    u16 gen; bool held;                           /* held: its emitters start over instead of ending (an effect on a moving object) */
    f32 tint[3];                                  /* multiplies its particles' colour (the draw's colour argument, 088E6CD4: a weapon's muzzle flash takes its bolt's colour) */
} ak_pfx_instance;
typedef struct {
    const ak_pfx_lib *lib;
    ak_pfx_instance fx[AK_PFX_MAX_EFFECTS];
    ak_pfx_emitter em[AK_PFX_MAX_EMITTERS];
    ak_pfx_particle p[AK_PFX_MAX_PARTICLES]; u32 np;
    u32 rng[2];
    u32 played, dropped, dropped_particles;
    f32 colour_k;                                 /* vertex colour = curve x this (255 / the renderer's colour doubling: the game draws them x1) */
} ak_pfx_world;

void ak_pfx_world_init(ak_pfx_world *w, const ak_pfx_lib *lib);
/* play effect `fx` at pos (engine axes) facing along `fwd` (engine axes, NULL = the effect's own frame, as an explosion on the
 * ground); returns a handle or -1 */
s32  ak_pfx_play(ak_pfx_world *w, s32 fx, const f32 *pos, const f32 *fwd);
void ak_pfx_update(ak_pfx_world *w, f32 dt);
/* an effect that rides an object: play it with ak_pfx_play, then every frame ak_pfx_follow (the handle's frame and velocity, engine
 * axes; held = keep emitting); ak_pfx_follow(.., false) lets it finish.  Returns false once the handle is gone. */
bool ak_pfx_follow(ak_pfx_world *w, s32 handle, const f32 *pos, const f32 *fwd, const f32 *vel, bool held);
void ak_pfx_tint(ak_pfx_world *w, s32 handle, const f32 *rgb);
/* the particles as triangles (6 vertices each, engine axes), facing the camera (right / up vectors), in the game's drawing order:
 * particle type by type in the level's order (088E9398), each type a run of one blending; returns the vertex count, runs in `run`
 * (first vertex, count, additive) */
typedef struct { u32 first, count; bool additive; } ak_pfx_run;
u32  ak_pfx_vertices(const ak_pfx_world *w, const f32 *right, const f32 *up, ak_vtx *out, u32 cap, ak_pfx_run *run, u32 max_runs, u32 *nruns);
u32  ak_pfx_live(const ak_pfx_world *w);

#endif
