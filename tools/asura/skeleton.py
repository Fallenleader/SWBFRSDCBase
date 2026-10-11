"""HSKN (v8) hierarchy: u32 0, u32 bone count, name (NUL, 4-byte padded), u32 parent[count] (root: 0), then count x {pos x,y,z; quat x,y,z,w}
local bind transforms, then per-bone named blocks (name + collision/volume data, not needed for rendering)."""
import struct, math, re
_NAME = re.compile(b'[A-Za-z][A-Za-z0-9 _\\-]{2,40}\x00')
def parse(b):
    _, n = struct.unpack_from('<II', b, 0)
    e = b.index(b'\0', 8); name = b[8:e].decode('latin1'); o = 8 + ((e - 8 + 1 + 3) & ~3)      # name, NUL, padded to 4
    par = list(struct.unpack_from('<%dI' % n, b, o)); par[0] = -1; o += 4 * n                  # parent per bone (root: 0)
    bones = []
    for i in range(n):
        f = struct.unpack_from('<7f', b, o + 28 * i); bones.append({'parent': par[i], 't': f[:3], 'q': f[3:]})
    end = o + 28 * n; rest = b[end:]; names = []
    for m in _NAME.finditer(rest):                                  # bone names live in the per-bone blocks that follow (best effort)
        if m.start() % 4 == 0 or rest[m.start() - 1:m.start()] == b'\0': names.append(m.group()[:-1].decode('latin1'))
    return {'name': name, 'bones': bones, 'end': end, 'bone_names': names if len(names) == n else []}
def qmul(a, b):
    ax, ay, az, aw = a; bx, by, bz, bw = b
    return (aw*bx + ax*bw + ay*bz - az*by, aw*by - ax*bz + ay*bw + az*bx, aw*bz + ax*by - ay*bx + az*bw, aw*bw - ax*bx - ay*by - az*bz)
def qrot(q, v):
    x, y, z, w = q; vx, vy, vz = v
    # v' = q v q*
    ix = w*vx + y*vz - z*vy; iy = w*vy + z*vx - x*vz; iz = w*vz + x*vy - y*vx; iw = -x*vx - y*vy - z*vz
    return (ix*w + iw*-x + iy*-z - iz*-y, iy*w + iw*-y + iz*-x - ix*-z, iz*w + iw*-z + ix*-y - iy*-x)
def world(sk, conj=False):
    out = []
    for i, bn in enumerate(sk['bones']):
        q = bn['q']; q = (-q[0], -q[1], -q[2], q[3]) if conj else q
        if bn['parent'] < 0: out.append((q, bn['t']))
        else:
            pq, pt = out[bn['parent']]; r = qrot(pq, bn['t'])
            out.append((qmul(pq, q), (pt[0] + r[0], pt[1] + r[1], pt[2] + r[2])))
    return out
