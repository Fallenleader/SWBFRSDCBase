"""Readable text forms of the map chunks whose layout is known: the same item syntax as textdump.py (so textdump.parse reads them
back), with every field typed and named in a comment.  Chunks not handled here (or whose data does not match the expected layout)
use textdump's generic form.  Python 2.7 and 3.x.

  lines(tag, version, body) -> list of text lines, or None (use the generic form)"""
from __future__ import print_function
import struct
import textdump

class _R(object):
    """sequential reader that writes textdump lines"""
    def __init__(self, b): self.b = bytes(b); self.p = 0; self.out = []
    def left(self): return len(self.b) - self.p
    def note(self, s): self.out.append('# ' + s)
    def blank(self): self.out.append('')
    def u32(self, c=None): v = struct.unpack_from('<I', self.b, self.p)[0]; self.p += 4; self._o('u32 %d' % v, c); return v
    def i32(self, c=None): v = struct.unpack_from('<i', self.b, self.p)[0]; self.p += 4; self._o('i32 %d' % v, c); return v
    def x32(self, c=None): v = struct.unpack_from('<I', self.b, self.p)[0]; self.p += 4; self._o('x32 0x%08x' % v, c); return v
    def f32(self, c=None):
        raw = self.b[self.p:self.p + 4]; v = struct.unpack('<f', raw)[0]; self.p += 4
        s = textdump._fmtf(v) if v == v and abs(v) != float('inf') else None
        if s is None or struct.pack('<f', float(s)) != raw: self._o('x32 0x%08x' % struct.unpack('<I', raw)[0], (c or '') + ' (float bits)')
        else: self._o('f32 %s' % s, c)
        return v
    def str_(self, c=None):
        e = self.b.index(b'\0', self.p); t = self.b[self.p:e].decode('latin1'); n = ((e - self.p + 1) + 3) & ~3
        if any(bytearray(self.b[e:self.p + n])): raise ValueError('string padding not zero')
        self.p += n; self._o('str "%s"' % textdump._esc(t), c); return t
    def rest(self):
        if self.left(): self.note('(rest, layout unknown)'); self.out += textdump.dump(self.b[self.p:]); self.p = len(self.b)
    def _o(self, s, c): self.out.append(s if not c else '%-28s # %s' % (s, c))

def _emod(r, ver):
    r.note('EMOD: the level\'s objects.  Every strip of the level geometry (Env) names the object it belongs to (the object\'s number,')
    r.note('counting from 0); the game culls an object\'s strips with the bounds below (box relative to the position, and radius).')
    r.note('maptool pack widens the bounds of an object whose geometry was edited.  Objects without strips are collision only.')
    n = r.u32('object count'); r.str_('level name')
    for i in range(n):
        r.blank(); r.note('--- object %d' % i)
        r.str_('name'); r.f32('position x'); r.f32('position y (down)'); r.f32('position z')
        for k in range(10): r.u32('flags %d' % k)
        r.i32('flags'); r.u32()
        r.f32('bounds min x'); r.f32('bounds max x'); r.f32('bounds min y'); r.f32('bounds max y'); r.f32('bounds min z'); r.f32('bounds max z')
        r.f32('radius'); r.u32(); r.u32()
    r.rest()

def emod_entries(body):
    """[(name, pos(3), bounds offset in body)] for maptool"""
    b = bytes(body); n = struct.unpack_from('<I', b, 0)[0]; p = 4
    def skip_str(p): e = b.index(b'\0', p); return b[p:e].decode('latin1'), p + (((e - p + 1) + 3) & ~3)
    _, p = skip_str(p); out = []
    for i in range(n):
        name, p = skip_str(p); pos = struct.unpack_from('<3f', b, p); p += 12 + 48
        out.append((name, pos, p)); p += 28 + 8
    return out

def _fog(r, ver):
    r.note('FOG: distance fog'); r.f32('red (0..1)'); r.f32('green'); r.f32('blue'); r.u32()
    r.f32('fog start distance'); r.f32('fog end distance'); r.f32('max density?'); r.u32(); r.f32(); r.f32(); r.rest()

def _skyb(r, ver):
    r.note('SKYB: the sky box'); r.f32('tint red (0..255)'); r.f32('tint green'); r.f32('tint blue'); r.f32(); r.u32()
    for k in range(5): r.str_('sky texture %d (a texture of this map, by name)' % k)
    r.rest()

def _text(r, ver):
    r.note('TEXT: a list of texture names (the materials that follow use them by number, from 0)')
    n = r.u32('count')
    for i in range(n): r.str_('texture %d' % i)
    r.rest()

def _mtrl(r, ver):
    r.note('MTRL: materials (the list of textures before it is what the texture numbers refer to; -1 = none)')
    n = r.u32('count')
    for i in range(n):
        r.note('--- material %d' % i)
        r.i32('texture'); [r.i32('texture %d' % k) for k in range(2, 7)]; r.i32('flags'); r.i32('blend mode'); r.i32()
    r.rest()

def _fnfo(r, ver):
    r.note('FNFO: file information.  The first value is the size of the whole file; maptool pack sets it.')
    r.x32('file size'); r.rest()

def _ttxt(r, ver):
    r.note('TTXT: the map screen'); n = r.u32('count')
    for i in range(n): r.str_('map image'); r.u32(); r.u32(); r.f32(); r.f32(); r.f32('width'); r.f32('height')
    r.rest()

def _hmap(r, ver):
    r.note('hmap: the map screen\'s placement on the level')
    for k in range(6): r.f32()
    r.str_('map image'); r.u32(); r.str_('spawn image'); r.rest()

FORMATS = {'EMOD': _emod, 'FOG ': _fog, 'SKYB': _skyb, 'TEXT': _text, 'MTRL': _mtrl, 'FNFO': _fnfo, 'TTXT': _ttxt, 'hmap': _hmap}

def lines(tag, ver, body):
    f = FORMATS.get(tag)
    if not f: return None
    try:
        r = _R(body); f(r, ver)
        if r.p != len(r.b): return None
    except Exception:
        return None
    if textdump.parse(r.out) != bytes(body): return None                 # only lossless forms
    return r.out

if __name__ == '__main__':
    import sys, os
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    from chunks import chunks
    import collections
    ok = collections.Counter(); bad = collections.Counter()
    for fn in sys.argv[1:]:
        d = open(fn, 'rb').read()
        for p, t, s, v, fl in chunks(d):
            if t in FORMATS:
                (ok if lines(t, v, d[p + 16:p + s]) else bad)[t] += 1
    print('structured', dict(ok)); print('generic fallback', dict(bad))
