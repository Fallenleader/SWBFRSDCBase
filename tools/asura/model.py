"""Asura PSP rigid models (RSCF v1 type 0, flag 5): characters / props drawn with GE vertex type 0x11E3.
  header : u32 name hash, u32 part count, u32 vertex count, u32 index count
  parts  : part count x { u32 flags?, u32 triangle count (strip), u32 first vertex, u32 first index }   (part i rides bone i)
  verts  : vertex count x { f32 u, v, nx, ny, nz, x, y, z }  (32 bytes)
  indices: index count x u16, triangle strips (part = tri count + 2 indices)"""
import struct
def parse(b):
    h, nparts, nv, ni = struct.unpack_from('<4I', b, 0)
    parts = [struct.unpack_from('<4I', b, 16 + 16 * i) for i in range(nparts)]
    vo = 16 + 16 * nparts
    verts = [struct.unpack_from('<8f', b, vo + 32 * i) for i in range(nv)]
    io = vo + 32 * nv
    idx = list(struct.unpack_from('<%dH' % ni, b, io))
    return {'hash': h, 'parts': [{'flags': p[0], 'tris': p[1], 'v0': p[2], 'i0': p[3]} for p in parts], 'verts': verts, 'indices': idx, 'size': io + 2 * ni}
def strip_tris(idx, i0, ntris):
    out = []
    for k in range(ntris):
        a, b, c = idx[i0 + k], idx[i0 + k + 1], idx[i0 + k + 2]
        if a == b or b == c or a == c: continue
        out.append((a, b, c) if k % 2 == 0 else (b, a, c))
    return out
