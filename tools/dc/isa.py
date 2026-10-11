"""Allegrex (PSP MIPS32 + extensions) decoder for the decompiler.

decode(w, pc) -> Insn with exact register effects.  Register numbering for effects:
  0..31 GPR, 32..63 FPR, 64 HI, 65 LO, 66 FPU condition, 67 VFPU (whole register file / control state, coarse)
"""
HI, LO, FCC, VF = 64, 65, 66, 67


def s16(x): return x - 0x10000 if x & 0x8000 else x


class Insn:
    __slots__ = ('pc', 'w', 'op', 'kind', 'rs', 'rt', 'rd', 'sa', 'imm', 'simm', 'target', 'reads', 'writes',
                 'likely', 'link', 'mem', 'cond_writes')

    def __init__(s, pc, w):
        s.pc = pc; s.w = w; s.op = w >> 26
        s.rs = (w >> 21) & 31; s.rt = (w >> 16) & 31; s.rd = (w >> 11) & 31; s.sa = (w >> 6) & 31
        s.imm = w & 0xFFFF; s.simm = s16(s.imm)
        s.kind = 'alu'; s.target = None; s.reads = set(); s.writes = set(); s.likely = False; s.link = False
        s.mem = None            # (base_reg, offset, size, signed, 'load'|'store'|'lwl'...)
        s.cond_writes = False   # writes only conditionally (movz/movn) -> also a read of the target

    def __repr__(s):
        return '<%08x %08x %s r=%s w=%s>' % (s.pc, s.w, s.kind, sorted(s.reads), sorted(s.writes))


