"""List the chunks of Asura engine (Rebellion) container files: 'Asura   ' magic, then [4CC, u32 size (incl. 16-byte header), u32 version, u32 flags] + data."""
import struct, sys, collections
def chunks(d):
    if d[:8] != b'Asura   ': raise ValueError('not an Asura file')
    p = 8
    while p + 16 <= len(d):
        tag = d[p:p+4]; size, ver, flags = struct.unpack_from('<III', d, p + 4)
        if size < 16 or p + size > len(d): break
        yield p, tag.decode('latin1'), size, ver, flags
        p += size
if __name__ == '__main__':
    tot = collections.Counter(); byt = collections.Counter()
    for f in sys.argv[1:]:
        d = open(f, 'rb').read()
        try: lst = list(chunks(d))
        except ValueError: print(f, 'not Asura', d[:8]); continue
        end = lst[-1][0] + lst[-1][2] if lst else 8
        for p, t, s, v, fl in lst: tot[(t, v)] += 1; byt[(t, v)] += s
        if end != len(d): print(f, 'trailing', len(d) - end, 'bytes at', hex(end), d[end:end+16])
    for k, n in sorted(tot.items(), key=lambda x: -byt[x[0]]): print('%-4s v%-3d count %6d  bytes %10d' % (k[0], k[1], n, byt[k]))
