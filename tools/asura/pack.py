"""Writers for the Asura PSP formats: rigid models, VAG sounds, and rebuilding a container with replaced RSCF resources.
Python 2.7 (Maya 2020) and 3.x."""
from __future__ import print_function
import struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from chunks import chunks
from rscf import rscf

# ------------------------------------------------------------------ rigid models (see model.py for the layout)
def tris_to_strip(tris):
    """Triangle list -> one GE triangle strip.  Greedy: extends the strip while the next triangle shares the last edge with the right
    winding, otherwise joins with degenerate triangles (the GE skips them).  Decoder rule (model.strip_tris): tri k = (s[k], s[k+1], s[k+2]),
    flipped for odd k; degenerate triples are skipped."""
    s = []
    if not tris: return s
    # adjacency: edge (a, b) -> triangles having directed edge a->b
    left = list(tris); used = [False] * len(left); edge = {}
    for i, (a, b, c) in enumerate(left):
        for e in ((a, b), (b, c), (c, a)): edge.setdefault(e, []).append(i)
    def take_next(x, y):
        # we need a triangle whose directed edge is (y, x) seen from the strip parity -> look for directed edge with (x, y) reversed
        for i in edge.get((y, x), ()):
            if not used[i]: return i
        return -1
    for start in range(len(left)):
        if used[start]: continue
        a, b, c = left[start]; used[start] = True
        if s:
            # stitch: repeat last index and the new first index, keep the new triangle on an even position
            s.append(s[-1]); s.append(a)
            if len(s) % 2 == 1: s.append(a)
        s.extend((a, b, c))
        while True:                                  # next triangle shares edge (s[-2], s[-1]); its third vertex extends the strip
            k = len(s) - 2                           # index of the new triangle in the strip
            x, y = s[-2], s[-1]
            # even k: tri = (x, y, z) must be in the mesh as directed edges x->y ; odd k: tri = (y, x, z)
            want = (x, y) if k % 2 == 0 else (y, x)
            nxt = -1
            for i in edge.get(want, ()):
                if not used[i]: nxt = i; break
            if nxt < 0: break
            t = left[nxt]; j = [(t[0], t[1]), (t[1], t[2]), (t[2], t[0])].index(want); z = t[(j + 2) % 3]
            used[nxt] = True; s.append(z)
    return s

def build_rigid(hash_, parts):
    """parts: list of {flags, verts: [(u, v, nx, ny, nz, x, y, z) bone-local], tris: [(a, b, c) indices into verts]} -> resource bytes"""
    allv = []; alli = []; recs = []
    for pt in parts:
        strip = tris_to_strip(pt['tris']) if pt['tris'] else []
        ntri = max(0, len(strip) - 2)
        recs.append((pt.get('flags', 0), ntri, len(allv), len(alli)))
        allv.extend(pt['verts']); alli.extend(strip)
    if len(alli) > 65535 * 8: raise ValueError('model too large')
    out = struct.pack('<4I', hash_, len(parts), len(allv), len(alli))
    for r in recs: out += struct.pack('<4I', *r)
    out += b''.join(struct.pack('<8f', *v) for v in allv)
    out += struct.pack('<%dH' % len(alli), *alli)
    return out

# ------------------------------------------------------------------ VAG (PSP ADPCM) encoder
F = [(0, 0), (60, 0), (115, -52), (98, -55), (122, -60)]
def encode_vag(samples, rate, name='rs'):
    """16-bit mono PCM -> VAGp bytes.  Per 28-sample block it tries every predictor/shift and keeps the least error."""
    out = bytearray()
    s1 = s2 = 0; n = len(samples); pos = 0
    while pos < n:
        blk = list(samples[pos:pos + 28]); blk += [0] * (28 - len(blk)); pos += 28
        best = None
        for pr in range(5):
            c1, c2 = F[pr]
            for sh in range(13):
                t1, t2 = s1, s2; err = 0; nib = []
                for x in blk:
                    p = (t1 * c1 + t2 * c2) >> 6; d = x - p
                    q = int(round(d / float(1 << (12 - sh)))) if sh <= 12 else 0
                    q = -8 if q < -8 else (7 if q > 7 else q)
                    s = ((q << 12) >> sh) + p; s = -32768 if s < -32768 else (32767 if s > 32767 else s)
                    err += (x - s) * (x - s); nib.append(q & 15); t2 = t1; t1 = s
                    if best is not None and err >= best[0]: break
                else:
                    if best is None or err < best[0]: best = (err, pr, sh, nib, t1, t2)
        err, pr, sh, nib, s1, s2 = best
        out.append((pr << 4) | sh); out.append(0)
        for i in range(14): out.append(nib[2 * i] | (nib[2 * i + 1] << 4))
    out += bytearray([0, 7] + [0x77] * 14)                     # end block
    hdr = b'VAGp' + struct.pack('>IIII', 0x20, 0, len(out), rate) + b'\0' * 12 + name.encode('latin1')[:16].ljust(16, b'\0')
    return hdr + bytes(out)
