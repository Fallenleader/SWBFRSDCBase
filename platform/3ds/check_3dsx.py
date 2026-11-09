"""Checks a .3dsx the way Luma3DS's loader (hb:ldr) relocates it: a relocation it does not support makes the loader itself crash
(an exception in "loader" at launch, no error message).  Absolute relocations must point at a word whose top 4 bits are 0, relative
ones at 0 or 1 - a link-time constant like  symbol - 0x08804000  that wraps below 0 breaks that.
    python3 check_3dsx.py swbfrs.3dsx [swbfrs.elf]"""
import struct, sys, subprocess
b = open(sys.argv[1], 'rb').read()
magic, hs, rhs, fv, flags, cs, rs, ds, bss = struct.unpack('<4sHHII4I', b[:32])
if magic != b'3DSX':
    sys.exit("not a 3dsx")
pg = lambda x: (x + 0xfff) & ~0xfff
n = rhs // 4; off = hs; tables = []
for i in range(3):
    tables.append(struct.unpack('<%dI' % n, b[off:off + rhs])); off += rhs
img = bytearray(b[off:off + cs]) + bytes(pg(cs) - cs) + b[off + cs:off + cs + rs] + bytes(pg(rs) - rs) + b[off + cs + rs:off + cs + rs + ds - bss]
img += bytes(pg(cs) + pg(rs) + pg(ds) - len(img))
off += cs + rs + ds - bss
seg = [0, pg(cs), pg(cs) + pg(rs)]; size = [pg(cs), pg(rs), pg(ds)]; bad = []
for i in range(3):
    for j in range(n):
        cnt = tables[i][j]
        if j >= 2:
            off += cnt; continue
        pos, end = seg[i], seg[i] + size[i]
        for k in range(cnt):
            skip, patch = struct.unpack('<HH', b[off:off + 4]); off += 4; pos += skip * 4
            for m in range(patch):
                if pos >= end:
                    break
                w = struct.unpack('<I', img[pos:pos + 4])[0]
                if (j == 0 and w >> 28) or (j == 1 and w >> 28 > 1):
                    bad.append((0x100000 + pos, w))
                pos += 4
for a, w in bad:
    where = ""
    if len(sys.argv) > 2:
        out = subprocess.run(["arm-none-eabi-addr2line", "-fe", sys.argv[2], hex(a)], capture_output=True, text=True).stdout.split()
        where = " in " + " ".join(out)
    print(f"check_3dsx: unsupported relocation at {a:#x} (value {w:#010x}){where}: Luma's loader would crash at launch", file=sys.stderr)
sys.exit(1 if bad else 0)
