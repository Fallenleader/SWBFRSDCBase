"""PHEN: the level's collision (traced in the game: loader func_0882B1C4, queries func_088B73C4 / func_08832E1C, ray leaf test
func_088B8190, triangle fetch func_088B4AC4, quad flags func_08AA9C10, contact features func_088B74B0).

  header   u32 objects, vertices, quads, flag entries, material entries (= quads), node units
  objects  52 bytes each: u32 first quad, first vertex, quad count, node count (= quads - 1), f32 bounds (min x, max x, min y,
           max y, min z, max z), u32 first flag entry, first material entry, u16 bits (1: one flag for the whole object, 2: one
           material), u16 0
  vertices f32 x, y, z (game axes: y down), indices are relative to the object's first vertex
  quads    u16 a, b, c, d: triangles (a, b, c) and (c, d, a); d = 0xFFFF: the triangle only
  features u8 per quad: bits 0-3 the perimeter edges ab, bc, cd (ca for a triangle), da, bits 4-7 the corners a, b, c, d that get
           edge / corner contact tests (convex features; each one flagged on one quad only), then zeros to a multiple of 4
  flags    u16: what the quad is ignored by (a query skips a quad whose flags share a bit with its mask):
               1 two-sided (rays hit it from behind too)     2  ignored by queries of mask 2
               4 ignored by every body (soldiers, vehicles): visual detail, hit by shots and sight
               8 ignored by AI sight (line-of-fire rays)       16 terrain under detail (see docs)
               0x0400 / 0x0800 / 0x1000 / 0x2000 / 0x4000 / 0x8000: ignored by one kind of body (0x1000 soldiers)
           (+ bits 2 / 4 / 8 from the material's properties at run time)
  material u16 per quad (or one per object): a surface material index (sounds, effects)
  root     u32 node count (objects - 1), f32 bounds of everything
  nodes    implicit binary trees (node i: children 2i+1, 2i+2; a child >= count is leaf child - count), the top one over the
           objects, then one per object over its quads.  Node i is 6 bytes at (i >> 1) * 12 + (i & 1) * 6: for the left and
           then the right child one signed byte per axis that moves one face of the parent's box inwards by byte / 127 of the
           parent's size on that axis (positive: the min face, negative: the max face).
Python 3."""
import struct, math

SCALE = struct.unpack('<f', struct.pack('<f', 1.0 / 127.0))[0]
def f32(x): return struct.unpack('<f', struct.pack('<f', x))[0]

def parse(b, chunk_flags=0):
    b = bytes(b)
    nobj, nv, nq, nx, nm, nn = struct.unpack_from('<6I', b, 0); p = 24
    objs = []
    for i in range(nobj):
        A, B, n, cnt = struct.unpack_from('<4I', b, p); bb = struct.unpack_from('<6f', b, p + 16); C, M, bits, z = struct.unpack_from('<2I2H', b, p + 40)
        objs.append({'quad0': A, 'vert0': B, 'quads': n, 'nodes': cnt, 'bounds': bb, 'flag0': C, 'mat0': M, 'bits': bits}); p += 52
    verts = [struct.unpack_from('<3f', b, p + 12 * i) for i in range(nv)]; p += 12 * nv
    quads = [struct.unpack_from('<4H', b, p + 8 * i) for i in range(nq)]; p += 8 * nq
    feat = b[p:p + nq]; p += nq; p += (-nq) % 4
    flags = list(struct.unpack_from('<%dH' % nx, b, p)); p += 2 * nx; p += (-2 * nx) % 4
    if chunk_flags & 1: p += 4 * nm
    mats = list(struct.unpack_from('<%dH' % nm, b, p)); p += 2 * nm; p += (-2 * nm) % 4
    root = struct.unpack_from('<I6f', b, p); p += 28
    nodes = b[p:p + 12 * nn]; p += 12 * nn
    return {'objects': objs, 'verts': verts, 'quads': quads, 'features': feat, 'flags': flags, 'mats': mats, 'root': root, 'nodes': nodes, 'rest': b[p:]}

def object_tris(P, o):
    """-> [(quad index in object, triangle 0/1, (va, vb, vc) absolute vertex indices, flag, material)]"""
    out = []
    for k in range(o['quads']):
        a, bb, c, d = P['quads'][o['quad0'] + k]; v = o['vert0']
        fl = P['flags'][o['flag0'] + (0 if o['bits'] & 1 else k)]; mt = P['mats'][o['mat0'] + (0 if o['bits'] & 2 else k)]
        out.append((k, 0, (v + a, v + bb, v + c), fl, mt))
        if d != 0xFFFF: out.append((k, 1, (v + c, v + d, v + a), fl, mt))
    return out

