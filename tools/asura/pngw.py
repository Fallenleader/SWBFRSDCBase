"""Minimal PNG writer/reader (zlib only) so the tools also run inside Maya 2020's Python 2.7 (no PIL there)."""
import struct, zlib
def write(path, w, h, rgba):
    raw = b''.join(b'\0' + bytes(rgba[y * w * 4:(y + 1) * w * 4]) for y in range(h))
    def chunk(t, d): return struct.pack('>I', len(d)) + t + d + struct.pack('>I', zlib.crc32(t + d) & 0xFFFFFFFF)
    with open(path, 'wb') as f:
        f.write(b'\x89PNG\r\n\x1a\n' + chunk(b'IHDR', struct.pack('>IIBBBBB', w, h, 8, 6, 0, 0, 0)) + chunk(b'IDAT', zlib.compress(raw, 6)) + chunk(b'IEND', b''))
def read(path):
    d = open(path, 'rb').read(); assert d[:8] == b'\x89PNG\r\n\x1a\n'
    p = 8; idat = b''; w = h = 0; ct = 6; plte = None; trns = None
    while p < len(d):
        n = struct.unpack('>I', d[p:p + 4])[0]; t = d[p + 4:p + 8]; c = d[p + 8:p + 8 + n]; p += 12 + n
        if t == b'IHDR': w, h, bd, ct = struct.unpack('>IIBB', c[:10]); assert bd == 8, 'only 8-bit PNGs'
        elif t == b'PLTE': plte = bytearray(c)
        elif t == b'tRNS': trns = bytearray(c)
        elif t == b'IDAT': idat += c
    bpp = {6: 4, 2: 3, 0: 1, 4: 2, 3: 1}[ct]; raw = bytearray(zlib.decompress(idat)); stride = w * bpp
    out = bytearray(w * h * 4); prev = bytearray(stride); q = 0
    for y in range(h):
        ft = raw[q]; line = raw[q + 1:q + 1 + stride]; q += 1 + stride
        for i in range(stride):
            a = line[i - bpp] if i >= bpp else 0; b = prev[i]; c = prev[i - bpp] if i >= bpp else 0
            if ft == 1: line[i] = (line[i] + a) & 255
            elif ft == 2: line[i] = (line[i] + b) & 255
            elif ft == 3: line[i] = (line[i] + ((a + b) >> 1)) & 255
            elif ft == 4:
                pa = abs(b - c); pb = abs(a - c); pc = abs(a + b - 2 * c)
                line[i] = (line[i] + (a if pa <= pb and pa <= pc else (b if pb <= pc else c))) & 255
        prev = line
        for x in range(w):
            o = (y * w + x) * 4
            if ct == 6: out[o:o + 4] = line[x * 4:x * 4 + 4]
            elif ct == 2: out[o:o + 3] = line[x * 3:x * 3 + 3]; out[o + 3] = 255
            elif ct == 0: out[o:o + 3] = bytearray([line[x]] * 3); out[o + 3] = 255
            elif ct == 4: out[o:o + 3] = bytearray([line[x * 2]] * 3); out[o + 3] = line[x * 2 + 1]
            else: i = line[x]; out[o:o + 3] = plte[i * 3:i * 3 + 3]; out[o + 3] = trns[i] if trns and i < len(trns) else 255
    return w, h, out