def read_wav(path):
    d = open(path, 'rb').read(); assert d[:4] == b'RIFF' and d[8:12] == b'WAVE', 'not a WAV file'
    p = 12; fmt = None; data = None
    while p + 8 <= len(d):
        t = d[p:p + 4]; n = struct.unpack_from('<I', d, p + 4)[0]; c = d[p + 8:p + 8 + n]; p += 8 + n + (n & 1)
        if t == b'fmt ': fmt = struct.unpack_from('<HHIIHH', c, 0)
        elif t == b'data': data = c
    tag, ch, rate, _, _, bits = fmt; assert tag == 1 and bits == 16, 'need 16-bit PCM WAV'
    s = struct.unpack('<%dh' % (len(data) // 2), data[:len(data) // 2 * 2])
    if ch > 1: s = [sum(s[i:i + ch]) // ch for i in range(0, len(s) - ch + 1, ch)]
    return rate, list(s)

# ------------------------------------------------------------------ containers
def resources(d):
    """name -> (chunk offset, chunk size, chunk version, type, unk, data offset, data size) for every RSCF chunk"""
    out = {}
    for p, t, s, v, fl in chunks(d):
        if t != 'RSCF': continue
        typ, unk, dsz, name, q = rscf(d, p, s, v); out.setdefault(name, []).append((p, s, v, typ, unk, q, dsz))
    return out
def replace(d, new):
    """d: container bytes, new: {resource name: new data bytes} -> new container bytes (every chunk with that name is replaced).
    Chunk sizes stay even (the engine copies resources out, alignment inside the file is free)."""
    out = [d[:8]]; done = set(); last = 8
    for p, t, s, v, fl in chunks(d):
        last = p + s
        if t == 'RSCF':
            typ, unk, dsz, name, q = rscf(d, p, s, v)
            if name in new:
                head = d[p + 16:q]; body = new[name]; size = 16 + len(head) + len(body)
                pad = size & 1; size += pad
                out.append(d[p:p + 4] + struct.pack('<III', size, v, fl) + head[:8] + struct.pack('<I', len(body)) + head[12:] + body + b'\0' * pad)
                done.add(name); continue
        out.append(d[p:p + s])
    out.append(d[last:])
    missing = set(new) - done
    if missing: raise KeyError('not in this file: ' + ', '.join(sorted(missing)))
    return b''.join(out)

if __name__ == '__main__':
    # self test: re-encode every rigid model of a file and check it decodes to the same triangles
    import model
    d = open(sys.argv[1], 'rb').read(); n = 0; bad = 0; newres = {}
    for name, lst in resources(d).items():
        p, s, v, typ, unk, q, dsz = lst[0]
        if typ == 0 and v == 1 and unk == 5:
            m = model.parse(d[q:q + dsz]); parts = []
            for pt in m['parts']:
                tris = model.strip_tris(m['indices'], pt['i0'], pt['tris']); nv = (m['parts'][m['parts'].index(pt) + 1]['v0'] if m['parts'].index(pt) + 1 < len(m['parts']) else len(m['verts'])) - pt['v0']
                parts.append({'flags': pt['flags'], 'verts': m['verts'][pt['v0']:pt['v0'] + nv], 'tris': tris})
            b = build_rigid(m['hash'], parts); m2 = model.parse(b); n += 1
            for a, c in zip(m['parts'], m2['parts']):
                t1 = sorted(tuple(sorted(x)) for x in model.strip_tris(m['indices'], a['i0'], a['tris']))
                t2 = sorted(tuple(sorted(x)) for x in model.strip_tris(m2['indices'], c['i0'], c['tris']))
                if t1 != t2: bad += 1
            newres[name] = b
    d2 = replace(d, newres)
    print('%d models re-encoded, %d part mismatches; container %d -> %d bytes' % (n, bad, len(d), len(d2)))
    assert replace(d, {}) == d, 'identity repack differs'
    print('identity repack OK')