# ------------------------------------------------------------------ building
def _box(pts):
    xs = [p[0] for p in pts]; ys = [p[1] for p in pts]; zs = [p[2] for p in pts]
    return [min(xs), max(xs), min(ys), max(ys), min(zs), max(zs)]

def _leaf_counts(count):
    """leaves under each node of the implicit tree with `count` internal nodes (count + 1 leaves)"""
    memo = {}
    def lc(i):
        if i >= count: return 1
        if i in memo: return memo[i]
        r = lc(2 * i + 1) + lc(2 * i + 2); memo[i] = r; return r
    return lc

def _order(items, count):
    """items: [(centre, box, payload)]; -> payloads in leaf order for the implicit tree, spatially grouped (split on the longest axis)"""
    lc = _leaf_counts(count); out = [None] * (count + 1)
    def place(i, its):
        if i >= count: out[i - count] = its[0][2]; return
        nl = lc(2 * i + 1)
        lo = [min(t[1][2 * a] for t in its) for a in range(3)]; hi = [max(t[1][2 * a + 1] for t in its) for a in range(3)]
        ax = max(range(3), key=lambda a: hi[a] - lo[a])
        its = sorted(its, key=lambda t: t[0][ax])
        place(2 * i + 1, its[:nl]); place(2 * i + 2, its[nl:])
    place(0, list(items)); return out

def _encode_tree(count, root_box, leaf_boxes):
    """-> node bytes for an implicit tree whose leaves (in order) have leaf_boxes; boxes as [minx, maxx, miny, maxy, minz, maxz]"""
    if count == 0: return b''
    nodes = bytearray(((count + 1) >> 1) * 12)
    sub = {}
    def true_box(i):
        if i >= count: return leaf_boxes[i - count]
        if i in sub: return sub[i]
        a, b = true_box(2 * i + 1), true_box(2 * i + 2)
        r = [min(a[0], b[0]), max(a[1], b[1]), min(a[2], b[2]), max(a[3], b[3]), min(a[4], b[4]), max(a[5], b[5])]; sub[i] = r; return r
    def shrink(parent, child):
        """per axis one face moved in (as the game decodes it, float32): bytes and the decoded child box"""
        bs = []; out = list(parent)
        for ax in range(3):
            lo, hi = parent[2 * ax], parent[2 * ax + 1]; ext = f32(f32(hi - lo) * SCALE)
            glo = child[2 * ax] - lo; ghi = hi - child[2 * ax + 1]; byte = 0
            if ext > 0:
                if glo >= ghi:
                    k = int(min(127, max(0, math.floor(glo / ext))))
                    while k > 0 and f32(lo + f32(k * ext)) > child[2 * ax]: k -= 1
                    byte = k; out[2 * ax] = f32(lo + f32(k * ext))
                else:
                    k = int(min(128, max(0, math.floor(ghi / ext))))
                    while k > 0 and f32(hi + f32(-k * ext)) < child[2 * ax + 1]: k -= 1
                    byte = (-k) & 0xFF if k else 0; out[2 * ax + 1] = f32(hi + f32(-k * ext)) if k else hi
            bs.append(byte)
        return bs, out
    def walk(i, box):
        if i >= count: return
        lb, lbox = shrink(box, true_box(2 * i + 1)); rb, rbox = shrink(box, true_box(2 * i + 2))
        o = (i >> 1) * 12 + (i & 1) * 6; nodes[o:o + 6] = bytes(lb + rb)
        walk(2 * i + 1, lbox); walk(2 * i + 2, rbox)
    walk(0, [f32(x) for x in root_box]); return bytes(nodes)

