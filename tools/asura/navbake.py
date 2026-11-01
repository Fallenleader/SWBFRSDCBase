"""Bakes a level's AI navigation graph (NAV1, nav.py) from its collision (the col_ meshes / PHEN objects), as the shipped levels have it:
walkable circles (nodes, radius 0.5 .. 6 m) covering every place a soldier can stand, linked where a soldier can walk straight from one
to the next, closed to the vehicle classes that do not fit, and one-way links where a soldier can drop down a ledge.

Steps (numpy):
  1. a 1 m grid over the level; in each cell every surface a soldier can stand on (a collision triangle that blocks soldiers, sloped
     less than MAX_SLOPE, with HEADROOM of free space above it)
  2. neighbouring surfaces are joined when the step between them is at most STEP and no wall stands between them
  3. clearance: the distance from each surface to the nearest edge of the walkable area
  4. nodes: circles placed greedily, widest first, until every surface is covered; radius = clearance (0.5 .. 6 m)
  5. links: nodes whose circles touch and that are joined by a nearly straight walkable path; the narrowest clearance along it decides
     which vehicle classes may use it; drop links from ledges to surfaces 0.6 .. 4 m below
"""
import math, heapq, collections
import numpy as np

CELL = 1.0
STEP = 0.6            # highest step a soldier climbs (m)
HEADROOM = 1.8        # free height a soldier needs
MAX_SLOPE = 50.0      # steepest walkable slope (degrees)
DROP_MIN, DROP_MAX = 0.6, 4.0
R_MIN, R_MAX = 0.5, 6.0
SOLDIER_MASK = 0x1004 # the "ignored by" bits a soldier's body test skips: polygons with these bits are no walls to a soldier
FLOOR_SKIP = 0x8002   # polygons with these bits are no floor (the invisible hull boxes, the level's edge)
EDGE_BIT = 0x8000     # the level's edge box: nothing is baked outside it
# clearance (m) each vehicle class needs (class 1 = 0x0100 the largest); measured on the shipped levels (calibrate())
CLASS_CLEAR = {0x0100: 14.0, 0x0200: 6.5, 0x0400: 3.5, 0x0800: 2.0}
MIN_AREA = 150       # walkable areas smaller than this (m2: roofs, crates) are left out
REACH = 4.0          # a node stands for the surfaces within its radius + REACH (m)

def triangles(objects):
    """phen.build-style objects -> (A, B, C arrays of corners, is-wall bool array, is-floor bool array, playable box or None)"""
    A = []; B = []; C = []; wall = []; floor = []; edge = []
    for o in objects:
        V = o['verts']
        for q, f in zip(o['quads'], o['flags']):
            for t in ((q[0], q[1], q[2]),) + (((q[2], q[3], q[0]),) if q[3] != 0xFFFF else ()):
                A.append(V[t[0]]); B.append(V[t[1]]); C.append(V[t[2]]); wall.append((f & SOLDIER_MASK) == 0); floor.append((f & FLOOR_SKIP) == 0)
                if f & EDGE_BIT: edge += [V[i] for i in t]
    box = None
    if edge: E = np.array(edge); box = (E[:, 0].min(), E[:, 0].max(), E[:, 2].min(), E[:, 2].max())
    return np.array(A, np.float64), np.array(B, np.float64), np.array(C, np.float64), np.array(wall, bool), np.array(floor, bool), box

