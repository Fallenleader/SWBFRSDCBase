#!/usr/bin/env python3
"""script_graph.py ERA/LEVEL... : the level script of a level file (ENVS/ERA/LEVEL.PSP), as the game's script runtime reads it.

Prints every script node (unflagged ENTI types with the node base, func 08872328: timers 1, counters 13, FMV 28; and the
selector 11 and music 31 of base 08869BD4) with the groups it fires, and every SMSG group with its messages and what their
targets are (the ENTI type, or '?' when no record has that id).  The record layout is in docs/NATIVE_ENGINE.md (5.4 script).
"""
import struct, sys, os

ROOT = os.environ.get('AK_ENVS', '/home/claude/gd/GAME/PSP_GAME/USRDIR/ENVS')
SLOT = ['act', 'deact', 'succ', 'm2', 'fail']

def chunks(d):
    p = 8
    while p + 16 <= len(d):
        tag = d[p:p + 4]; size, ver, flags = struct.unpack_from('<III', d, p + 4)
        if size < 16: break
        yield tag, ver, flags, d[p + 16:p + size]; p += size

def words(b): return [struct.unpack_from('<I', b, 4 * i)[0] for i in range(len(b) // 4)]

def base_at(w, k):
    """the base block (08869E9C): ver; ver > 2: u32, count, count words; ver >= 5: one more word [assumed]; enabled"""
    ver = w[k]; k += 1
    if ver > 2:
        k += 1; n = w[k]; k += 1 + n
        if ver >= 5: k += 1
    en = w[k] if k < len(w) else 0
    return en & 1, k + 1

def node(w):
    t = w[1] & 0xFFFF
    k = 3 if t == 1 else 2                                  # [assumed] the timer records carry one word before the base
    en, k = base_at(w, k)
    out = {'en': en}
    if t in (1, 13, 28, 35, 36):
        ver = w[k]; k += 1; g = []
        b = b''.join(struct.pack('<I', x) for x in w[k:k + 3])
        for i in range(5 if ver >= 3 else 4): g.append(struct.unpack_from('<h', b, 2 * i)[0])
        k += 3 if ver >= 3 else 2
        out['groups'] = g; out['k'] = k
    else:
        out['k'] = k
    return out

def main():
    for lv in sys.argv[1:]:
        d = open(os.path.join(ROOT, lv + '.PSP'), 'rb').read()
        ents = {}
        for tag, ver, fl, b in chunks(d):
            if tag == b'ENTI' and len(b) >= 8: ents[struct.unpack_from('<I', b, 0)[0]] = words(b)
        print('==== %s: %d records' % (lv, len(ents)))
        for eid, w in sorted(ents.items()):
            t = w[1] & 0xFFFF
            if t not in (1, 11, 13, 28, 31, 35, 36): continue
            n = node(w); k = n['k']; s = '%x type %d en %d' % (eid, t, n['en'])
            if 'groups' in n: s += ' groups ' + ' '.join('%s=%d' % (SLOT[i], g) for i, g in enumerate(n['groups']) if g != -1)
            if t == 1:
                tv = w[k]; s += ' timer v%d %.2f..%.2f flags %x tail %s' % (tv, struct.unpack('<f', struct.pack('<I', w[k + 1]))[0],
                     struct.unpack('<f', struct.pack('<I', w[k + 2]))[0], w[k + 3] if tv >= 3 else 0, [hex(x) for x in w[k + 4:]])
            elif t == 11:
                sv, f, cnt = w[k], w[k + 1], w[k + 2]
                s += ' selector v%d flags %x: ' % (sv, f) + ' '.join('%d%s/%d' % (w[k + 3 + 2 * i] & 0xFFFF, '' if w[k + 3 + 2 * i] & 0x10000 else '(off)', w[k + 4 + 2 * i]) for i in range(cnt))
            elif t == 13:
                cv = w[k]; cnt0 = w[k + 1]; cnt = w[k + 2]; e = []
                for i in range(cnt):
                    h, th, gf = w[k + 3 + 3 * i], w[k + 4 + 3 * i], w[k + 5 + 3 * i]
                    e.append('%x>=%d->g%d f%x' % (h, th, gf & 0xFFFF if gf & 0xFFFF != 0xFFFF else -1, gf >> 16))
                s += ' counter v%d start %d: %s' % (cv, cnt0, ', '.join(e))
            elif t == 31:
                s += ' music list %x flags %x' % (w[k + 1], w[k + 2])
            print(s)
        for tag, ver, fl, b in chunks(d):
            if tag != b'SMSG': continue
            v = ver & 0xFFFF; ng = struct.unpack_from('<I', b, 0)[0]; p = 4; side = 0
            if v >= 2: side = struct.unpack_from('<I', b, 4)[0]; p = 8
            cnt = b[p:p + ng]; p += ng
            msz = 8 + (4 if v >= 3 else 0) + (4 if v > 4 else 0) + (4 if v > 5 else 0)
            print('-- SMSG side %d, %d groups' % (side, ng))
            for g in range(ng):
                for m in range(cnt[g]):
                    ty, ex, tg = struct.unpack_from('<HHI', b, p)
                    rest = struct.unpack_from('<%dI' % ((msz - 8) // 4), b, p + 8)
                    eb = (ex + 3) & ~3; xb = b[p + msz:p + msz + eb]; p += msz + eb
                    tt = ents.get(tg); tn = '%d%s' % (tt[1] & 0x7FFF, 'f' if tt[1] & 0x8000 else '') if tt else '?'
                    dl = struct.unpack('<f', struct.pack('<I', rest[0]))[0] if rest else 0
                    pr = struct.unpack('<f', struct.pack('<I', rest[1]))[0] if len(rest) > 1 else 1
                    print('  g%d: %x -> %x (%s) delay %.2f p %.2f%s%s' % (g + side * 30000, ty, tg, tn, dl, pr,
                          (' w3 %x' % rest[2]) if len(rest) > 2 and rest[2] else '', (' | ' + xb.hex()) if xb else ''))

main()