def _features(verts, quads):
    """convex perimeter edges (dihedral over 20 degrees, or open edges of a sharp object) and their corners, each on one quad"""
    def sub(a, b): return (a[0] - b[0], a[1] - b[1], a[2] - b[2])
    def cross(a, b): return (a[1] * b[2] - a[2] * b[1], a[2] * b[0] - a[0] * b[2], a[0] * b[1] - a[1] * b[0])
    def dot(a, b): return a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
    def nrm(t):
        n = cross(sub(verts[t[1]], verts[t[0]]), sub(verts[t[2]], verts[t[0]])); l = math.sqrt(dot(n, n)) or 1.0; return (n[0] / l, n[1] / l, n[2] / l)
    tri_of = {}
    tris = []
    for qi, (a, b, c, d) in enumerate(quads):
        ts = [(a, b, c)] + ([(c, d, a)] if d != 0xFFFF else [])
        for t in ts:
            idx = len(tris); tris.append((qi, t, nrm(t)))
            for j in range(3): tri_of.setdefault(frozenset((t[j], t[(j + 1) % 3])), []).append(idx)
    feat = [0] * len(quads); done_e = set(); done_v = set(); cos20 = math.cos(math.radians(20))
    for qi, (a, b, c, d) in enumerate(quads):
        per = [(a, b), (b, c), (c, d if d != 0xFFFF else a)] + ([(d, a)] if d != 0xFFFF else [])
        for k, (x, y) in enumerate(per):
            key = frozenset((x, y))
            if key in done_e: continue
            ts = tri_of.get(key, [])
            convex = False
            if len(ts) == 2:
                (q1, t1, n1), (q2, t2, n2) = tris[ts[0]], tris[ts[1]]
                opp = [v for v in t2 if v not in key]
                if opp and dot(n1, n2) < cos20 and dot(n1, sub(verts[opp[0]], verts[t1[0]])) < 0: convex = True
            if convex:
                feat[qi] |= 1 << k; done_e.add(key)
                for kk, v in enumerate((a, b, c, d)):
                    if v in (x, y) and v not in done_v: feat[qi] |= 1 << (4 + kk); done_v.add(v)
    return feat

def build(objects):
    """objects: [{'verts': [(x, y, z)] game axes, 'quads': [(a, b, c, d)] local indices (d = 0xFFFF: triangle), 'flags': [u16 per
    quad], 'mats': [u16 per quad]}] -> PHEN chunk body"""
    objects = [o for o in objects if o['quads']]
    if not objects: raise ValueError('no collision geometry')
    # per object: quads ordered for its tree, bounds
    prepared = []
    for o in objects:
        V = o['verts']; n = len(o['quads'])
        items = []
        for k, q in enumerate(o['quads']):
            pts = [V[i] for i in q if i != 0xFFFF]; bx = _box(pts)
            items.append((((bx[0] + bx[1]) / 2, (bx[2] + bx[3]) / 2, (bx[4] + bx[5]) / 2), bx, k))
        order = _order(items, n - 1)
        quads = [o['quads'][k] for k in order]; fl = [o['flags'][k] for k in order]; mt = [o['mats'][k] for k in order]
        lboxes = [[f32(x) for x in items[k][1]] for k in order]
        obox = [f32(x) for x in _box(V)]
        prepared.append({'verts': V, 'quads': quads, 'flags': fl, 'mats': mt, 'box': obox, 'lboxes': lboxes})
    # objects ordered for the top tree
    items = [(((p['box'][0] + p['box'][1]) / 2, (p['box'][2] + p['box'][3]) / 2, (p['box'][4] + p['box'][5]) / 2), p['box'], i) for i, p in enumerate(prepared)]
    prepared = [prepared[i] for i in _order(items, len(prepared) - 1)]
    root_box = [min(p['box'][0] for p in prepared), max(p['box'][1] for p in prepared), min(p['box'][2] for p in prepared),
                max(p['box'][3] for p in prepared), min(p['box'][4] for p in prepared), max(p['box'][5] for p in prepared)]
    top = _encode_tree(len(prepared) - 1, root_box, [p['box'] for p in prepared])
    recs = b''; verts = []; quads = []; feats = []; flags = []; mats = []; trees = b''
    for p in prepared:
        n = len(p['quads']); single_f = len(set(p['flags'])) == 1; single_m = len(set(p['mats'])) == 1
        bits = (1 if single_f else 0) | (2 if single_m else 0)
        recs += struct.pack('<4I6f2I2H', len(quads), len(verts), n, n - 1, *(p['box'] + [len(flags), len(mats), bits, 0]))
        feats += _features(p['verts'], p['quads'])
        verts += p['verts']; quads += p['quads']
        flags += p['flags'][:1] if single_f else p['flags']; mats += p['mats'][:1] if single_m else p['mats']
        trees += _encode_tree(n - 1, p['box'], p['lboxes'])
    units = (len(top) + len(trees)) // 12
    out = struct.pack('<6I', len(prepared), len(verts), len(quads), len(flags), len(mats), units) + recs
    out += b''.join(struct.pack('<3f', *v) for v in verts) + b''.join(struct.pack('<4H', *q) for q in quads)
    out += bytes(feats) + b'\0' * ((-len(feats)) % 4)
    out += struct.pack('<%dH' % len(flags), *flags) + b'\0' * ((-2 * len(flags)) % 4)
    out += struct.pack('<%dH' % len(mats), *mats) + b'\0' * ((-2 * len(mats)) % 4)
    out += struct.pack('<I6f', len(prepared) - 1, *root_box) + top + trees
    return out