class Grid:
    def __init__(self, A, B, C, wall, floor, box=None, log=print):
        use = wall | floor
        if box is not None:                                                        # inside the level's edge only
            cx = (A[:, 0] + B[:, 0] + C[:, 0]) / 3; cz = (A[:, 2] + B[:, 2] + C[:, 2]) / 3
            use &= (cx >= box[0] - 2) & (cx <= box[1] + 2) & (cz >= box[2] - 2) & (cz <= box[3] + 2)
        self.A, self.B, self.C = A[use], B[use], C[use]; self.wall = wall[use]; self.floor = floor[use]; self.box = box
        P = np.stack([self.A, self.B, self.C])                                   # 3 x T x 3
        self.lo = P.min(axis=0); self.hi = P.max(axis=0)
        n = np.cross(self.B - self.A, self.C - self.A); ln = np.linalg.norm(n, axis=1); ln[ln == 0] = 1
        self.up = np.abs(n[:, 1]) / ln                                            # |cos| to vertical (Y is up/down)
        self.x0 = math.floor(self.lo[:, 0].min()); self.z0 = math.floor(self.lo[:, 2].min())
        self.nx = int(math.ceil(self.hi[:, 0].max() - self.x0) / CELL) + 1; self.nz = int(math.ceil(self.hi[:, 2].max() - self.z0) / CELL) + 1
        self.B4 = 4                                                               # bucket = 4 x 4 cells
        self.bucket = collections.defaultdict(list)
        bx0 = np.floor((self.lo[:, 0] - self.x0) / (CELL * self.B4) - 0.26).astype(int); bx1 = np.floor((self.hi[:, 0] - self.x0) / (CELL * self.B4) + 0.26).astype(int)
        bz0 = np.floor((self.lo[:, 2] - self.z0) / (CELL * self.B4) - 0.26).astype(int); bz1 = np.floor((self.hi[:, 2] - self.z0) / (CELL * self.B4) + 0.26).astype(int)
        for i in range(len(self.A)):
            for bx in range(bx0[i], bx1[i] + 1):
                for bz in range(bz0[i], bz1[i] + 1): self.bucket[(bx, bz)].append(i)
        self.bucket = {k: np.array(v) for k, v in self.bucket.items()}
        log('  navigation: %d collision triangles (%d walls, %d floors), grid %d x %d m' % (len(self.A), self.wall.sum(), self.floor.sum(), self.nx, self.nz))

    def centre(self, ix, iz): return self.x0 + (ix + 0.5) * CELL, self.z0 + (iz + 0.5) * CELL

    def heights(self, xs, zs, tris):
        """heights of the triangles tris at the points (xs, zs) -> (H [P x T] with nan outside, inside mask)"""
        A, B, C = self.A[tris], self.B[tris], self.C[tris]
        d = (B[:, 2] - C[:, 2]) * (A[:, 0] - C[:, 0]) + (C[:, 0] - B[:, 0]) * (A[:, 2] - C[:, 2])
        ok = np.abs(d) > 1e-9; d = np.where(ok, d, 1.0)
        px = xs[:, None]; pz = zs[:, None]
        l1 = ((B[:, 2] - C[:, 2]) * (px - C[:, 0]) + (C[:, 0] - B[:, 0]) * (pz - C[:, 2])) / d
        l2 = ((C[:, 2] - A[:, 2]) * (px - C[:, 0]) + (A[:, 0] - C[:, 0]) * (pz - C[:, 2])) / d
        l3 = 1 - l1 - l2
        inside = ok & (l1 >= -1e-6) & (l2 >= -1e-6) & (l3 >= -1e-6)
        H = l1 * A[:, 1] + l2 * B[:, 1] + l3 * C[:, 1]
        return np.where(inside, H, np.nan), inside

    def surfaces(self, log=print):
        """-> list of surfaces (ix, iz, y), dict (ix, iz) -> [surface ids]"""
        cos_max = math.cos(math.radians(MAX_SLOPE))
        S = []; at = {}
        for (bx, bz), tris in self.bucket.items():
            ixs = np.arange(bx * self.B4, bx * self.B4 + self.B4); izs = np.arange(bz * self.B4, bz * self.B4 + self.B4)
            gx, gz = np.meshgrid(ixs, izs, indexing='ij'); gx = gx.ravel(); gz = gz.ravel()
            keep = (gx >= 0) & (gz >= 0) & (gx < self.nx) & (gz < self.nz); gx = gx[keep]; gz = gz[keep]
            if not len(gx): continue
            xs = self.x0 + (gx + 0.5) * CELL; zs = self.z0 + (gz + 0.5) * CELL
            if self.box is not None:
                inb = (xs >= self.box[0]) & (xs <= self.box[1]) & (zs >= self.box[2]) & (zs <= self.box[3])
                gx, gz, xs, zs = gx[inb], gz[inb], xs[inb], zs[inb]
                if not len(gx): continue
            H, ins = self.heights(xs, zs, tris)
            walk = ins & (self.up[tris] >= cos_max) & self.floor[tris]
            for k in range(len(gx)):
                hs = np.sort(H[k][walk[k]])
                if not len(hs): continue
                allh = H[k][ins[k] & self.wall[tris]]
                prev = None
                for h in hs:
                    if prev is not None and h - prev < 0.3: continue                       # the same floor
                    prev = h
                    if np.any((allh < h - 0.05) & (allh > h - HEADROOM)): continue             # something just above (Y down)
                    at.setdefault((int(gx[k]), int(gz[k])), []).append(len(S)); S.append((int(gx[k]), int(gz[k]), float(h)))
        log('  navigation: %d walkable surfaces' % len(S))
        return S, at

    def blocked(self, P0, P1):
        """segments P0[i] -> P1[i] (N x 3): True where a soldier-blocking triangle crosses it (Moller-Trumbore, per bucket)"""
        out = np.zeros(len(P0), bool)
        mid = (P0 + P1) / 2
        keys = np.floor(np.stack([(mid[:, 0] - self.x0) / (CELL * self.B4), (mid[:, 2] - self.z0) / (CELL * self.B4)], 1)).astype(int)
        groups = collections.defaultdict(list)
        for i, k in enumerate(map(tuple, keys)): groups[k].append(i)
        for k, idx in groups.items():
            tris = self.bucket.get(k)
            if tris is None: continue
            idx = np.array(idx); o = P0[idx]; dvec = P1[idx] - o
            tris = tris[self.wall[tris]]
            if not len(tris): continue
            A, B, C = self.A[tris], self.B[tris], self.C[tris]
            e1 = B - A; e2 = C - A
            p = np.cross(dvec[:, None, :], e2[None, :, :]); det = np.einsum('ijk,jk->ij', p, e1)
            okd = np.abs(det) > 1e-12; inv = np.where(okd, 1.0 / np.where(okd, det, 1.0), 0)
            s = o[:, None, :] - A[None, :, :]; u = np.einsum('ijk,ijk->ij', s, p) * inv
            q = np.cross(s, e1[None, :, :]); v = np.einsum('ijk,ik->ij', q, dvec) * inv; t = np.einsum('ijk,jk->ij', q, e2) * inv
            hit = okd & (u >= 0) & (v >= 0) & (u + v <= 1) & (t > 0) & (t < 1)
            out[idx] = hit.any(axis=1)
        return out

