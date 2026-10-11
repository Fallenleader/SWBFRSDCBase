"""Program model for the decompiler: module image, decoded code, functions, jump tables.

Evidence used (all from the EBOOT itself; nothing assumed from symbol names, there are none):
  * relocation table: which instruction pairs build absolute addresses (HI16/LO16), which data words are pointers (R_MIPS_32),
    which jal targets exist (R_MIPS_26)
  * jal targets, code pointers stored in data (vtables, callbacks, ctors/dtors), code-address constants in code
  * jump tables: lw from (table + 4*index) followed by jr, table = relocated rodata words pointing into the same function
"""
import sys, os, struct, bisect, collections
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pspmod import Module, BASE
from isa import decode, s16, CTL

EBOOT_DEFAULT = os.environ.get('RS_EBOOT', 'EBOOT.BIN')


class Prog:
    def __init__(s, path=EBOOT_DEFAULT):
        s.m = m = Module(path)
        s.code_lo = BASE + m.sec['.text'][3] - 0x40   # .init precedes .text
        s.code_hi = BASE + m.sec['.fini'][3] + m.sec['.fini'][5]
        s.stub_lo = BASE + m.sec['.sceStub.text.scePsmf'][3]
        s.stub_hi = BASE + m.sec['.lib.ent.top'][3]
        s.ins = {a: decode(m.r32(a - BASE), a) for a in range(s.code_lo, s.code_hi, 4)}
        s.ptr_at = {BASE + o: v for o, v in m.jumpptrs}            # data address -> pointer value
        s.hilo = {}                                                 # instruction address -> absolute address it completes
        for h, l, full in m.hi16_pairs:
            s.hilo[BASE + h] = full; s.hilo[BASE + l] = full
        s.sections = sorted((BASE + x[3], BASE + x[3] + x[5], n) for n, x in m.sec.items() if x[5] and (x[2] & 2))
        s.parse_stubs()

    def r32(s, a): return s.m.r32(a - BASE)
    def is_code(s, a): return s.code_lo <= a < s.code_hi and (a & 3) == 0
    def section_of(s, a):
        for lo, hi, n in s.sections:
            if lo <= a < hi: return n
        return None

    def parse_stubs(s):
        m = s.m; ls = m.sec['.lib.stub']; n = ls[5] // 20; s.stubs = {}
        def cstr(v):
            o = v - BASE if v >= BASE else v; e = m.mem.index(b'\0', o); return m.mem[o:e].decode('latin1')
        for i in range(n):
            nm, ver, fl, sz, vc, sc, nidp, stubp = struct.unpack_from('<IHHBBHII', m.mem, ls[3] + i * 20)
            lib = cstr(nm)
            nidp = nidp - BASE if nidp >= BASE else nidp; stubp = stubp - BASE if stubp >= BASE else stubp
            for k in range(sc):
                nid = struct.unpack_from('<I', m.mem, nidp + 4 * k)[0]
                s.stubs[BASE + stubp + 8 * k] = (lib, nid)

    # ------------------------------------------------------------------ jump tables
    def find_jump_tables(s, base_entries):
        """jr rX (rX != ra) with rX = lw(table + 4*idx).  Table size: the index range check (sltiu t, idx, N) if one is
        found for the same index register, otherwise the run of code pointers that stay inside the function."""
        s.jtabs = {}; s.jr_unknown = []
        starts = {}
        for a, i in s.ins.items():
            if i.kind != 'jr' or i.rs == 31: continue
            r = s.slice_table(a, i.rs)
            if r is None: s.jr_unknown.append(a); continue
            starts[a] = r
        tabset = set(t for t, _ in starts.values())
        B = sorted(base_entries)
        for a, (tab, idx) in starts.items():
            k = bisect.bisect_right(B, a) - 1; flo = B[k]; fhi = B[k + 1] if k + 1 < len(B) else s.code_hi
            bound = None
            if idx is not None:
                for q in range(a - 4, max(flo, a - 2000) - 4, -4):
                    i = s.ins[q]
                    if i.op == 11 and i.rs == idx and s.feeds_branch(q, i.rt, a): bound = i.imm; break
            ents = []; t = tab
            while t in s.ptr_at and s.is_code(s.ptr_at[t]) and flo <= s.ptr_at[t] < fhi:
                if t != tab and t in tabset: break
                if bound is not None and len(ents) >= bound: break
                ents.append(s.ptr_at[t]); t += 4
            s.jtabs[a] = (tab, ents, bound)
        return s.jtabs

    def slice_table(s, jr_pc, reg):
        """Walk back (max 24 insns, straight-line) to find reg = LW(x + lo) with x/lo from a HI/LO table address."""
        a = jr_pc - 4; want = reg; steps = 0
        load = None
        while steps < 24 and a >= s.code_lo:
            i = s.ins[a]
            if i.kind in ('jal', 'j', 'jr', 'jalr'): break
            if want in i.writes:
                if i.kind == 'load' and i.mem[2] == 4 and i.mem[4] == 'load':
                    if a in s.hilo: return s.hilo[a], s.index_reg(a, i.mem[0])   # lw rX, %lo(table)(rY)
                    load = i; want = i.mem[0]               # base register = table + 4*idx
                elif load is not None and (i.w & 0xFC0007FF) == 0x00000021:   # addu rd, rs, rt
                    for r, o in ((i.rs, i.rt), (i.rt, i.rs)):
                        t = s.find_const(a, r)
                        if t is not None and s.section_of(t) in ('.rodata', '.data'): return t + load.mem[1], s.shift_src(a, o)
                    return None
                else:
                    return None
            a -= 4; steps += 1
        return None

    def feeds_branch(s, q, t, end):
        """Is the result t of the instruction at q tested by a branch before it is overwritten (scanning to end)?"""
        for x in range(q + 4, end, 4):
            i = s.ins[x]
            if i.kind == 'branch' and t in i.reads: return True
            if t in i.writes: return False
        return False

    def shift_src(s, pc, reg):
        """reg = idx << 2 just before pc -> idx register (or None)."""
        a = pc - 4
        for _ in range(16):
            i = s.ins.get(a)
            if i is None or i.kind in CTL: return None
            if reg in i.writes:
                if i.op == 0 and (i.w & 63) == 0 and i.sa == 2: return i.rt
                return None
            a -= 4
        return None

    def index_reg(s, pc, reg):
        """reg = (idx << 2) + %hi(table): find the shifted index feeding the addu."""
        a = pc - 4
        for _ in range(16):
            i = s.ins.get(a)
            if i is None or i.kind in CTL: return None
            if reg in i.writes:
                if (i.w & 0xFC0007FF) == 0x21:
                    for r in (i.rs, i.rt):
                        x = s.shift_src(a, r)
                        if x is not None: return x
                return None
            a -= 4
        return None

    def find_const(s, pc, reg):
        """Absolute address held in reg just before pc, from a relocated HI/LO pair (straight-line backwards)."""
        a = pc - 4
        for _ in range(32):
            i = s.ins.get(a)
            if i is None or i.kind in ('jal', 'j', 'jr', 'jalr'): return None
            if reg in i.writes:
                if a in s.hilo and (i.op in (9, 15)): return s.hilo[a]
                return None
            a -= 4
        return None

    # ------------------------------------------------------------------ functions
    def find_functions(s):
        B = set([BASE + s.m.entry, s.code_lo, BASE + s.m.sec['.fini'][3]])
        why = collections.defaultdict(set)
        for a, i in s.ins.items():
            if i.kind == 'jal' and s.is_code(i.target): B.add(i.target); why[i.target].add('jal')
        for a, v in s.hilo.items():
            if s.is_code(v) and s.ins[a].op in (9, 13): B.add(v); why[v].add('const')
        s.find_jump_tables(B)
        jt_cells = set()
        for tab, ents, _b in s.jtabs.values():
            for k in range(len(ents)): jt_cells.add(tab + 4 * k)
        E = set(B)
        for d, v in s.ptr_at.items():
            if s.is_code(v) and d not in jt_cells: E.add(v); why[v].add('dataptr')
        s.entries = sorted(E); s.why = why; s.jt_cells = jt_cells
        # address taken = a pointer the program can call through: code constants, or pointers in program data
        # (.eh_frame / module-export tables are metadata, not callable pointers in the game)
        s.addr_taken = set(v for v, w in why.items() if 'const' in w)
        for d, v in s.ptr_at.items():
            if v in E and d not in jt_cells and s.section_of(d) in ('.rodata', '.data', '.ctors', '.dtors'): s.addr_taken.add(v)
        return s.entries

    def func_end(s, idx):
        return s.entries[idx + 1] if idx + 1 < len(s.entries) else s.code_hi


if __name__ == '__main__':
    p = Prog()
    p.find_functions()
    print('functions', len(p.entries), 'jump tables', len(p.jtabs), 'unresolved jr', len(p.jr_unknown))
    print('unresolved jr sites', [hex(x) for x in p.jr_unknown[:20]])
