#!/usr/bin/env python3
"""SWBFRSDCBase generator: EBOOT -> native C source for every function.

Usage: gen.py <out dir> <decrypted ULUS10292 EBOOT.BIN>

Per function (facts from prog/cfg/abi/sig/frame/icall):
  * C function with recovered parameters (int a0-a3,t0-t3 / float f12-f19) and return type (void/u32/u64/float/rv_t);
    functions whose address is taken use the uniform prototype ifn_t (indirect calls).
  * registers are locals; callee-saved register spills and their reloads are removed; the stack frame is a local array.
  * jal/jalr -> C calls; jr ra -> return; jump tables -> switch; branches -> goto.
  * relocated address constants -> symbolic addresses (D_xxxxxxxx in the data segment, function names for code).
  * firmware imports -> calls to the SDK function by its name (platform layer implements them).
  * VFPU instructions -> C float code on the per-thread vector state.
"""
import sys, os, re, json, collections
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE); sys.path.insert(0, os.path.join(HERE, '..'))
from prog import Prog, BASE
from isa import s16, HI, LO, FCC
import cfg as CFG
import sig as SIG
import frame as FRAME
from abi import pair_partner
from vfpu_static import VfpuEmitter

GPRN = ['zero', 'at', 'v0', 'v1', 'a0', 'a1', 'a2', 'a3', 't0', 't1', 't2', 't3', 't4', 't5', 't6', 't7',
        's0', 's1', 's2', 's3', 's4', 's5', 's6', 's7', 't8', 't9', 'k0', 'k1', 'gp', 'sp', 'fp', 'ra']
INT_ARGS = list(range(4, 12)); FLT_ARGS = [32 + f for f in range(12, 20)]
SDK64 = {'sceIoLseek'}
# PSP memory-map idioms verified by reading the code: p | 0x40000000 makes the uncached mirror address of pointer p.
# Natively there is no uncached mirror: the result is p itself.  Classified by dataflow (tools/dc/uncached.py): these results
# are used as load/store bases; every other OR-0x40000000 site accumulates flag bits into a flag word.
UNCACHED_OR = {
    0x088F2D88: 'uncached alias of the static buffer D_08B4F400 (cache invalidated later in the function)',
    0x0890B18C: 'uncached output pointer for VFPU stores',
    0x0890A668: 'uncached alias of the output buffer argument (used as a store base below)',
    0x08A97400: 'libgu sceGuStart: display list written through its uncached mirror',
}   # SDK functions returning a 64-bit value (v0:v1)
# The PSP's 16 KB scratchpad RAM at the fixed address 0x00010000.  The game reaches it through one accessor (func_088F7660:
# "lui v0, 1" in the delay slot of its return), found by running with all memory above 0x80000000 (Makefile LAYOUT=high).
# Natively it is the support symbol rs_scratchpad.
SCRATCHPAD_LUI = {0x088F7664: 'PSP scratchpad (0x00010000)'}


def R(n): return '0' if n == 0 else ('psp_k0' if n == 26 else GPRN[n])   # $k0: per-thread block provided by the platform
def FR(n): return 'f%d' % n


