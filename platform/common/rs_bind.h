#pragma once
#include "psp_impl.h"
/* Binding one of the game's calls straight to a handler written against the game's register block (native code that has not been
 * given a typed interface yet): no emulated dispatch.  mkglue.py skips the calls bound this way. */
u64 rs_bind_begin(sdkcall_t *c, int *slot, const char *name); void rs_bind_end(int slot, u64 t0);
#define RS_BIND_BODY(name, fn) static int s_ = -1; sdkcall_t c; c.r[2] = 0; c.r[3] = 0; c.r[4] = a0; c.r[5] = a1; c.r[6] = a2; c.r[7] = a3; \
    c.r[8] = t0; c.r[9] = t1; c.r[10] = t2; c.r[11] = t3; c.r[31] = 0; c.thread = 0; u64 b_ = rs_bind_begin(&c, &s_, #name); fn(&c); rs_bind_end(s_, b_);
#define RS_BIND(name, fn) u32 psp_##name(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3){ RS_BIND_BODY(name, fn) return c.r[2]; }
#define RS_BIND64(name, fn) u64 psp_##name(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3){ RS_BIND_BODY(name, fn) return (u64)c.r[2] | ((u64)c.r[3] << 32); }
