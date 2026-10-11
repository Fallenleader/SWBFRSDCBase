"""Small Asura list chunks: TEXT (texture names), MTRL (materials)."""
import struct
def names(b, off, n):
    out = []; q = off
    for i in range(n):
        e = b.index(b'\0', q); out.append(b[q:e].decode('latin1')); q += (e - q + 1 + 3) & ~3
    return out, q
def text(b):                     # TEXT v3: u32 count, NUL-terminated names (4-byte padded)
    n = struct.unpack_from('<I', b, 0)[0]; return names(b, 4, n)[0]
def mtrl(b):                     # MTRL v5: u32 count, count x { s32 texture slot[6], s32 flags, s32 mode, s32 ? }
    n = struct.unpack_from('<I', b, 0)[0]
    return [dict(zip(('tex', 'flags', 'mode', 'extra'), (list(r[:6]), r[6], r[7], r[8]))) for r in (struct.unpack_from('<9i', b, 4 + 36 * i) for i in range(n))]
