"""SWBF2 (and unmunged SWBF1) world sources: the terrain (.ter), the world and layer files (.wld / .lyr), object definitions (.odf),
and their meshes (.msh).

Axes: the world, the terrain and the meshes share one frame: Y up, metres.  A .wld object's ChildRotation is a quaternion (w, x, y, z).
Terrain vertex (row r, column c) is at x = (c - N/2) * grid, z = (r - N/2) * grid, y = height * height_scale (checked on Hoth: the
props of the .wld sit on it to within a metre)."""
import os, re, struct, math
import swbf_msh as msh

# ------------------------------------------------------------------ terrain
def load_ter(path):
    d = open(path, 'rb').read()
    if d[:4] != b'TERR': raise ValueError('%s: not a terrain file' % path)
    ver = struct.unpack_from('<I', d, 4)[0]
    ext = struct.unpack_from('<4h', d, 8); hdr = struct.unpack_from('<I', d, 16)[0]
    tile = struct.unpack_from('<16f', d, 20); axes = d[84:100]
    o = 20 + hdr - 20                                          # height scale, grid scale, prelit, length, foliage patch: the header's last 20 bytes
    hscale, grid, prelit, N, patch = struct.unpack_from('<2f3I', d, 20 + hdr - 20)
    names = []
    p = 20 + hdr
    for i in range(16):
        def nm(b):
            if b and b[0] < 32 and b[0] == len(b[1:].split(b'\0')[0]): b = b[1:]          # v22: a length byte first
            return b.split(b'\0')[0].decode('latin1')
        names.append((nm(d[p:p + 32]), nm(d[p + 32:p + 64]))); p += 64
    hdr_end = p
    # the height map follows a block of water / decal settings whose size varies: find it as the smoothest N x N int16 grid
    try:
        import numpy as np
    except ImportError:
        np = None
    best = None
    for S in range(hdr_end, min(len(d) - N * N * 2, hdr_end + 8192)):
        if np is not None:
            h = np.frombuffer(d[S:S + N * N * 2], dtype='<i2').reshape(N, N).astype(float)
            if h.std() < 1e-6: continue
            j = np.abs(np.diff(h, axis=1)).mean() + np.abs(np.diff(h, axis=0)).mean()
        else:
            row = struct.unpack_from('<%dh' % (4 * N), d, S); j = sum(abs(row[i + 1] - row[i]) for i in range(len(row) - 1)) / len(row)
        if best is None or j < best[0]: best = (j, S)
    S = best[1]
    heights = [list(struct.unpack_from('<%dh' % N, d, S + 2 * N * r)) for r in range(N)]
    W = S + N * N * 10                                          # heights (2) + colour (4) + light colour (4) per vertex, then 16 layer weights
    weights = d[W:W + N * N * 16] if W + N * N * 16 <= len(d) else None
    colours = d[S + N * N * 2:S + N * N * 6]
    return {'version': ver, 'N': N, 'grid': grid, 'hscale': hscale, 'extents': ext, 'tile': tile, 'names': names,
            'heights': heights, 'weights': weights, 'colours': colours, 'offset': S}

