"""RSCF = embedded resource file: u32 type, u32 ?, u32 data size, NUL-terminated name padded to 4, data."""
import struct, sys, collections, os
sys.path.insert(0, os.path.dirname(__file__))
from chunks import chunks
def rscf(d, p, size, ver):
    q = p + 16
    typ, unk, dsz = struct.unpack_from('<III', d, q); q += 12
    e = d.index(b'\0', q); name = d[q:e].decode('latin1'); q += (len(name) + 1 + 3) & ~3     # padded relative to the name start
    return typ, unk, dsz, name, q
if __name__ == '__main__':
    st = collections.Counter(); ex = {}
    for f in sys.argv[1:]:
        d = open(f, 'rb').read()
        for p, t, s, v, fl in chunks(d):
            if t != 'RSCF': continue
            typ, unk, dsz, name, q = rscf(d, p, s, v)
            k = (v, typ, os.path.splitext(name)[1].lower()); st[k] += 1; ex.setdefault(k, (f, name, dsz, s - (q - p), hex(unk), d[q:q+16].hex()))
    for k, n in sorted(st.items()): print(k, n, ex[k])
