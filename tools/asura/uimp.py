#!/usr/bin/env python3
"""UIMP (front-end menu page) reader, after the game's own loaders.

A .GUI file is an Asura chunk file; each UIMP chunk is one menu page: a widget tree.  The stream reads are little-endian
words, floats, bytes and strings (a string takes its length + 1 rounded up to 4 bytes: 0882DD88 reads 4 bytes at a time until
one holds the 0).  Every widget is written as a header {u32 family, u32 type} (08888918) and then its class's load method
(vtable slot 21).  Traced loaders:
  base widget 08888454 (version 11): u32 version, str name, f32 rgba[4], f32 pos[3], u32 id, u32 flags, u32 n + n x {u32, u32},
      u32, u32, u32, u32, u32, anim block (0887EA90), u32 n2 + n2 x item (08886218), u32 n3 + n3 x item (0887D79C)
  children 08888AB4: u32 count, then count widgets
  1001 image 08880AD4: base, u32 version, f32 w, f32 h (08880268), f32 uv[4], u32 texture hash, str texture, children
  page (type 1, 08885040): base, f32 w, f32 h, children, ...
  2xxx button family base 0888CFE8: base, u32 version, u32 links[4], (version != 0) bool
"""
import struct, sys


class Stream:
    def __init__(self, data, pos=0):
        self.d = data; self.p = pos

    def u32(self):
        v = struct.unpack_from('<I', self.d, self.p)[0]; self.p += 4; return v

    def f32(self):
        v = struct.unpack_from('<f', self.d, self.p)[0]; self.p += 4; return v

    def u16(self):
        v = struct.unpack_from('<H', self.d, self.p)[0]; self.p += 2; return v

    def u8(self):
        v = self.d[self.p]; self.p += 1; return v

    def str(self):
        s = bytearray()
        while True:
            w = self.d[self.p:self.p + 4]; self.p += 4
            if len(w) < 4: raise EOFError('string past the end')
            if 0 in w:
                s += w[:w.index(0)]; return s.decode('latin-1')
            s += w


class Unknown(Exception):
    pass


def anim_rec(s):            # 0887E588: u32 0, (0887E318: u32 0, str), str, u32
    v = s.u32()
    if v != 0: return None
    v2 = s.u32()
    if v2 != 0: return None
    a = s.str(); b = s.str(); c = s.u32()
    return (a, b, c)


def anim_block(s):          # 0887EA90: u32 version (0), u32, u32 count, count x 0887E588
    v = s.u32()
    if v != 0: return None
    x = s.u32(); n = s.u32()
    return {'x': x, 'recs': [anim_rec(s) for _ in range(n)]}


def prop(s):                # 08886218: u32 version (0), u32, u32, u32 kind, then the value by kind
    v = s.u32()
    if v != 0: raise Unknown('prop version %d at %#x' % (v, s.p - 4))
    a = s.u32(); b = s.u32(); k = s.u32()
    if k in (0, 2): val = s.u32()
    elif k == 1: val = None
    elif k == 3: val = s.f32()
    elif k in (4, 8): val = [s.f32() for _ in range(4)]
    elif k == 5: val = [s.f32() for _ in range(3)]
    elif k == 6: n = s.u32(); val = ''.join(chr(s.u16()) for _ in range(n))
    elif k == 7: n = s.u32(); val = bytes(s.u8() for _ in range(n))
    elif k == 9: val = s.str()
    else: raise Unknown('prop kind %d at %#x' % (k, s.p - 4))
    return (a, b, k, val)


def anim_ref(s):            # 0887D79C: u32 version (< 2), str (a UIAN animation's name), f32, (version >= 1) 4 bytes skipped
    v = s.u32()
    if v >= 2: raise Unknown('anim ref version %d at %#x' % (v, s.p - 4))
    r = (s.str(), s.f32())
    if v >= 1: s.p += 4
    return r


def base(s, w):
    w['version'] = ver = s.u32()
    if ver != 11: raise Unknown('base version %d at %#x' % (ver, s.p - 4))
    w['name'] = s.str()
    w['rgba'] = [s.f32() for _ in range(4)]
    w['pos'] = [s.f32() for _ in range(3)]
    w['id'] = s.u32(); w['flags'] = s.u32()
    n = s.u32(); w['pairs'] = [(s.u32(), s.u32()) for _ in range(n)]
    w['b96'] = s.u32()
    w['b276'] = (s.u32(), s.u32())
    w['b284'] = (s.u32(), s.u32())
    w['anim'] = anim_block(s)
    n2 = s.u32(); w['props'] = [prop(s) for _ in range(n2)]
    n3 = s.u32(); w['anims'] = [anim_ref(s) for _ in range(n3)]


