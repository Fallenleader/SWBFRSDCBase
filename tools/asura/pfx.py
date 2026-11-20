#!/usr/bin/env python3
"""Dump a level's particle effects (FXET effects, FXST systems / emitters, FXPT particle types) following the game's loaders:
   FXPT 0882A2E0 -> 0882A430, FXST 0882A350 -> 0882A890, FXET 0882A3C0 -> 0882ACE0.
   Every chunk starts with u32 hash + the name (zero-terminated, 4-byte steps).  A curve (08AA5868 vec4 / 08AA5A98 float /
   08AA5CD4 vec3): u32 version; version >= 10002: u32, u32 n, n samples; else (old) - see the loaders.
   usage: pfx.py LEVEL.PSP [name filter]"""
import struct, sys

class R:
    def __init__(s, b): s.b = b; s.p = 0
    def u32(s): v = struct.unpack_from('<I', s.b, s.p)[0]; s.p += 4; return v
    def f32(s): v = struct.unpack_from('<f', s.b, s.p)[0]; s.p += 4; return v
    def str(s):
        e = s.b.index(b'\0', s.p); t = s.b[s.p:e].decode('latin1'); s.p += ((e - s.p) // 4 + 1) * 4; return t

def curve(r, width):
    v = r.u32()
    if v >= 10002:
        r.u32(); n = r.u32()
    else:
        raise ValueError('old curve version %d at %#x' % (v, r.p))
    return [tuple(r.f32() for _ in range(width)) if width > 1 else r.f32() for _ in range(n)]

def fxpt(r, ver):
    d = {}
    d['colour'] = curve(r, 4)
    d['c1'] = curve(r, 1); d['c2'] = curve(r, 1); d['c3'] = curve(r, 1)
    n = r.u32(); d['frames'] = [tuple(r.f32() for _ in range(5)) for _ in range(n)]
    # +0x14, +0x15, +0x16, +0x18, +0x19, +0x1B, +0x1A, +0x1C, +0x1D (in the stream's order), then the flags +0x23
    d['w'] = [r.u32() for _ in range(9)]
    d['flags'] = r.u32()
    if ver >= 10: d['w1e'] = (r.f32(), r.f32())
    if ver >= 11: d['w20'] = r.f32()
    if ver >= 12: d['texture'] = r.str()
    if ver >= 13: d['w24'] = r.u32()
    return d

def fxst(r, ver):
    d = {}
    d['a'] = curve(r, 1); d['b'] = curve(r, 3); d['c'] = curve(r, 1); d['d'] = curve(r, 3)
    d['e'] = curve(r, 1); d['f'] = curve(r, 1); d['g'] = curve(r, 1); d['h'] = curve(r, 1)
    d['v3'] = (r.f32(), r.f32(), r.f32())
    d['w'] = [r.u32() for _ in range(13)]
    d['w38'] = r.u32() if ver >= 5 else 0xFFFFFFFF
    d['w39'] = r.u32()
    return d

def fxet(r, ver):
    d = {}
    d['col'] = curve(r, 4); d['f'] = curve(r, 1)
    d['w30'] = r.u32() if ver >= 13 else None
    n = r.u32(); em = []
    for _ in range(n):
        e = {'system': r.u32(), 'pos': (r.f32(), r.f32(), r.f32()), 'm': [r.f32() for _ in range(9)], 'v': (r.f32(), r.f32(), r.f32()), 'w': r.u32()}
        k = r.u32(); x = r.u32(); sz = {1: 6, 2: 1, 3: 3}.get(k, 0)        # the emission shape (088EA38C): kind, a word, then
        e['shape'] = (k, x, tuple(r.f32() for _ in range(sz)))            # 1 a box (6 floats), 2 a sphere (radius), 3 (3 floats)
        e['w2'] = r.u32(); em.append(e)
    d['emitters'] = em
    d['rest'] = r.b[r.p:r.p + 48].hex()
    return d

def main():
    path = sys.argv[1]; flt = sys.argv[2] if len(sys.argv) > 2 else ''
    b = open(path, 'rb').read(); p = 8
    while p + 16 <= len(b):
        tag = b[p:p + 4]; size, ver, fl = struct.unpack_from('<III', b, p + 4)
        if size < 16: break
        if tag in (b'FXPT', b'FXST', b'FXET'):
            r = R(b[p + 16:p + size]); h = r.u32(); name = r.str()
            if flt in name:
                try:
                    d = {b'FXPT': fxpt, b'FXST': fxst, b'FXET': fxet}[tag](r, ver)
                    left = len(r.b) - r.p
                    print(tag.decode(), ver, '%08x' % h, name, 'left %d' % left)
                    for k, v in d.items(): print('   ', k, v if not isinstance(v, list) or len(v) < 12 else v[:12] + ['...'])
                except Exception as e:
                    print(tag.decode(), ver, name, 'STOPPED', e)
        p += size

if __name__ == '__main__': main()
