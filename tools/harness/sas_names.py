"""Sample names by the FNV-1a of their first 256 VAG bytes (as RS_SAS_LOG prints): sas_names.py GMSND.ASR LEVEL.PSP > names.txt"""
import sys, struct, os
sys.path.insert(0, '/home/claude/rs/tools/asura')
from chunks import chunks
from rscf import rscf
def fnv(b, h=2166136261):
    for x in b: h ^= x; h = (h * 16777619) & 0xffffffff
    return h
def cstr(d, q):
    e = d.index(b'\0', q); s = d[q:e].decode('latin1'); return s, q + ((len(s) + 1 + 3) & ~3)
out = {}
for f in sys.argv[1:]:
    d = open(f, 'rb').read(); res = {}; sm = []
    for p, t, s, v, fl in chunks(d):
        if t == 'RSCF':
            typ, unk, dsz, name, q = rscf(d, p, s, v); res[name] = d[q:q + dsz]
        elif t == 'SDSM':
            q = p + 16; nm, q = cstr(d, q); q += 4; path, q = cstr(d, q); sm.append((nm, path))
    for nm, path in sm:
        b = res.get(path)
        if not b or b[:4] != b'VAGp': continue
        body = b[48:]; dsz = struct.unpack('>I', b[12:16])[0]
        for sz in {dsz, len(body)}:
            n = min(sz, 256); out[(fnv(body[:n]), sz)] = nm
        out[(fnv(body[:256]), -1)] = nm
for (h, sz), nm in out.items(): print('%08X %d %s' % (h, sz, nm))