def ter_pos(t, r, c):
    N = t['N']; return ((c - N // 2) * t['grid'], t['heights'][r][c] * t['hscale'], (r - N // 2) * t['grid'])

def ter_height(t, x, z):
    N = t['N']; c = x / t['grid'] + N // 2; r = z / t['grid'] + N // 2
    c0 = max(0, min(N - 2, int(math.floor(c)))); r0 = max(0, min(N - 2, int(math.floor(r)))); fc = c - c0; fr = r - r0
    H = t['heights']; s = t['hscale']
    return s * ((H[r0][c0] * (1 - fc) + H[r0][c0 + 1] * fc) * (1 - fr) + (H[r0 + 1][c0] * (1 - fc) + H[r0 + 1][c0 + 1] * fc) * fr)

def ter_layer(t, r, c):
    """the dominant texture layer at a vertex (layer 0 is the base; a later layer wins where its weight is over half)"""
    w = t['weights']
    if not w: return 0
    k = (r * t['N'] + c) * 16; best = 0
    for L in range(1, 16):
        if w[k + L] > 127 and t['names'][L][0]: best = L
    return best

# ------------------------------------------------------------------ .wld / .lyr
OBJ_RE = re.compile(r'Object\("([^"]*)",\s*"([^"]*)"[^)]*\)\s*\{(.*?)\n\}', re.S)
def load_wld(path):
    txt = open(path, 'r', errors='replace').read()
    out = {'objects': [], 'terrain': None, 'sky': None, 'regions': [], 'paths': []}
    m = re.search(r'TerrainName\("([^"]*)"\)', txt); out['terrain'] = m.group(1) if m else None
    m = re.search(r'SkyName\("([^"]*)"\)', txt); out['sky'] = m.group(1) if m else None
    for name, cls, body in OBJ_RE.findall(txt):
        r = re.search(r'ChildRotation\(([^)]*)\)', body); p = re.search(r'ChildPosition\(([^)]*)\)', body)
        t = re.search(r'Team\((-?\d+)\)', body)
        props = dict(re.findall(r'(\w+)\("([^"]*)"\)', body))
        props.update(dict((k, v) for k, v in re.findall(r'(\w+)\((-?[\d.]+)\)', body) if k not in ('Team', 'SeqNo', 'NetworkId')))
        out['objects'].append({'name': name, 'class': cls, 'rot': tuple(float(x) for x in r.group(1).split(',')) if r else (1, 0, 0, 0),
                               'pos': tuple(float(x) for x in p.group(1).split(',')) if p else (0, 0, 0),
                               'team': int(t.group(1)) if t else 0, 'props': props})
    return out

def load_regions(path):
    """.rgn: Region("name", shape) { Position(); Rotation(); Size(); Name(""); ... }"""
    if not os.path.exists(path): return []
    txt = open(path, 'r', errors='replace').read(); out = []
    for m in re.finditer(r'Region\("([^"]*)",\s*(\d+)\)\s*\{(.*?)\n\}', txt, re.S):
        b = m.group(3); g = lambda k: tuple(float(x) for x in re.search(k + r'\(([^)]*)\)', b).group(1).split(',')) if re.search(k + r'\(([^)]*)\)', b) else None
        out.append({'class': m.group(1), 'shape': int(m.group(2)), 'pos': g('Position'), 'rot': g('Rotation'), 'size': g('Size'),
                    'name': (re.search(r'Name\("([^"]*)"\)', b) or [None, ''])[1]})
    return out

def load_paths(path):
    """.pth: Path("name") { ... Nodes(n) { Node() { Position(x, y, z); ... } } }"""
    if not os.path.exists(path): return []
    txt = open(path, 'r', errors='replace').read(); out = []
    for m in re.finditer(r'Path\("([^"]*)"\)\s*\{(.*?)\n\}', txt, re.S):
        nodes = [tuple(float(x) for x in n.split(',')) for n in re.findall(r'Position\(([^)]*)\)', m.group(2))]
        out.append({'name': m.group(1), 'nodes': nodes})
    return out

# ------------------------------------------------------------------ .odf
class Odfs:
    def __init__(self, dirs): self.dirs = [d for d in dirs if os.path.isdir(d)]; self.cache = {}; self.index = None
    def _find(self, cls):
        if self.index is None:
            self.index = {}
            for d in self.dirs:
                for root, _, files in os.walk(d):
                    for f in files:
                        if f.lower().endswith('.odf'): self.index.setdefault(f[:-4].lower(), os.path.join(root, f))
        return self.index.get(cls.lower())
    def get(self, cls, depth=0):
        k = cls.lower()
        if k in self.cache: return self.cache[k]
        path = self._find(cls); props = {}
        if path:
            for ln in open(path, 'r', errors='replace'):
                ln = ln.split('//')[0].strip()
                m = re.match(r'(\w+)\s*=\s*"?([^"]*)"?', ln)
                if m: props.setdefault(m.group(1).lower(), m.group(2).strip())
            parent = props.get('classparent')
            if parent and depth < 8:
                for kk, vv in self.get(parent, depth + 1).items(): props.setdefault(kk, vv)
        self.cache[k] = props
        return props

def find_file(name, dirs, exts=('',)):
    base = name.lower()
    for d in dirs:
        if not os.path.isdir(d): continue
        for root, _, files in os.walk(d):
            low = dict((f.lower(), f) for f in files)
            for e in exts:
                if (base + e) in low: return os.path.join(root, low[base + e])
    return None

class Finder:
    def __init__(self, dirs): self.dirs = [d for d in dirs if os.path.isdir(d)]; self.idx = None
    def __call__(self, name, exts=('',)):
        if self.idx is None:
            self.idx = {}
            for d in self.dirs:
                for root, _, files in os.walk(d):
                    for f in files: self.idx.setdefault(f.lower(), os.path.join(root, f))
        n = name.lower().replace('\\', '/').split('/')[-1]
        for e in exts:
            if n + e in self.idx: return self.idx[n + e]
        return None

def obj_matrix(o):
    w, x, y, z = o['rot']
    return msh.mat4(msh.quat_mat(x, y, z, w), o['pos'])