def check_tree(nodes, count, root_box, leaf_boxes, base=0):
    """decode as the game does; -> number of leaves whose true box is not inside their decoded box"""
    bad = 0
    def walk(i, box):
        nonlocal bad
        if i >= count:
            lb = leaf_boxes[i - count]
            if any(lb[2 * a] < box[2 * a] - 1e-4 or lb[2 * a + 1] > box[2 * a + 1] + 1e-4 for a in range(3)): bad += 1
            return
        o = base + (i >> 1) * 12 + (i & 1) * 6; bs = struct.unpack_from('<6b', nodes, o)
        ext = [f32(f32(box[2 * a + 1] - box[2 * a]) * SCALE) for a in range(3)]
        for side, sb in ((0, bs[:3]), (1, bs[3:])):
            nb = list(box)
            for a in range(3):
                v = sb[a]
                if v < 0: nb[2 * a + 1] = f32(nb[2 * a + 1] + f32(v * ext[a]))
                else: nb[2 * a] = f32(nb[2 * a] + f32(v * ext[a]))
            walk(2 * i + 1 + side, nb)
    if count == 0:
        lb = leaf_boxes[0]; return 0 if all(lb[2 * a] >= root_box[2 * a] - 1e-4 and lb[2 * a + 1] <= root_box[2 * a + 1] + 1e-4 for a in range(3)) else 1
    walk(0, list(root_box)); return bad

def objects_of(P):
    """parsed PHEN -> the build() input (each object's vertices made local)"""
    out = []
    for o in P['objects']:
        qs = P['quads'][o['quad0']:o['quad0'] + o['quads']]
        used = sorted(set(i for q in qs for i in q if i != 0xFFFF)); nv = (max(used) + 1) if used else 0
        V = P['verts'][o['vert0']:o['vert0'] + nv]
        fl = [P['flags'][o['flag0'] + (0 if o['bits'] & 1 else k)] for k in range(o['quads'])]
        mt = [P['mats'][o['mat0'] + (0 if o['bits'] & 2 else k)] for k in range(o['quads'])]
        out.append({'verts': V, 'quads': list(qs), 'flags': fl, 'mats': mt})
    return out

if __name__ == '__main__':
    # self test on a map file: parse, check the game's trees, rebuild, check the rebuilt trees and the triangle sets
    import sys, os, collections
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    from chunks import chunks
    d = open(sys.argv[1], 'rb').read()
    for p, t, s, v, fl in chunks(d):
        if t != 'PHEN': continue
        P = parse(d[p + 16:p + s], fl)
        def tree_bad(P):
            bad = 0; nodes = P['nodes']; root = P['root']; cnt = root[0]
            boxes = [list(o['bounds']) for o in P['objects']]
            bad += check_tree(nodes, cnt, list(root[1:]), boxes)
            base = ((cnt + 1) >> 1) * 12
            for o in P['objects']:
                lbs = []
                for k in range(o['quads']):
                    q = P['quads'][o['quad0'] + k]; pts = [P['verts'][o['vert0'] + i] for i in q if i != 0xFFFF]; lbs.append(_box(pts))
                bad += check_tree(nodes, o['nodes'], list(o['bounds']), lbs, base); base += ((o['nodes'] + 1) >> 1) * 12
            return bad
        print('original: %d objects, %d quads; leaves outside their node box: %d' % (len(P['objects']), len(P['quads']), tree_bad(P)))
        nb = build(objects_of(P)); P2 = parse(nb)
        print('rebuilt: %d bytes (original %d); leaves outside: %d' % (len(nb), s - 16, tree_bad(P2)))
        def tri_set(P):
            c = collections.Counter()
            for o in P['objects']:
                for k, tt, tri, f, m in object_tris(P, o):
                    pts = [tuple(P['verts'][i]) for i in tri]; j = pts.index(min(pts)); c[(tuple(pts[j:] + pts[:j]), f, m)] += 1
            return c
        print('same triangles, flags and materials:', tri_set(P) == tri_set(P2))