def decode(w, pc):
    i = Insn(pc, w); op = i.op; rs, rt, rd = i.rs, i.rt, i.rd; fn = w & 63
    R = i.reads; W = i.writes

    def rd_(*regs):
        for r in regs:
            if r != 0: R.add(r)

    def wr(r):
        if r != 0: W.add(r)

    if w == 0: i.kind = 'nop'; return i
    if op == 0:
        if fn in (0, 2, 3): rd_(rt); wr(rd)                       # sll srl/rotr sra
        elif fn in (4, 6, 7): rd_(rt, rs); wr(rd)                 # sllv srlv/rotrv srav
        elif fn == 8: i.kind = 'jr'; rd_(rs)
        elif fn == 9: i.kind = 'jalr'; rd_(rs); wr(rd); i.link = True
        elif fn in (10, 11): rd_(rs, rt, rd); wr(rd); i.cond_writes = True   # movz movn
        elif fn == 12: i.kind = 'syscall'
        elif fn == 13: i.kind = 'break'
        elif fn == 15: i.kind = 'nop'                              # sync
        elif fn == 16: R.add(HI); wr(rd)
        elif fn == 17: rd_(rs); W.add(HI)
        elif fn == 18: R.add(LO); wr(rd)
        elif fn == 19: rd_(rs); W.add(LO)
        elif fn in (22, 23): rd_(rs); wr(rd)                       # clz clo
        elif fn in (24, 25, 26, 27): rd_(rs, rt); W.update((HI, LO))
        elif fn in (28, 29, 46, 47): rd_(rs, rt); R.update((HI, LO)); W.update((HI, LO))
        elif fn in (32, 33, 34, 35, 36, 37, 38, 39, 42, 43, 44, 45): rd_(rs, rt); wr(rd)
        else: i.kind = 'unknown'
        return i
    if op == 1:
        if rt in (0, 1, 2, 3, 16, 17, 18, 19):
            i.kind = 'branch'; rd_(rs); i.target = pc + 4 + i.simm * 4; i.likely = rt in (2, 3, 18, 19); i.link = rt >= 16
            if i.link: W.add(31)
        else: i.kind = 'unknown'
        return i
    if op in (2, 3):
        i.kind = 'j' if op == 2 else 'jal'; i.target = ((pc + 4) & 0xF0000000) | ((w & 0x3FFFFFF) << 2)
        if op == 3: W.add(31); i.link = True
        return i
    if op in (4, 5, 20, 21):
        i.kind = 'branch'; rd_(rs, rt); i.target = pc + 4 + i.simm * 4; i.likely = op >= 20; return i
    if op in (6, 7, 22, 23):
        i.kind = 'branch'; rd_(rs); i.target = pc + 4 + i.simm * 4; i.likely = op >= 20; return i
    if op in (8, 9, 10, 11, 12, 13, 14): rd_(rs); wr(rt); return i
    if op == 15: wr(rt); return i
    if op == 0x1f:
        if fn == 0: rd_(rs); wr(rt); return i                       # ext
        if fn == 4: rd_(rs, rt); wr(rt); return i                   # ins
        if fn == 0x20 and i.sa in (2, 3, 0x10, 0x14, 0x18): rd_(rt); wr(rd); return i   # wsbh wsbw seb bitrev seh
        i.kind = 'unknown'; return i
    if op in (0x20, 0x21, 0x23, 0x24, 0x25):
        size = {0x20: 1, 0x24: 1, 0x21: 2, 0x25: 2, 0x23: 4}[op]
        i.kind = 'load'; rd_(rs); wr(rt); i.mem = (rs, i.simm, size, op in (0x20, 0x21), 'load'); return i
    if op in (0x22, 0x26):
        i.kind = 'load'; rd_(rs, rt); wr(rt); i.mem = (rs, i.simm, 4, False, 'lwl' if op == 0x22 else 'lwr'); return i
    if op in (0x28, 0x29, 0x2b):
        size = {0x28: 1, 0x29: 2, 0x2b: 4}[op]
        i.kind = 'store'; rd_(rs, rt); i.mem = (rs, i.simm, size, False, 'store'); return i
    if op in (0x2a, 0x2e):
        i.kind = 'store'; rd_(rs, rt); i.mem = (rs, i.simm, 4, False, 'swl' if op == 0x2a else 'swr'); return i
    if op == 0x2f: i.kind = 'nop'; return i                            # cache
    if op == 0x31: i.kind = 'load'; rd_(rs); W.add(32 + rt); i.mem = (rs, i.simm, 4, False, 'lwc1'); return i
    if op == 0x39: i.kind = 'store'; rd_(rs); R.add(32 + rt); i.mem = (rs, i.simm, 4, False, 'swc1'); return i
    if op == 0x11:
        fs = rd; fd = i.sa; ft = rt
        if rs == 0: R.add(32 + fs); wr(rt); return i                 # mfc1
        if rs == 2: wr(rt); R.add(FCC); return i                     # cfc1
        if rs == 4: rd_(rt); W.add(32 + fs); return i                # mtc1
        if rs == 6: rd_(rt); W.add(FCC); return i                    # ctc1
        if rs == 8:
            i.kind = 'branch'; R.add(FCC); i.target = pc + 4 + i.simm * 4; i.likely = ((w >> 16) & 3) >= 2; return i
        if rs == 0x14 and fn == 0x20: R.add(32 + fs); W.add(32 + fd); return i
        if rs == 0x10:
            if fn in (0, 1, 2, 3): R.update((32 + fs, 32 + ft)); W.add(32 + fd); return i
            if fn in (4, 5, 6, 7, 0x0c, 0x0d, 0x0e, 0x0f, 0x24): R.add(32 + fs); W.add(32 + fd); return i
            if fn >= 0x30: R.update((32 + fs, 32 + ft)); W.add(FCC); return i
        i.kind = 'unknown'; return i
    if op == 0x12:
        if rs == 8:
            i.kind = 'branch'; R.add(VF); i.target = pc + 4 + i.simm * 4; i.likely = ((w >> 16) & 3) >= 2; return i
        if rs == 3: i.kind = 'vfpu'; R.add(VF); wr(rt); return i       # mfv / mfvc
        if rs == 7: i.kind = 'vfpu'; rd_(rt); R.add(VF); W.add(VF); return i   # mtv / mtvc
        i.kind = 'unknown'; return i
    if op in (0x32, 0x36, 0x35):
        i.kind = 'vfpu'; rd_(rs); R.add(VF); W.add(VF); i.mem = (rs, s16(w & 0xFFFC), 4 if op == 0x32 else 16, False, 'lv'); return i
    if op in (0x3a, 0x3e, 0x3d):
        i.kind = 'vfpu'; rd_(rs); R.add(VF); i.mem = (rs, s16(w & 0xFFFC), 4 if op == 0x3a else 16, False, 'sv'); return i
    if op in (0x18, 0x19, 0x1b, 0x34, 0x37, 0x3c):
        i.kind = 'vfpu'; R.add(VF); W.add(VF); return i
    if op == 0x3f: i.kind = 'nop'; return i
    i.kind = 'unknown'
    return i


CTL = ('branch', 'j', 'jal', 'jr', 'jalr')
