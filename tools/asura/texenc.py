"""RGBA image -> Asura PSP texture resource (the inverse of texture.py): a 16- or 256-colour palette with alpha, the pixel levels
PSP-swizzled, smaller mip levels made by averaging 2x2 blocks.  An image that already has no more colours than the palette holds
keeps them exactly (so an unedited texture comes back bit for bit); otherwise the palette is chosen by median cut and refined
(k-means), all four channels counted.  Uses numpy when it is installed (much faster), plain Python otherwise.

  encode(w, h, rgba, bpp=8, mips=0, header=None) -> resource bytes
      header: the original's 8 header bytes (keeps the two bytes the tools do not know); width, height, format and mips are set."""
from __future__ import print_function
import struct
try:
    import numpy as np
except ImportError:
    np = None

def swizzle(data, width_bytes, height):
    data = bytearray(data); out = bytearray(len(data)); bw = width_bytes // 16; i = 0
    for by in range(height // 8):
        for bx in range(bw):
            for row in range(8):
                o = (by * 8 + row) * width_bytes + bx * 16
                out[i:i + 16] = data[o:o + 16]; i += 16
    return out

def _downsample(w, h, px):
    nw, nh = max(1, w // 2), max(1, h // 2); out = bytearray(nw * nh * 4)
    for y in range(nh):
        for x in range(nw):
            for c in range(4):
                s = 0; k = 0
                for dy in (0, 1):
                    for dx in (0, 1):
                        xx, yy = min(w - 1, 2 * x + dx), min(h - 1, 2 * y + dy); s += px[(yy * w + xx) * 4 + c]; k += 1
                out[(y * nw + x) * 4 + c] = (s + k // 2) // k
    return nw, nh, out

def _median_cut(colors, n):
    """colors: list of ((r, g, b, a), count) -> up to n palette entries"""
    boxes = [colors]
    while len(boxes) < n:
        best = None
        for i, b in enumerate(boxes):
            if len(b) < 2: continue
            rng = [max(c[0][k] for c in b) - min(c[0][k] for c in b) for k in range(4)]
            k = max(range(4), key=lambda j: rng[j]); score = rng[k] * sum(c[1] for c in b)
            if best is None or score > best[0]: best = (score, i, k)
        if best is None or best[0] == 0: break
        _, i, k = best; b = sorted(boxes.pop(i), key=lambda c: c[0][k])
        tot = sum(c[1] for c in b); acc = 0; cut = 1
        for j, c in enumerate(b):
            acc += c[1]
            if acc * 2 >= tot: cut = max(1, min(len(b) - 1, j + 1)); break
        boxes += [b[:cut], b[cut:]]
    pal = []
    for b in boxes:
        t = float(sum(c[1] for c in b)); pal.append(tuple(int(round(sum(c[0][k] * c[1] for c in b) / t)) for k in range(4)))
    return pal

def _nearest_py(pal):
    cache = {}
    def f(c):
        r = cache.get(c)
        if r is None:
            r = min(range(len(pal)), key=lambda i: sum((pal[i][k] - c[k]) ** 2 for k in range(4))); cache[c] = r
        return r
    return f

def palette_for(w, h, rgba, n):
    px = [tuple(rgba[i:i + 4]) for i in range(0, w * h * 4, 4)]
    counts = {}
    for c in px: counts[c] = counts.get(c, 0) + 1
    if len(counts) <= n: return sorted(counts, key=lambda c: -counts[c])
    if np is not None:
        cols = np.array(list(counts.keys()), dtype=np.float64); wts = np.array(list(counts.values()), dtype=np.float64)
        pal = np.array(_median_cut(list(zip([tuple(int(x) for x in c) for c in cols], wts)), n), dtype=np.float64)
        for _ in range(6):                                                                  # k-means refinement
            idx = _np_nearest(pal, cols)
            for i in range(len(pal)):
                m = idx == i
                if m.any(): pal[i] = (cols[m] * wts[m][:, None]).sum(0) / wts[m].sum()
        return [tuple(int(round(min(255, max(0, v)))) for v in p) for p in pal]
    return _median_cut(list(counts.items()), n)

def _np_nearest(pal, cols):
    out = np.empty(len(cols), dtype=np.int64)
    for s in range(0, len(cols), 4096):
        c = cols[s:s + 4096]; d = ((c[:, None, :] - pal[None, :, :]) ** 2).sum(2); out[s:s + 4096] = d.argmin(1)
    return out

def _indices(w, h, rgba, pal):
    if np is not None:
        a = np.frombuffer(bytes(rgba[:w * h * 4]), dtype=np.uint8).reshape(-1, 4).astype(np.float64)
        u, inv = np.unique(a, axis=0, return_inverse=True)
        return list(_np_nearest(np.array(pal, dtype=np.float64), u)[inv.reshape(-1)])
    f = _nearest_py(pal)
    exact = dict((c, i) for i, c in enumerate(pal))
    return [exact.get(tuple(rgba[i:i + 4]), None) if tuple(rgba[i:i + 4]) in exact else f(tuple(rgba[i:i + 4])) for i in range(0, w * h * 4, 4)]

def encode(w, h, rgba, bpp=8, mips=0, header=None, palette=None):
    if w & (w - 1) or h & (h - 1): raise ValueError('texture size must be powers of two (got %dx%d)' % (w, h))
    n = 1 << bpp; rgba = bytearray(rgba)
    pal = list(palette) if palette else palette_for(w, h, rgba, n)
    pal = pal + [(0, 0, 0, 0)] * (n - len(pal))
    exact = dict((c, i) for i, c in reversed(list(enumerate(pal))))
    hb = bytearray(header[:8]) if header else bytearray(8)
    struct.pack_into('<HH', hb, 0, w, h); hb[4] = hb[4] if header else 0; hb[6] = {4: 4, 8: 5}[bpp]; hb[7] = mips
    out = bytearray(hb); lw, lh, cur = w, h, rgba
    for m in range(mips + 1):
        idx = [exact.get(tuple(cur[i:i + 4])) for i in range(0, lw * lh * 4, 4)]
        if any(v is None for v in idx): idx = _indices(lw, lh, cur, pal)
        if bpp == 8: raw = bytearray(idx)
        else: raw = bytearray((idx[i] & 15) | ((idx[i + 1] & 15) << 4) for i in range(0, len(idx) - 1, 2)) if len(idx) > 1 else bytearray([idx[0] & 15])
        wb = lw * bpp // 8
        if wb >= 16 and lh >= 8: raw = swizzle(raw, wb, lh)
        out += raw
        if m < mips: lw, lh, cur = _downsample(lw, lh, cur)
    for c in pal: out += bytearray(c)
    return bytes(out)

if __name__ == '__main__':
    # self test: every texture of a map file decodes, re-encodes from its own pixels (same palette) to the same bytes
    import sys, os
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    from chunks import chunks; from rscf import rscf; import texture
    d = open(sys.argv[1], 'rb').read(); n = same = 0
    for p, t, s, v, fl in chunks(d):
        if t != 'RSCF': continue
        typ, unk, dsz, name, q = rscf(d, p, s, v)
        if typ != 2: continue
        blob = d[q:q + dsz]; tx = texture.parse(blob); w, hh, px = texture.to_rgba(tx); n += 1
        # mips are averaged, not the originals: compare level 0 + palette by re-encoding with mips=0 against a mips-0 copy
        sz0 = texture.level_sizes(tx['width'], tx['height'], tx['bpp'], tx['mips'])[0][2]
        e = encode(w, hh, px, tx['bpp'], 0, blob[:8], tx['palette'])
        if e[8:8 + sz0] == blob[8:8 + sz0] and e[-4 * (1 << tx['bpp']):] == blob[tx['size'] - 4 * (1 << tx['bpp']):tx['size']]: same += 1
        else: print('differs', name)
    print('%d textures, %d level 0 + palette identical' % (n, same))
