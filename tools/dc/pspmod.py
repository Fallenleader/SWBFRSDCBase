"""PSP relocatable module (ELF type 0xFFA0) loader: maps segments at a fixed base and applies PRX relocations."""
import struct
BASE = 0x08804000

class Module:
    def __init__(s, path, base=BASE):
        d = open(path, 'rb').read(); s.d = d; s.base = base
        et, em, ev, entry, phoff, shoff, fl, ehs, phes, phn, shes, shn, shstr = struct.unpack('<HHIIIIIHHHHHH', d[16:52])
        s.entry = entry
        s.ph = [struct.unpack('<8I', d[phoff+i*phes:phoff+i*phes+32]) for i in range(phn)]
        sh = [struct.unpack('<10I', d[shoff+i*shes:shoff+i*shes+40]) for i in range(shn)]
        so = sh[shstr][4]
        s.sec = {}
        for x in sh:
            n = d[so+x[0]:d.index(b'\0', so+x[0])].decode()
            s.sec[n] = x
        s.sh = sh
        # segment layout (PSP: seg addresses are base + va, ph.va already accumulated by linker)
        s.segaddr = [base + p[2] for p in s.ph]
        end = max(base + p[2] + p[5] for p in s.ph if p[0] == 1)
        s.size = end - base
        s.mem = bytearray(s.size)
        for p in s.ph:
            if p[0] == 1:
                s.mem[p[2]:p[2]+p[4]] = d[p[1]:p[1]+p[4]]
        s.relhist = {}
        s.jumpptrs = set()   # R_MIPS_32 values that point into module (data pointers / jump tables / vtables)
        s.hi16_pairs = []    # resolved HI/LO absolute addresses (address constants in code)
        s.apply_relocs()

    def r32(s, o): return struct.unpack_from('<I', s.mem, o)[0]
    def w32(s, o, v): struct.pack_into('<I', s.mem, o, v & 0xFFFFFFFF)

    def apply_relocs(s):
        for name, x in s.sec.items():
            if x[1] != 0x700000a0: continue
            data = s.d[x[4]:x[4]+x[5]]
            hi_pending = []; hi_val = 0
            for i in range(0, len(data), 8):
                roff, info = struct.unpack_from('<II', data, i)
                t = info & 0xFF; ob = (info >> 8) & 0xFF; ab = (info >> 16) & 0xFF
                s.relhist[t] = s.relhist.get(t, 0) + 1
                o = s.ph[ob][2] + roff        # offset in module image (va-based)
                A = s.segaddr[ab]
                v = s.r32(o)
                if t == 2:     # R_MIPS_32
                    nv = v + A; s.w32(o, nv); s.jumpptrs.add((o, nv))
                elif t == 4:   # R_MIPS_26
                    tg = ((v & 0x3FFFFFF) << 2) + A
                    s.w32(o, (v & 0xFC000000) | ((tg >> 2) & 0x3FFFFFF))
                elif t == 5:   # R_MIPS_HI16
                    hi_pending.append(o); hi_val = v & 0xFFFF
                elif t == 6:   # R_MIPS_LO16
                    lo = v & 0xFFFF; lo_s = lo - 0x10000 if lo & 0x8000 else lo
                    full = ((hi_val << 16) + lo_s + A) & 0xFFFFFFFF
                    nlo = full & 0xFFFF; nhi = ((full >> 16) + ((full >> 15) & 1)) & 0xFFFF
                    for h in hi_pending:
                        s.w32(h, (s.r32(h) & 0xFFFF0000) | nhi)
                        s.hi16_pairs.append((h, o, full))
                    s.w32(o, (v & 0xFFFF0000) | nlo)
                    hi_pending = []
                else:
                    raise Exception('reloc type %d unsupported' % t)