class Gen:
    def __init__(s, eboot):
        p = s.p = Prog(eboot); p.find_functions()
        s.F, s.U = SIG.solve(p, verbose=False)
        s.nid = json.load(open(os.path.join(HERE, 'nid_names.json')))
        s.names = {}
        nf = os.path.join(HERE, 'names.json')
        if os.path.exists(nf): s.names = {int(k, 16): v for k, v in json.load(open(nf)).items()}
        s.frames = {}
        s.sym_used = set()
        s.stub_used = {}
        s.vstats = collections.Counter()

    # ---------------------------------------------------------------- naming
    def fname(s, a): return s.names.get(a, 'func_%08X' % a)

    def stubname(s, addr):
        lib, nid = s.p.stubs[addr]
        n = s.nid.get('%08X' % nid, '%s_%08X' % (lib, nid))
        s.stub_used[n] = (lib, nid)
        return n

    def sym(s, a):
        """guest address expression of address a (module image): a function's address (RS_FADDR) or a data symbol"""
        if s.p.is_code(a) and a in s.F: return 'RS_FADDR(%s, 0x%08Xu)' % (s.fname(a), a)
        s.sym_used.add(a)
        return 'D_%08X' % a

    # ---------------------------------------------------------------- signatures
    def ret_kind(s, f):
        if f.addr_taken: return 'rv'
        m = f.rets & f.mret
        hasi = m & ((1 << 2) | (1 << 3)); hasf = m & (1 << 32)
        if not m: return 'void'
        if hasi and hasf: return 'rv'
        if hasf: return 'float'
        if m & (1 << 3): return 'u64'
        return 'u32'

    def params(s, f):
        if f.addr_taken: return INT_ARGS + FLT_ARGS
        return [r for r in INT_ARGS + FLT_ARGS if f.params >> r & 1]

    def needs_sp_in(s, a):
        fr = s.frames.get(a)
        return bool(fr and fr.above_loads)

    def proto(s, a):
        f = s.F[a]; rk = s.ret_kind(f)
        ct = {'void': 'void', 'u32': 'u32', 'u64': 'u64', 'float': 'float', 'rv': 'rv_t'}[rk]
        ps = ['%s %s' % ('u32' if r < 32 else 'float', R(r) if r < 32 else FR(r - 32)) for r in s.params(f)]
        if s.needs_sp_in(a): ps.append('u32 sp_in')
        return '%s %s(%s)' % (ct, s.fname(a), ', '.join(ps) or 'void')

    # ---------------------------------------------------------------- instructions
    def addr(s, i):
        return '%s%s' % (R(i.mem[0]), ('+%d' % i.mem[1]) if i.mem[1] > 0 else ('%d' % i.mem[1] if i.mem[1] else ''))

    def emit_insn(s, f, pc, fr, ctx):
        p = s.p; i = p.ins[pc]; w = i.w; op = i.op; rs, rt, rd, sa = i.rs, i.rt, i.rd, i.sa
        imm = i.imm; simm = i.simm; fn = w & 63
        if pc in fr.drop: return []
        if pc in ctx['skip']: return []
        def set_(r, e): return [] if r == 0 else ['%s = %s;' % (R(r), e)]
        A, B = R(rs), R(rt)
        if i.kind == 'nop': return []
        # relocated absolute addresses
        if pc in p.hilo and op == 15:
            full = p.hilo[pc]
            lo = s16(full & 0xFFFF)   # the paired low part is added back by the low instruction
            return set_(rt, '%s - (%d)' % (s.sym(full), lo) if lo else s.sym(full))
        if op == 0:
            if fn == 0: return set_(rd, '%s << %d' % (B, sa)) if sa else set_(rd, B)
            if fn == 2: return set_(rd, ('ROTR(%s, %d)' if rs == 1 else '%s >> %d') % (B, sa))
            if fn == 3: return set_(rd, '(u32)((s32)%s >> %d)' % (B, sa))
            if fn == 4: return set_(rd, '%s << (%s & 31)' % (B, A))
            if fn == 6: return set_(rd, ('ROTR(%s, %s)' if sa == 1 else '%s >> (%s & 31)') % (B, A))
            if fn == 7: return set_(rd, '(u32)((s32)%s >> (%s & 31))' % (B, A))
            if fn == 10: return ['if (%s == 0) %s = %s;' % (B, R(rd), A)] if rd else []
            if fn == 11: return ['if (%s != 0) %s = %s;' % (B, R(rd), A)] if rd else []
            if fn == 12: return ['rs_break(0x%x, 0x%08x); /* syscall */' % ((w >> 6) & 0xFFFFF, pc)]
            if fn == 13: return ['rs_break(0x%x, 0x%08x);' % ((w >> 6) & 0xFFFFF, pc)]
            if fn == 15: return []
            if fn == 16: return set_(rd, 'hi')
            if fn == 17: return ['hi = %s;' % A]
            if fn == 18: return set_(rd, 'lo')
            if fn == 19: return ['lo = %s;' % A]
            if fn == 22: return set_(rd, 'CLZ(%s)' % A)
            if fn == 23: return set_(rd, 'CLZ(~%s)' % A)
            if fn == 24: return ['{ s64 p_ = (s64)(s32)%s * (s32)%s; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }' % (A, B)]
            if fn == 25: return ['{ u64 p_ = (u64)%s * %s; lo = (u32)p_; hi = (u32)(p_ >> 32); }' % (A, B)]
            if fn == 26: return ['{ s32 x_ = (s32)%s, y_ = (s32)%s; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ %% y_); } }' % (A, B)]
            if fn == 27: return ['{ u32 x_ = %s, y_ = %s; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ %% y_; } }' % (A, B)]
            if fn in (28, 29, 46, 47):
                sgn = fn in (28, 46); sub = fn in (46, 47)
                prod = '(s64)(s32)%s * (s32)%s' % (A, B) if sgn else '(u64)%s * %s' % (A, B)
                return ['{ u64 acc_ = ((u64)hi << 32) | lo; acc_ %s= (u64)(%s); lo = (u32)acc_; hi = (u32)(acc_ >> 32); }' % ('-' if sub else '+', prod)]
            if fn in (32, 33): return set_(rd, '%s + %s' % (A, B))
            if fn in (34, 35):
                if rd == 29 and rs == 29 and rt not in (0, 29) and s.const_before(pc, rt) is None:
                    return ['sp = RS_GADDR(RS_ALLOCA(%s)); /* runtime-sized stack allocation */' % B]
                return set_(rd, '%s - %s' % (A, B))
            if fn == 36:
                if s.const_before(pc, rt) == 0x5FFFFFFF: return set_(rd, '%s /* & 0x5FFFFFFF: PSP cache-mode bits of an address, none natively */' % A)
                if s.const_before(pc, rs) == 0x5FFFFFFF: return set_(rd, '%s /* & 0x5FFFFFFF: PSP cache-mode bits of an address, none natively */' % B)
                return set_(rd, '%s & %s' % (A, B))
            if fn == 37:
                if pc in UNCACHED_OR:
                    keep = B if s.const_before(pc, rs) == 0x40000000 else A
                    if s.const_before(pc, rt) != 0x40000000 and s.const_before(pc, rs) != 0x40000000:
                        raise SystemExit('UNCACHED_OR site %08x does not OR the constant 0x40000000' % pc)
                    return set_(rd, '%s /* %s */' % (keep, UNCACHED_OR[pc]))
                return set_(rd, '%s | %s' % (A, B) if rs and rt else (A if rt == 0 else B))
            if fn == 38: return set_(rd, '%s ^ %s' % (A, B))
            if fn == 39: return set_(rd, '~(%s | %s)' % (A, B))
            if fn == 42: return set_(rd, '(s32)%s < (s32)%s' % (A, B))
            if fn == 43: return set_(rd, '%s < %s' % (A, B))
            if fn == 44: return set_(rd, '(s32)%s > (s32)%s ? %s : %s' % (A, B, A, B))
            if fn == 45: return set_(rd, '(s32)%s < (s32)%s ? %s : %s' % (A, B, A, B))
            raise SystemExit('unhandled special %08x at %08x' % (w, pc))
        if op in (8, 9):
            if rs == 0: return set_(rt, '%d' % simm if simm >= 0 else '(u32)%d' % simm)
            return set_(rt, '%s + %d' % (A, simm) if simm >= 0 else '%s - %d' % (A, -simm))
        if op == 10: return set_(rt, '(s32)%s < %d' % (A, simm))
        if op == 11: return set_(rt, '%s < 0x%xu' % (A, simm & 0xFFFFFFFF))
        if op == 12: return set_(rt, '%s & 0x%x' % (A, imm))
        if op == 13: return set_(rt, ('%s | 0x%x' % (A, imm)) if rs else '0x%x' % imm)
        if op == 14: return set_(rt, '%s ^ 0x%x' % (A, imm))
        if op == 15:
            if pc in SCRATCHPAD_LUI:
                if imm != 1: raise SystemExit('SCRATCHPAD_LUI site %08x is not lui 1' % pc)
                return set_(rt, 'RS_GADDR(rs_scratchpad) /* %s */' % SCRATCHPAD_LUI[pc])
            return set_(rt, '0x%xu' % (imm << 16))
        if op == 0x1f:
            if fn == 0:
                size = rd + 1; mask = (1 << size) - 1 if size < 32 else 0xFFFFFFFF
                return set_(rt, '(%s >> %d) & 0x%x' % (A, sa, mask))
            if fn == 4:
                size = rd - sa + 1; mask = (1 << size) - 1 if size < 32 else 0xFFFFFFFF
                if sa == 0 and size == 29 and s.const_before(pc, rt) == 0x40000000:
                    # PSP idiom: 0x40000000 | (p & 0x1FFFFFFF) = uncached mirror of pointer p; natively the same memory
                    return set_(rt, '%s /* uncached alias (PSP memory map) */' % A)
                if rs == 0 and sa == 29 and size == 3:
                    # PSP idiom: p & 0x1FFFFFFF = the cached (KSEG-free) address of pointer p (2 sites, both libgu: sceGuInit's
                    # list handed to sceGeListEnQueue and the matrix-stack base of the context setup); natively p itself
                    return [] if rt == 0 else ['/* %s: cached address (PSP memory map), natively unchanged */' % R(rt)]
                return [] if rt == 0 else ['%s = (%s & ~(0x%xu << %d)) | ((%s & 0x%x) << %d);' % (R(rt), R(rt), mask, sa, A, mask, sa)]
            if fn == 0x20:
                if sa == 2: return set_(rd, 'WSBH(%s)' % B)
                if sa == 3: return set_(rd, 'WSBW(%s)' % B)
                if sa == 0x10: return set_(rd, '(u32)(s32)(s8)%s' % B)
                if sa == 0x18: return set_(rd, '(u32)(s32)(s16)%s' % B)
                if sa == 0x14: return set_(rd, 'BITREV(%s)' % B)
            raise SystemExit('unhandled special3 %08x at %08x' % (w, pc))
        if i.kind == 'load' and i.mem[4] == 'load':
            ad = s.addr(i)
            e = {(1, True): '(u32)(s32)LD_S8(%s)', (1, False): 'LD_U8(%s)', (2, True): '(u32)(s32)LD_S16(%s)',
                 (2, False): 'LD_U16(%s)', (4, False): 'LD32(%s)'}[(i.mem[2], i.mem[3])] % ad
            return set_(rt, e)
        if i.kind == 'store' and i.mem[4] == 'store':
            return ['%s(%s, %s);' % ({1: 'ST8', 2: 'ST16', 4: 'ST32'}[i.mem[2]], s.addr(i), B)]
        if i.mem and i.mem[4] in ('lwl', 'lwr'):
            if pair_partner(p, i):
                j = p.ins[pc + 4] if p.ins.get(pc + 4) and pair_partner(p, p.ins[pc + 4]) and p.ins[pc + 4].rt == rt else None
                if j is not None and pc + 4 not in ctx['labels']:
                    ctx['skip'].add(pc + 4)
                    low = min(i.mem[1], j.mem[1])
                    return set_(rt, 'LDU32(%s%s)' % (R(rs), ('+%d' % low) if low > 0 else ('%d' % low if low else '')))
            return set_(rt, '%s(%s, %s)' % ('LWL' if i.mem[4] == 'lwl' else 'LWR', B, s.addr(i)))
        if i.mem and i.mem[4] in ('swl', 'swr'):
            j = p.ins.get(pc + 4)
            if j is not None and j.mem and j.mem[4] in ('swl', 'swr') and j.mem[4] != i.mem[4] and j.rt == rt and j.rs == rs \
                    and abs(j.mem[1] - i.mem[1]) == 3 and pc + 4 not in ctx['labels']:
                ctx['skip'].add(pc + 4); low = min(i.mem[1], j.mem[1])
                return ['STU32(%s%s, %s);' % (R(rs), ('+%d' % low) if low > 0 else ('%d' % low if low else ''), B)]
            return ['%s(%s, %s);' % ('SWL' if i.mem[4] == 'swl' else 'SWR', s.addr(i), B)]
        if op == 0x2f: return []
        if op == 0x31: return ['%s = BITSF(LD32(%s));' % (FR(rt), s.addr(i))]
        if op == 0x39: return ['ST32(%s, FBITS(%s));' % (s.addr(i), FR(rt))]
        if op == 0x11: return s.cop1(pc, i)
        if i.kind == 'vfpu' or op == 0x12:
            return s.vfpu(pc, i, ctx)
        raise SystemExit('unhandled %08x at %08x (%s)' % (w, pc, i.kind))

    def const_before(s, pc, reg, limit=12):
        """constant value of reg just before pc, from lui/ori/addiu/moves in the preceding straight-line code (or None)"""
        p = s.p; q = pc - 4
        for _ in range(limit):
            i = p.ins.get(q)
            if i is None or i.kind in ('branch', 'j', 'jal', 'jr', 'jalr'): return None
            if reg in i.writes:
                if i.op == 15: return i.imm << 16
                if i.op == 13: v = s.const_before(q, i.rs, limit) if i.rs else 0; return None if v is None else v | i.imm
                if i.op == 0 and (i.w & 63) in (0x21, 0x25) and (i.rs == 0 or i.rt == 0):
                    return s.const_before(q, i.rt if i.rs == 0 else i.rs, limit)
                return None
            q -= 4
        return None

    def cop1(s, pc, i):
        w = i.w; rs = i.rs; rt = i.rt; fs = i.rd; fd = i.sa; fn = w & 63; ft = rt
        def set_(r, e): return [] if r == 0 else ['%s = %s;' % (R(r), e)]
        if rs == 0: return set_(rt, 'FBITS(%s)' % FR(fs))
        if rs == 2:
            if fs == 31: return set_(rt, '(fpu_csr & ~(1u << 23)) | ((u32)fcc << 23)')
            return set_(rt, '0x3351u' if fs == 0 else '0')
        if rs == 4: return ['%s = BITSF(%s);' % (FR(fs), R(rt))]
        if rs == 6:
            if fs == 31: return ['fpu_csr = %s & 0x0183FFFFu; fcc = (%s >> 23) & 1;' % (R(rt), R(rt))]
            return []
        if rs == 0x14 and fn == 0x20: return ['%s = (float)(s32)FBITS(%s);' % (FR(fd), FR(fs))]
        if rs == 0x10:
            if fn == 0: return ['%s = %s + %s;' % (FR(fd), FR(fs), FR(ft))]
            if fn == 1: return ['%s = %s - %s;' % (FR(fd), FR(fs), FR(ft))]
            if fn == 2: return ['%s = %s * %s;' % (FR(fd), FR(fs), FR(ft))]
            if fn == 3: return ['%s = %s / %s;' % (FR(fd), FR(fs), FR(ft))]
            if fn == 4: return ['%s = sqrtf(%s);' % (FR(fd), FR(fs))]
            if fn == 5: return ['%s = BITSF(FBITS(%s) & 0x7FFFFFFFu);' % (FR(fd), FR(fs))]
            if fn == 6: return ['%s = %s;' % (FR(fd), FR(fs))]
            if fn == 7: return ['%s = BITSF(FBITS(%s) ^ 0x80000000u);' % (FR(fd), FR(fs))]
            if fn in (0x0c, 0x0d, 0x0e, 0x0f): return ['%s = BITSF(F2I(%s, %d));' % (FR(fd), FR(fs), fn - 0x0c)]
            if fn == 0x24: return ['%s = BITSF(F2I(%s, fpu_csr & 3));' % (FR(fd), FR(fs))]
            if fn >= 0x30: return ['fcc = FCMP(%s, %s, %d);' % (FR(fs), FR(ft), fn & 15)]
        raise SystemExit('unhandled cop1 %08x at %08x' % (w, pc))

    VREPL = [(re.compile(r'\bLW\('), 'LD32('), (re.compile(r'\bSW\('), 'ST32('), (re.compile(r'c->vcc'), 'vfpu_cc')]

    def vfpu(s, pc, i, ctx):
        ve = ctx['ve']
        L = ve.emit(pc, i.w)
        out = []
        for x in L:
            if 'VFPU(' in x or 'c->pfx' in x:
                raise SystemExit('VFPU instruction %08x at %08x has no static translation' % (i.w, pc))
            for rx, rep in s.VREPL: x = rx.sub(rep, x)
            out.append(x)
        s.vstats['vfpu'] += 1
        return out

    # ---------------------------------------------------------------- calls
    def call_args(s, f, b, need_regs):
        """argument expressions for the callee's parameter list; registers that carry no meaningful value at the call
        (written neither since the last call nor passed through from entry) are passed as 0."""
        av = f.avail.get(b.start, SIG.PASS | SIG.ARGM)
        out = []
        for r in need_regs:
            ok = (av & SIG.PASS) or (av >> r & 1)
            if r < 32: out.append(R(r) if ok else '0')
            else: out.append(FR(r - 32) if ok else '0.0f')
        return out

    def ret_assign(s, rk, call):
        if rk == 'void': return '%s;' % call
        if rk == 'u32': return 'v0 = %s;' % call
        if rk == 'u64': return '{ u64 r_ = %s; v0 = (u32)r_; v1 = (u32)(r_ >> 32); }' % call
        if rk == 'float': return 'f0 = %s;' % call
        return '{ rv_t r_ = %s; v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }' % call

    def call_stmt(s, f, b):
        c = b.call
        if c[0] == 'stub':
            n = s.stubname(c[1])
            if n in SDK64: return '{ u64 r_ = %s(%s); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }' % (n, ', '.join(R(r) for r in INT_ARGS))
            return 'v0 = %s(%s);' % (n, ', '.join(R(r) for r in INT_ARGS))
        if c[0] == 'call':
            g = s.F.get(c[1])
            if g is None: return 'rs_break(0xDEAD, 0x%08x); /* call to address 0x%08x (unresolved weak symbol) */' % (b.term, c[1])
            args = s.call_args(f, b, s.params(g))
            if s.needs_sp_in(c[1]): args.append('sp')
            return s.ret_assign(s.ret_kind(g), '%s(%s)' % (s.fname(c[1]), ', '.join(args)))
        if c[0] == 'dyn':
            p = s.p; cands = p.icand.get(b.term)
            need = SIG.union_params(s.F, cands) if cands else SIG.ARGM
            regs = INT_ARGS + FLT_ARGS
            av = f.avail.get(b.start, SIG.PASS | SIG.ARGM)
            args = []
            for r in regs:
                ok = (need >> r & 1) and ((av & SIG.PASS) or (av >> r & 1))
                args.append((R(r) if r < 32 else FR(r - 32)) if ok else ('0' if r < 32 else '0.0f'))
            return s.ret_assign('rv', '((ifn_t)RS_FPTR(t_))(%s)' % ', '.join(args))
        raise SystemExit('call kind %r' % (c,))

    def ret_stmt(s, f):
        rk = s.ret_kind(f)
        if rk == 'void': return 'return;'
        if rk == 'u32': return 'return v0;'
        if rk == 'u64': return 'return (u64)v0 | ((u64)v1 << 32);'
        if rk == 'float': return 'return f0;'
        return 'return (rv_t){ v0, v1, f0 };'

    def tail_stmt(s, f, b, target):
        """control leaves the function into another function (fall-through / jump): call it and return its result"""
        g = s.F.get(target)
        if g is None: raise SystemExit('tail into non-function %08x from %08x' % (target, f.a))
        args = s.call_args(f, b, s.params(g))
        if s.needs_sp_in(target): args.append('sp')
        return s.ret_assign(s.ret_kind(g), '%s(%s)' % (s.fname(target), ', '.join(args))) + ' ' + s.ret_stmt(f)

    # ---------------------------------------------------------------- function
    def emit_function(s, a):
        p = s.p; f = s.F[a]; fr = s.frames[a]; blocks = f.blocks
        labels = set(blocks)
        ctx = {'skip': set(), 'labels': labels, 've': VfpuEmitter(R, R)}
        body = []

        def lab(t): return 'L_%08X' % t

        def block_code(b):
            ctx['ve'].state = ['off', 'off', 'off']   # verified: no VFPU prefix crosses control flow
            out = []
            for pc in b.body: out.extend(s.emit_insn(f, pc, fr, ctx))
            if b.term is None:
                for k, t in b.succ: out.append('goto %s;' % lab(t))
                if b.exit:
                    if b.exit[0] == 'tail': out.append(s.tail_stmt(f, b, b.exit[1]))
                return out
            t = p.ins[b.term]; delay = s.emit_insn(f, b.delay, fr, ctx) if b.delay is not None else []
            k = t.kind
            if b.call:
                pre = []
                if k == 'jalr': pre.append('t_ = %s;' % R(t.rs))
                cond = None
                if k == 'branch':   # bltzal / bgezal (likely variants)
                    cond = s.cond(t)
                    pre.append('cnd_ = %s;' % cond)
                if t.link and k != 'jalr': pass   # ra is not materialised: returns are native
                if k == 'jalr' and t.rd not in (0, 31): pre.append('%s = 0x%08xu; /* return address */' % (R(t.rd), b.term + 8))
                out.extend(pre)
                callc = s.call_stmt(f, b)
                if k == 'branch':
                    if b.likely: out.append('if (cnd_) { %s %s }' % (' '.join(delay), callc))
                    else: out.extend(delay); out.append('if (cnd_) %s' % callc)
                else:
                    out.extend(delay); out.append(callc)
                for kk, tt in b.succ:
                    if kk == 'fall': out.append('goto %s;' % lab(tt))
                if b.exit:
                    if b.exit[0] == 'tail': out.append(s.tail_stmt(f, b, b.exit[1]))
                return out
            if k == 'j':
                out.extend(delay)
                if b.exit and b.exit[0] == 'stub':
                    out.append('v0 = %s(%s); %s' % (s.stubname(b.exit[1]), ', '.join(R(r) for r in INT_ARGS), s.ret_stmt(f)))
                elif b.exit and b.exit[0] == 'tail': out.append(s.tail_stmt(f, b, b.exit[1]))
                else: out.append('goto %s;' % lab(t.target))
                return out
            if k == 'jr':
                if t.rs == 31:
                    out.extend(delay); out.append(s.ret_stmt(f)); return out
                tab, ents, _ = p.jtabs[b.term]
                out.append('t_ = %s;' % R(t.rs)); out.extend(delay)
                cases = ' '.join('case 0x%08Xu: goto %s;' % (x, lab(x)) for x in sorted(set(ents)))
                out.append('switch (t_) { %s default: rs_break(0, 0x%08x); }' % (cases, b.term))
                return out
            # conditional branch
            cond = s.cond(t)
            taken = None; fall = None; taken_out = None; fall_out = None
            for kk, tt in b.succ:
                if kk == 'taken': taken = tt
                elif kk == 'fall': fall = tt
                elif kk == 'taken-out': taken_out = tt
                elif kk == 'fall-out': fall_out = tt
            tk = ('goto %s;' % lab(taken)) if taken is not None else s.tail_stmt(f, b, taken_out)
            fl = ('goto %s;' % lab(fall)) if fall is not None else (s.tail_stmt(f, b, fall_out) if fall_out else '')
            out.append('cnd_ = %s;' % cond)
            if b.likely:
                out.append('if (cnd_) { %s %s }' % (' '.join(delay), tk))
            else:
                out.extend(delay); out.append('if (cnd_) { %s }' % tk)
            if fl: out.append(fl)
            return out

        order = sorted(blocks)
        for L in order:
            code = block_code(blocks[L])
            body.append('%s:;' % lab(L))
            body.extend('    ' + c for c in code if c)
        txt = '\n'.join(body)
        # locals: every register name used in the body (and not a parameter)
        prm = set(s.params(f))
        used_g = set(); used_f = set()
        for m in re.finditer(r'\b(at|v[01]|a[0-3]|t[0-9]|s[0-7]|k[01]|gp|fp|ra)\b', txt): used_g.add(m.group(1))
        for m in re.finditer(r'\bf(\d\d?)\b', txt): used_f.add(int(m.group(1)))
        rk = s.ret_kind(f)
        if rk in ('u32', 'u64', 'rv'): used_g.update(['v0', 'v1'] if rk != 'u32' else ['v0'])
        if rk in ('float', 'rv'): used_f.add(0)
        pnames = set(R(r) for r in prm if r < 32); fnames = set(r - 32 for r in prm if r >= 32)
        decl = []
        gl = [n for n in GPRN if n in used_g and n not in pnames]
        if gl: decl.append('u32 %s;' % ', '.join('%s = 0' % n for n in gl))
        fl = [x for x in range(32) if x in used_f and x not in fnames]
        if fl: decl.append('float %s;' % ', '.join('f%d = 0' % x for x in fl))
        if re.search(r'\bhi\b', txt) or re.search(r'\blo\b', txt): decl.append('u32 hi = 0, lo = 0;')
        if 'fcc' in txt: decl.append('int fcc = 0;')
        if 'cnd_' in txt: decl.append('int cnd_;')
        if 't_' in txt: decl.append('u32 t_;')
        if re.search(r'\bv\[', txt): decl.append('float *v = vfpu_v;')
        size = (fr.size + 15) & ~15
        above = (max(fr.above_loads) + 16) & ~15 if fr.above_loads else 0
        if re.search(r'\bsp\b', txt) or size or above:
            decl.append('u8 stack_[%d] __attribute__((aligned(16)));' % max(16, size + above))
            init = 'u32 sp = RS_GADDR(stack_ + %d);' % size
            if above: init += ' memcpy(stack_ + %d, PTR(sp_in), %d); /* stack-passed arguments */' % (size, above)
            decl.append(init)
        head = '/* %08X */\n%s\n{\n' % (a, s.proto(a))
        return head + ''.join('    %s\n' % d for d in decl) + txt + '\n}\n'

    def cond(s, t):
        op = t.op; rs, rt = t.rs, t.rt
        if op in (4, 20): return '%s == %s' % (R(rs), R(rt))
        if op in (5, 21): return '%s != %s' % (R(rs), R(rt))
        if op in (6, 22): return '(s32)%s <= 0' % R(rs)
        if op in (7, 23): return '(s32)%s > 0' % R(rs)
        if op == 1: return ('(s32)%s < 0' if (rt & 1) == 0 else '(s32)%s >= 0') % R(rs)
        if op == 0x11: return 'fcc' if ((t.w >> 16) & 1) else '!fcc'
        if op == 0x12:
            bit = '((vfpu_cc >> %d) & 1)' % ((t.w >> 18) & 7)
            return bit if ((t.w >> 16) & 1) else '!%s' % bit
        raise SystemExit('cond %08x' % t.w)

    # ---------------------------------------------------------------- output
    def run(s, out, nfiles=32):
        p = s.p
        os.makedirs(out, exist_ok=True)
        for k, a in enumerate(p.entries): s.frames[a] = FRAME.analyze(p, a, p.func_end(k))
        funcs = []
        for a in p.entries:
            try: funcs.append((a, s.emit_function(a)))
            except SystemExit as e:
                raise SystemExit('f %08x: %s' % (a, e))
        # split into files by address order, balanced by size
        total = sum(len(c) for _, c in funcs); per = total / nfiles; files = [[]]; cur = 0
        for a, c in funcs:
            if cur > per and len(files) < nfiles: files.append([]); cur = 0
            files[-1].append(c); cur += len(c)
        for n, fs in enumerate(files):
            with open(os.path.join(out, 'game_%02d.c' % n), 'w') as fo:
                fo.write('#include "game.h"\n\n' + '\n'.join(fs))
        with open(os.path.join(out, 'game.h'), 'w') as fo:
            fo.write('/* SWBFRSDCBase: prototypes of all game functions, data symbols, SDK imports. Generated by tools/dc/gen.py */\n')
            fo.write('#pragma once\n#include "rs_base.h"\n#include "psp_sdk.h"\n#include "symbols.h"\n\n')
            fo.write(''.join('%s;\n' % s.proto(a) for a in p.entries))
        with open(os.path.join(out, 'symbols.h'), 'w') as fo:
            fo.write('/* data symbols: addresses inside the game data segment (rs_image, see data.c) */\n#pragma once\n')
            fo.write('#define RS_IMAGE_BASE 0x%08Xu\n' % BASE)
            fo.write('#ifdef RS_GUEST64\n'
                     '/* 64-bit targets: the image lives in the guest window at its PSP address (copied from rs_image_init, data.c) */\n'
                     'extern u32 rs_image_init[];\n#define RS_IMAGE_ARRAY rs_image_init\n'
                     '#define rs_image_w ((u32 *)(rs_gbase + RS_IMAGE_BASE))\n#define RS_IMG(o) (RS_IMAGE_BASE + (u32)(o))\n'
                     '#else\n'
                     'extern u32 rs_image_w[];\n#define RS_IMAGE_ARRAY rs_image_w\n#define RS_IMG(o) ((u32)(uintptr_t)((u8 *)rs_image_w + (o)))\n'
                     '#endif\n#define rs_image ((u8 *)rs_image_w)\n')
            for a in sorted(s.sym_used): fo.write('#define D_%08X RS_IMG(0x%X)\n' % (a, a - BASE))
        # 64-bit targets (RS_GUEST64): guest code address -> native function, for calls through RS_FPTR (platform/common/guest64.c)
        taken = sorted(a for a in p.entries if a in s.F and s.F[a].addr_taken)
        with open(os.path.join(out, 'fn_table.c'), 'w') as fo:
            fo.write('/* Functions whose address the game takes, by guest address (64-bit targets: RS_FPTR). Generated by tools/dc/gen.py */\n'
                     '#include "game.h"\nconst rs_fn_ent_t rs_fn_table[] = {\n')
            for a in taken: fo.write('{0x%08Xu, (void *)%s},\n' % (a, s.fname(a)))
            fo.write('};\nconst int rs_fn_count = %d;\n' % len(taken))
        with open(os.path.join(out, 'psp_sdk.h'), 'w') as fo:
            fo.write('/* PSP firmware API used by the game (implemented by the platform layer). Generated. */\n#pragma once\n#include "rs_base.h"\n')
            fo.write('/* The functions keep their PSP SDK names in the source but are linked as psp_<name>: native SDKs use some of the same\n'
                     ' * names for their own, different functions (the PS Vita has sceKernelCreateSema, sceIoOpen, sceCtrlReadBufferPositive, ...). */\n')
            for n in sorted(s.stub_used): fo.write('#define %s psp_%s\n' % (n, n))
            for n, (lib, nid) in sorted(s.stub_used.items()):
                fo.write('%s %s(u32, u32, u32, u32, u32, u32, u32, u32);   /* %s 0x%08X */\n' % ('u64' if n in SDK64 else 'u32', n, lib, nid))
        print('functions', len(funcs), 'files', len(files), 'data symbols', len(s.sym_used), 'SDK imports used', len(s.stub_used),
              'C bytes', total)


if __name__ == '__main__':
    if len(sys.argv) < 3: raise SystemExit(__doc__)
    g = Gen(sys.argv[2])
    g.run(sys.argv[1])
    import shutil; shutil.copy(os.path.join(HERE, 'templates', 'rs_base.h'), os.path.join(sys.argv[1], 'rs_base.h'))
