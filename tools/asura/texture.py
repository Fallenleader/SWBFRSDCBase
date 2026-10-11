"""Asura PSP texture resources (RSCF type 2): u16 width, u16 height, u8 0, u8 0, u8 format (4 = 4-bit CLUT, 5 = 8-bit CLUT),
u8 extra mip levels, then the pixel levels (PSP-swizzled: 16-byte x 8-row blocks) and finally the palette (16 / 256 x RGBA8888)."""
import struct
def unswizzle(data, width_bytes, height):
    data = bytearray(data); out = bytearray(len(data)); bw = width_bytes // 16; i = 0
    for by in range(height // 8):
        for bx in range(bw):
            for row in range(8):
                o = (by * 8 + row) * width_bytes + bx * 16
                out[o:o + 16] = data[i:i + 16]; i += 16
    return out
def level_sizes(w, h, bpp, mips):
    out = []; lw, lh = w, h
    for m in range(mips + 1): out.append((lw, lh, lw * lh * bpp // 8)); lw = max(1, lw // 2); lh = max(1, lh // 2)
    return out
def parse(blob, swizzled=True):
    blob = bytearray(blob)                                    # Python 2: str -> ints
    w, h, z0, z1, fmt, mips = struct.unpack_from('<HHBBBB', blob, 0)
    bpp = {4: 4, 5: 8}[fmt]; n = 1 << bpp; p = 8
    levels = []
    for lw, lh, sz in level_sizes(w, h, bpp, mips):
        raw = blob[p:p + sz]; p += sz
        wb = lw * bpp // 8
        if swizzled and wb >= 16 and lh >= 8: raw = unswizzle(raw, wb, lh)
        idx = list(raw) if bpp == 8 else [v for b in raw for v in (b & 15, b >> 4)]
        levels.append((lw, lh, idx))
    pal = [struct.unpack_from('<BBBB', blob, p + 4 * i) for i in range(n)]; p += 4 * n
    return {'width': w, 'height': h, 'bpp': bpp, 'mips': mips, 'palette': pal, 'levels': levels, 'size': p}
def to_rgba(t, level=0):
    lw, lh, idx = t['levels'][level]; pal = t['palette']
    out = bytearray(lw * lh * 4)
    for i, v in enumerate(idx[:lw * lh]):
        r, g, b, a = pal[v]; out[i * 4:i * 4 + 4] = bytearray((r, g, b, a))
    return lw, lh, out