def bake(objects, original=None, log=print):
    """collision objects (phen.build input) -> nav.build nodes.  original: parsed NAV1 of the level (its nodes' low flag byte is kept
    for nodes baked near them)"""
    A, B, C, wall, floor, box = triangles(objects)
    if original and original['nodes']:                                                    # the area the level's own graph covers (+ 10 m)
        P = np.array([o['pos'] for o in original['nodes']])
        box = (P[:, 0].min() - 10, P[:, 0].max() + 10, P[:, 2].min() - 10, P[:, 2].max() + 10)
    if box is not None: log('  navigation: baked within x %.0f .. %.0f, z %.0f .. %.0f' % box)
    g = Grid(A, B, C, wall, floor, box, log)
    S, at = g.surfaces(log)
    n = len(S); Y = np.array([s[2] for s in S]); IX = np.array([s[0] for s in S]); IZ = np.array([s[1] for s in S])
    # --- 2. joins between neighbouring surfaces (4 directions + diagonals where both sides join)
    pairs = []
    for (dx, dz) in ((1, 0), (0, 1)):
        for i, (ix, iz, h) in enumerate(S):
            for j in at.get((ix + dx, iz + dz), ()):
                if abs(S[j][2] - h) <= STEP: pairs.append((i, j))
    pairs = np.array(pairs, int).reshape(-1, 2)
    def pts(ii, lift):
        x = g.x0 + (IX[ii] + 0.5) * CELL; z = g.z0 + (IZ[ii] + 0.5) * CELL
        return np.stack([x, Y[ii] - lift, z], 1)
    ok = np.ones(len(pairs), bool)
    for lift in (STEP + 0.1, 1.2):                                                       # knee and chest height
        ok &= ~g.blocked(pts(pairs[:, 0], lift), pts(pairs[:, 1], lift))
    pairs = pairs[ok]
    adj = [[] for _ in range(n)]
    for i, j in pairs: adj[i].append((j, 1.0)); adj[j].append((i, 1.0))
    nb4 = [set(j for j, _ in a) for a in adj]
    for i in range(n):                                                                    # diagonals
        for j in list(nb4[i]):
            for k in nb4[j]:
                if k != i and abs(IX[k] - IX[i]) == 1 and abs(IZ[k] - IZ[i]) == 1 and k not in nb4[i]:
                    adj[i].append((k, 1.41421356))
    for i in range(n): adj[i] = list({j: w for j, w in adj[i]}.items())
    log('  navigation: %d joins' % len(pairs))
    # --- areas: joined surfaces (drops included) -> the small ones are left out
    comp = np.full(n, -1); sizes = []
    for i in range(n):
        if comp[i] >= 0: continue
        c = len(sizes); comp[i] = c; st = [i]; k = 0
        while st:
            a = st.pop(); k += 1
            for b, _ in adj[a]:
                if comp[b] < 0: comp[b] = c; st.append(b)
        sizes.append(k)
    sizes = np.array(sizes); keep = sizes[comp] >= MIN_AREA
    log('  navigation: %d walkable areas, %d kept (%d m2 of %d)' % (len(sizes), int((sizes >= MIN_AREA).sum()), int(keep.sum()), n))
    # --- 3. clearance: distance to the nearest surface with fewer than 4 joins (the edge)
    clear = np.full(n, np.inf); hq = []
    for i in range(n):
        if len(nb4[i]) < 4: clear[i] = 0.5; hq.append((0.5, i))
    heapq.heapify(hq)
    while hq:
        d, i = heapq.heappop(hq)
        if d > clear[i]: continue
        for j, w in adj[i]:
            nd = d + w
            if nd < clear[j]: clear[j] = nd; heapq.heappush(hq, (nd, j))
    clear[np.isinf(clear)] = R_MAX
    # --- 4. nodes: widest first, each standing for the surfaces within its radius + REACH (by walking distance)
    owner = np.full(n, -1); order = np.argsort(-clear, kind='stable'); nodes = []
    for i in order:
        if owner[i] >= 0 or not keep[i]: continue
        r = float(min(R_MAX, max(R_MIN, clear[i]))); k = len(nodes)
        x, z = g.centre(IX[i], IZ[i]); nodes.append({'pos': (x, float(Y[i]), z), 'r': r, 'cell': int(i), 'flags': 0, 'links': []})
        reach = r + REACH; dist = {i: 0.0}; hq = [(0.0, i)]
        while hq:
            d, a = heapq.heappop(hq)
            if d > dist.get(a, 1e9): continue
            if owner[a] < 0: owner[a] = k
            for b, w in adj[a]:
                nd = d + w
                if nd <= reach and nd < dist.get(b, 1e9): dist[b] = nd; heapq.heappush(hq, (nd, b))
    log('  navigation: %d nodes' % len(nodes))
    # vehicle classes: closed where the clearance is below what the class needs
    def class_bits(c): return sum(bit for bit, need in CLASS_CLEAR.items() if c < need)
    for nd in nodes: nd['flags'] = class_bits(clear[nd['cell']])
    # --- 5. links: nodes whose circles touch, joined by a walking path at most 15% longer than the straight line
    cell_node = owner
    for k, nd in enumerate(nodes):
        src = nd['cell']; lim = nd['r'] + R_MAX + 2 * REACH + 2.0; dist = {src: 0.0}; mincl = {src: clear[src]}; hq = [(0.0, src)]; found = {}
        while hq:
            d, a = heapq.heappop(hq)
            if d > dist.get(a, 1e9): continue
            o = cell_node[a]
            if o != k and o >= 0 and a == nodes[o]['cell']: found[o] = (d, mincl[a])
            for b, w in adj[a]:
                nd2 = d + w
                if nd2 <= lim and nd2 < dist.get(b, 1e9): dist[b] = nd2; mincl[b] = min(mincl[a], clear[b]); heapq.heappush(hq, (nd2, b))
        for o, (d, mc) in found.items():
            p, q = nd['pos'], nodes[o]['pos']; e = math.dist(p, q)
            if e > nd['r'] + nodes[o]['r'] + 2 * REACH + 1.5 or d > e * 1.15 + 1.0: continue
            nd['links'].append({'to': o, 'flags': class_bits(mc), 'cost': e})
    # drops: from a surface over a ledge to the surface below in the next cell
    drops = set()
    for i, (ix, iz, h) in enumerate(S):
        if len(nb4[i]) == 4: continue
        for dx, dz in ((1, 0), (-1, 0), (0, 1), (0, -1)):
            for j in at.get((ix + dx, iz + dz), ()):
                dy = S[j][2] - h                                                             # Y down: below is larger
                if DROP_MIN < dy <= DROP_MAX and j not in nb4[i]:
                    a, b = owner[i], owner[j]
                    if a >= 0 and b >= 0 and a != b: drops.add((int(a), int(b), dy))
    best = {}
    for a, b, dy in drops: best[(a, b)] = max(dy, best.get((a, b), 0))
    for (a, b), dy in best.items():
        if any(l['to'] == b for l in nodes[a]['links']): continue
        P0 = np.array([[nodes[a]['pos'][0], nodes[a]['pos'][1] - 1.0, nodes[a]['pos'][2]]]); P1 = np.array([[nodes[b]['pos'][0], nodes[b]['pos'][1] - 1.0, nodes[b]['pos'][2]]])
        if g.blocked(P0, P1)[0] and g.blocked(P0 - [[0, dy, 0]], P1)[0]: continue
        nodes[a]['links'].append({'to': b, 'flags': (0x0002 if dy <= 1.5 else 0x0006) | 0x0F00, 'cost': math.dist(nodes[a]['pos'], nodes[b]['pos'])})
    for nd in nodes: nd['links'].sort(key=lambda l: l['cost'])
    log('  navigation: %d links (%d drops)' % (sum(len(nd['links']) for nd in nodes), len(best)))
    # the original's low flag byte, from its nearest node
    if original:
        O = np.array([o['pos'] for o in original['nodes']]); lb = np.array([o['flags'] & 0xFF for o in original['nodes']])
        for nd in nodes:
            d = np.linalg.norm(O - np.array(nd['pos']), axis=1); m = int(np.argmin(d))
            if d[m] < 8.0: nd['flags'] |= int(lb[m])
    for nd in nodes: del nd['cell']
    return nodes, clear, S

def calibrate(objects, original, log=print):
    """the clearance at the shipped level's nodes per vehicle-class mask (to set CLASS_CLEAR)"""
    A, B, C, wall, floor, box = triangles(objects); g = Grid(A, B, C, wall, floor, box, log)
    nodes, clear, S = bake(objects, None, log)
    P = np.array([(g.x0 + (s[0] + 0.5) * CELL, s[2], g.z0 + (s[1] + 0.5) * CELL) for s in S])
    by = collections.defaultdict(list)
    for o in original['nodes']:
        d = np.linalg.norm(P - np.array(o['pos']), axis=1); m = int(np.argmin(d))
        if d[m] < 1.5: by[o['flags'] >> 8].append(float(clear[m]))
    for k in sorted(by): v = sorted(by[k]); log('  mask %x: %d nodes, clearance median %.1f, 10%% %.1f, 90%% %.1f' % (k, len(v), v[len(v) // 2], v[len(v) // 10], v[len(v) * 9 // 10]))