def children(s, w):
    n = s.u32(); w['children'] = [widget(s) for _ in range(n)]


def load_image(s, w):       # 08880AD4
    image_base(s, w)
    w['uv'] = [s.f32() for _ in range(4)]
    w['tex_hash'] = s.u32(); w['tex'] = s.str()
    children(s, w)


def load_page(s, w):        # 08885040 (partly)
    base(s, w)
    w['size'] = (s.f32(), s.f32())
    children(s, w)
    v = w['family']
    w['p_n'] = s.u32()
    if v >= 1: w['p_str'] = s.str()
    if v >= 2: w['p_u32'] = s.u32()
    if v >= 3: w['on_open'] = action(s); w['on_close'] = action(s)
    if v >= 4: w['p_u32b'] = s.u32()


def load_button_base(s, w): # 0888CFE8
    base(s, w)
    v = s.u32(); w['version2'] = v
    w['links'] = [s.u32() for _ in range(4)]
    if v: w['b153'] = s.u8()


def action(s):              # 0887DF60: u32 version (0), str, str
    v = s.u32()
    if v != 0: raise Unknown('action version %d at %#x' % (v, s.p - 4))
    return (s.str(), s.str())


def action_list(s):         # 0887F000: u32 version (0), u32 count, count x {u32, action}
    v = s.u32()
    if v != 0: raise Unknown('action list version %d at %#x' % (v, s.p - 4))
    n = s.u32()
    return [(s.u32(), action(s)) for _ in range(n)]


def load_button(s, w):      # 2001, 0888D850 (the class version is the header's first word)
    load_button_base(s, w)
    children(s, w)
    w['b180'] = s.u32(); w['b176'] = s.u32()
    v = w['family']
    if v == 1: w['actions'] = [(0, action(s))]
    elif v >= 2: w['actions'] = action_list(s)
    if v >= 3: w['b192'] = (s.f32(), s.f32())


def image_base(s, w):       # 08880268: base, u32 version, f32 w, f32 h
    base(s, w)
    w['version2'] = s.u32(); w['size'] = (s.f32(), s.f32())


def load_text(s, w):        # 1002, 08883974 (class version 7)
    v = w['family']
    image_base(s, w)
    if v < 6: raise Unknown('text version %d at %#x' % (v, s.p))
    w['text_id'] = s.u32()
    w['n'] = s.u32()
    w['font'] = s.str()
    w['t200'] = s.f32()
    if v >= 3: w['t204'] = s.u32()
    if v >= 5: w['t208'] = s.f32()
    if v >= 7: w['t216'] = s.f32()
    children(s, w)


def named(s):               # 0887E318: u32 version (0), str
    v = s.u32()
    if v != 0: raise Unknown('name version %d at %#x' % (v, s.p - 4))
    return s.str()


def load_textbox(s, w):     # 2004, 088943B0
    v = w['family']
    load_button_base(s, w)
    children(s, w)
    w['x0'] = s.u32()
    if v: w['x4'] = s.u32()
    if v >= 3: w['b196'] = s.u8()
    if v >= 4: w['b197'] = s.u8()
    if v >= 2: w['binding'] = named(s)


def load_plain_button(s, w):   # 2006, 0888E028: button base, children
    load_button_base(s, w); children(s, w)


def load_button2002(s, w):  # 2002, 0888DE48: button base, children, (version >= 1) a name
    load_button_base(s, w); children(s, w)
    if w['family'] >= 1: w['binding'] = named(s)


def load_slider(s, w):      # 2005, 08895EA0
    v = w['family']
    load_button_base(s, w); children(s, w)
    w['range'] = (s.f32(), s.f32()); w['s264'] = s.u32(); w['s268'] = s.u32(); w['s_str'] = s.str()
    if v >= 1: w['s300'] = s.u32()
    if v >= 2: w['actions'] = action_list(s)
    if v >= 3: w['s320'] = action(s)
    if v >= 4: w['s272'] = (s.u32(), s.u32()); w['s212'] = [s.f32() for _ in range(5)]
    if v >= 5: w['s188'] = (s.f32(), s.f32())
    if v >= 6: w['s296'] = s.f32()


def load_sprite_list(s, w):    # 1005, 0888271C: image base, str, f32, u32, name, u32 n, n x frame, children
    v = w['family']
    image_base(s, w)
    w['tex'] = s.str(); w['f'] = s.f32(); w['u'] = s.u32(); w['binding'] = named(s)
    n = s.u32(); fr = []
    for _ in range(n):
        a = s.u32(); b = s.u32(); c = s.u32() if v >= 1 else 0; d = s.u32()
        fr.append((a, b, c, d, [s.f32() for _ in range(4)]))
    w['frames'] = fr
    children(s, w)


