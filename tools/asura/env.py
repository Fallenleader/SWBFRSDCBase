"""Asura PSP level geometry: RSCF v1 type 0 named 'Env' (drawn as GE triangle strips).
  header : u32 material count, u32 opaque strip count, u32 blend-layer strip count, u32 vertex count, u32 0
  strips : (opaque + layer) x { u32 (vertex type << 16) | vertex count, u32 first vertex, u32 first vertex (again), u32 material, u32 ? }
  verts  : GE vertex type 0x1D2 (opaque: s16 u,v (x 1/256 = GE uv scale 128), RGB565 colour, s16 normal xyz, f32 pos xyz; 24 bytes)
           or 0x1DA for the blend layer (RGBA4444 colour, alpha = blend weight of the material's second texture).
Materials come from the map's environment MTRL chunk (9 x s32: texture slot 0..5, flags, mode, ?) indexing its TEXT name list."""
import struct
def parse(b):
    nmat, nopq, nlay, nv, _ = struct.unpack_from('<5I', b, 0)
    strips = []
    for i in range(nopq + nlay):
        w, v0, v0b, mat, f = struct.unpack_from('<5I', b, 20 + 20 * i)
        strips.append({'vt': w >> 16, 'n': w & 0xFFFF, 'v0': v0, 'mat': mat, 'flag': f, 'layer': i >= nopq})
    vo = 20 + 20 * (nopq + nlay)
    verts = []
    for i in range(nv):
        o = vo + 24 * i
        u, v, col = struct.unpack_from('<hhH', b, o); nx, ny, nz = struct.unpack_from('<3h', b, o + 6); x, y, z = struct.unpack_from('<3f', b, o + 12)
        verts.append((u / 256.0, v / 256.0, col, nx / 32768.0, ny / 32768.0, nz / 32768.0, x, y, z))
    return {'materials': nmat, 'strips': strips, 'verts': verts, 'vertex_offset': vo}
def colour(vt, c):
    if vt == 0x1DA: return ((c & 15) * 17, ((c >> 4) & 15) * 17, ((c >> 8) & 15) * 17, ((c >> 12) & 15) * 17)
    return ((c & 31) * 255 // 31, ((c >> 5) & 63) * 255 // 63, ((c >> 11) & 31) * 255 // 31, 255)
def strip_tris(v0, n):
    out = []
    for k in range(n - 2):
        a, b, c = v0 + k, v0 + k + 1, v0 + k + 2
        out.append((a, b, c) if k % 2 == 0 else (b, a, c))
    return out
