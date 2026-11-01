"""NAV1: the AI navigation graph of a level (version 13), as the game reads it (func_08829B88) and builds its tree (func_08830014).

    u32 nodes, u32 areas (0 in every level of the game)
    nodes x 20 bytes:  f32 x, y, z (game axes, Y down), f32 radius (the walkable circle, 0.5 .. 6 m),
                       u8 links, u8 0, u16 flags: 0x0100 / 0x0200 / 0x0400 / 0x0800 = closed to vehicle class 1..4
                       (class 1 the largest; soldiers may use every node), low byte: 0..2 (kept from the original when re-baked)
    u32 links, links x 8 bytes (each node's links in node order):  u16 target, u16 flags, f32 cost (the distance)
                       flags 0x0100..0x0800 as the nodes'; 0x0002 a one-way drop of up to ~1.5 m, 0x0006 a higher drop
    the node tree: f32 box[6] (min x, max x, min y, max y, min z, max z) of every node's box (x +- r, y - 2 .. y, z +- r),
                   then nodes - 1 tree nodes x 12 bytes (pre-order): u8 lo[3] (x, y, z), u8 hi[3], u16 left, u16 right, u16 bits
                   per axis a = 0, 1, 2:  ext = (max - min) / 128;  m = min + lo[a] * ext;  M = max - hi[a] * ext
                   bit (1, 2, 4)[a]:      0: left keeps min, right gets m;     1: left gets m, right keeps min
                   bit (8, 16, 32)[a]:    0: left keeps max, right gets M;     1: left gets M, right keeps max
                   0x40 / 0x80: left / right is a graph node (else a tree node)
    then (chunk flags 1 / 4 / 2) optional lists that the game skips; none in the shipped levels.
"""
import struct, math

def f32(x): return struct.unpack('<f', struct.pack('<f', x))[0]
SCALE = 0.0078125

def parse(b):
    n, areas = struct.unpack_from('<2I', b, 0); p = 8
    nodes = []
    for i in range(n):
        x, y, z, r, w = struct.unpack_from('<4fI', b, p); p += 20
        nodes.append({'pos': (x, y, z), 'r': r, 'nlinks': w & 0xFF, 'flags': w >> 16})
    nl = struct.unpack_from('<I', b, p)[0]; p += 4
    links = [struct.unpack_from('<HHf', b, p + 8 * i) for i in range(nl)]; p += 8 * nl
    k = 0
    for nd in nodes: nd['links'] = [{'to': t, 'flags': f, 'cost': c} for t, f, c in links[k:k + nd['nlinks']]]; k += nd['nlinks']
    return {'nodes': nodes, 'areas': areas, 'rest': b[p:]}

def leaf_box(nd):
    x, y, z = nd['pos']; r = nd['r']; return [f32(x - r), f32(x + r), f32(y - 2.0), f32(y), f32(z - r), f32(z + r)]