def load_spinner(s, w):     # 2003, 08893AF4: button base, children, u32, (v >= 1) f32, u32, u32, (v >= 2) name
    v = w['family']
    load_button_base(s, w); children(s, w)
    w['n'] = s.u32()
    if v >= 1: w['sp'] = (s.f32(), s.u32(), s.u32())
    if v >= 2: w['binding'] = named(s)


def load_list(s, w):        # 2010 / 2012, 0888FD8C: a list box with a row template
    v = w['family']
    load_button_base(s, w); children(s, w)
    w['l'] = (s.f32(), s.f32(), s.u32(), s.u32())
    w['actions'] = action_list(s)
    t = {'family': s.u32(), 'type': s.u32()}
    load_button_base(s, t); children(s, t)
    w['template'] = t
    if v >= 1:
        w['row_actions'] = [((s.u32() if v >= 2 else c['id']), action(s)) for c in t['children']]
    w['l188'] = (s.f32(), s.f32())
    if v >= 3: w['l421'] = s.u8()


def path_block(s):          # 08AA5CD4: a point list (version 10002: u32, u32 n, n x vec3; older: a skipped table first)
    v = s.u32()
    if v >= 10002:
        x = s.u32()
    else:
        if v >= 10000: x = s.u32(); skip = (x << 4) + (12 if v >= 10001 else 0)
        else: x = v; skip = x << 4
        s.p += skip
    n = s.u32()
    return [(s.f32(), s.f32(), s.f32()) for _ in range(n)]


def load_path_image(s, w):  # 1003, 08881D4C: image base, point list, children
    image_base(s, w); w['points'] = path_block(s); children(s, w)


def load_model(s, w):       # 1004, 0887F958: a 3D model in the page
    v = w['family']
    image_base(s, w)
    if v == 0:
        m = s.u32(); w['model'] = (m, s.u32(), s.u32()) if m else (0, 0, 0)
    else:
        w['model'] = (s.u32(), s.u32(), s.u32())
    w['m176'] = (s.f32(), s.f32())
    w['m184'] = [s.f32() for _ in range(3)]; w['m196'] = [s.f32() for _ in range(3)]
    if v >= 2: w['m208'] = [s.f32() for _ in range(3)]
    if v >= 3: w['m_b'] = s.u8()
    children(s, w)


def load_scrollbar(s, w):   # 2009, 0889181C
    v = w['family']
    load_button_base(s, w); children(s, w)
    w['sb'] = [s.f32() for _ in range(8)]
    w['sb_u'] = [s.u32() for _ in range(5)]
    if v >= 1: w['binding'] = named(s)
    if v >= 2: w['sb188'] = (s.f32(), s.f32())
    if v >= 3: w['sb260'] = s.u32()


LOADERS = {1: load_page, 2009: load_scrollbar, 1004: load_model, 1003: load_path_image, 2010: load_list, 2012: load_list, 2003: load_spinner, 1005: load_sprite_list, 2002: load_button2002, 2005: load_slider, 2006: load_plain_button, 2004: load_textbox, 1001: load_image, 1002: load_text, 2001: load_button}


def widget(s):
    fam = s.u32(); ty = s.u32()
    w = {'family': fam, 'type': ty, 'at': s.p - 8}
    f = LOADERS.get(ty)
    if not f: raise Unknown('type %d (family %d) at %#x' % (ty, fam, s.p - 8))
    f(s, w)
    return w


def chunks(path):
    d = open(path, 'rb').read(); p = 8 if d[:8] == b'Asura   ' else 0
    while p + 16 <= len(d):
        tag = d[p:p + 4]; size, ver, fl = struct.unpack_from('<III', d, p + 4)
        if size < 16: break
        yield tag, ver, d[p + 16:p + size]
        p += size


def page(body):
    s = Stream(body)
    return widget(s), s


if __name__ == '__main__':
    for path in sys.argv[1:]:
        for tag, ver, body in chunks(path):
            if tag != b'UIMP': continue
            try:
                w, s = page(body)
                print(path, w['name'], 'ok', s.p, len(body))
            except Unknown as e:
                print(path, len(body), 'stopped:', e)


def dump(w, depth=0, out=sys.stdout):
    keys = [k for k in w if k not in ('children', 'template', 'family', 'type', 'name', 'at', 'version', 'anim')]
    out.write('%s%d/%d %s %s\n' % ('  ' * depth, w['type'], w['family'], w.get('name'), ' '.join('%s=%s' % (k, w[k]) for k in keys if w[k] not in (None, [], (), 0))))
    for c in w.get('children', []): dump(c, depth + 1, out)
    if 'template' in w: dump(w['template'], depth + 1, out)