def _tree(nodes):
    """the node tree, built as the game builds it: surface-area-style split on the axis with the best cost, pre-order"""
    n = len(nodes); boxes = [leaf_box(nd) for nd in nodes]
    if n == 0: return [0.0] * 6, b''
    root = [min(b[0] for b in boxes), max(b[1] for b in boxes), min(b[2] for b in boxes), max(b[3] for b in boxes), min(b[4] for b in boxes), max(b[5] for b in boxes)]
    root = [f32(v) for v in root]
    out = []                                                    # tree nodes: [lo3, hi3, left, right, bits]
    def union(ix):
        return [min(boxes[i][0] for i in ix), max(boxes[i][1] for i in ix), min(boxes[i][2] for i in ix), max(boxes[i][3] for i in ix),
                min(boxes[i][4] for i in ix), max(boxes[i][5] for i in ix)]
    def split(ix):
        best = None
        for ax in range(3):
            s = sorted(ix, key=lambda i: boxes[i][2 * ax] + boxes[i][2 * ax + 1])
            h = len(s) // 2; a, b2 = s[:h], s[h:]
            ua, ub = union(a), union(b2)
            vol = lambda u: max(u[1] - u[0], 1e-3) * max(u[3] - u[2], 1e-3) * max(u[5] - u[4], 1e-3)
            c = vol(ua) + vol(ub)
            if best is None or c < best[0]: best = (c, a, b2, ua, ub)
        return best[1:]
    def enc(parent, lbox, rbox):
        """bytes and bits so that the decoded child boxes contain lbox / rbox (conservative), -> lo, hi, bits, decoded l, r"""
        lo = [0, 0, 0]; hi = [0, 0, 0]; bits = 0; dl = list(parent); dr = list(parent)
        for a in range(3):
            pmin, pmax = parent[2 * a], parent[2 * a + 1]; ext = f32(f32(pmax - pmin) * SCALE)
            # min face: the child whose min is larger gets the moved face
            if lbox[2 * a] > rbox[2 * a]: who, tgt = 1, lbox[2 * a]
            else: who, tgt = 0, rbox[2 * a]
            k = 0
            if ext > 0:
                k = int(min(255, max(0, math.floor((tgt - pmin) / ext))))
                while k > 0 and f32(pmin + f32(k * ext)) > tgt: k -= 1
            v = f32(pmin + f32(k * ext)); lo[a] = k
            if who: bits |= (1, 2, 4)[a]; dl[2 * a] = v
            else: dr[2 * a] = v
            if lbox[2 * a + 1] < rbox[2 * a + 1]: who, tgt = 1, lbox[2 * a + 1]
            else: who, tgt = 0, rbox[2 * a + 1]
            k = 0
            if ext > 0:
                k = int(min(255, max(0, math.floor((pmax - tgt) / ext))))
                while k > 0 and f32(pmax - f32(k * ext)) < tgt: k -= 1
            v = f32(pmax - f32(k * ext)); hi[a] = k
            if who: bits |= (8, 16, 32)[a]; dl[2 * a + 1] = v
            else: dr[2 * a + 1] = v
        return lo, hi, bits, dl, dr
    import sys; sys.setrecursionlimit(100000)
    def build(ix, box):
        me = len(out); out.append(None)
        a, b2, ua, ub = split(ix)
        lo, hi, bits, dl, dr = enc(box, ua, ub)
        if len(a) == 1: bits |= 0x40; left = a[0]
        else: left = len(out); build(a, dl)
        if len(b2) == 1: bits |= 0x80; right = b2[0]
        else: right = len(out); build(b2, dr)
        out[me] = (lo, hi, left, right, bits)
    if n > 1: build(list(range(n)), root)
    body = b''.join(struct.pack('<6BHHH', *(t[0] + t[1]), t[2], t[3], t[4]) for t in out)
    return root, body

def check_tree(nodes, root, body):
    """decode as the game does -> number of graph nodes outside their decoded box (0 = valid), nodes reached"""
    T = [struct.unpack_from('<6BHHH', body, 12 * i) for i in range(len(body) // 12)]
    bad = seen = 0; st = [(0, list(root))] if T else []
    while st:
        i, box = st.pop(); t = T[i]; l = list(box); r = list(box); fl = t[8]
        for a in range(3):
            ext = f32(f32(box[2 * a + 1] - box[2 * a]) * SCALE)
            v = f32(box[2 * a] + f32(t[a] * ext))
            if fl & (1, 2, 4)[a]: l[2 * a] = v
            else: r[2 * a] = v
            v = f32(box[2 * a + 1] - f32(t[3 + a] * ext))
            if fl & (8, 16, 32)[a]: l[2 * a + 1] = v
            else: r[2 * a + 1] = v
        for side, cb in ((0, l), (1, r)):
            c = t[6 + side]
            if fl & (0x40 << side):
                seen += 1; lb = leaf_box(nodes[c])
                if any(lb[2 * a] < cb[2 * a] - 1e-4 or lb[2 * a + 1] > cb[2 * a + 1] + 1e-4 for a in range(3)): bad += 1
            else: st.append((c, cb))
    return bad, seen

def build(nodes):
    """nodes: [{'pos', 'r', 'flags', 'links': [{'to', 'flags', 'cost'}]}] -> NAV1 chunk body (version 13, chunk flags 0)"""
    if len(nodes) > 65535: raise ValueError('more than 65535 navigation nodes')
    out = [struct.pack('<2I', len(nodes), 0)]
    for nd in nodes:
        if len(nd['links']) > 255: nd['links'] = sorted(nd['links'], key=lambda l: l['cost'])[:255]
        x, y, z = nd['pos']
        out.append(struct.pack('<4fBBH', x, y, z, nd['r'], len(nd['links']), 0, nd.get('flags', 0) & 0xFFFF))
    links = [l for nd in nodes for l in nd['links']]
    out.append(struct.pack('<I', len(links)))
    for l in links: out.append(struct.pack('<HHf', l['to'], l['flags'] & 0xFFFE, l['cost']))
    root, tree = _tree(nodes)
    out.append(struct.pack('<6f', *root)); out.append(tree)
    return b''.join(out)
