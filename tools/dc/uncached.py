"""Classify every 'x | 0x40000000' in the program: pointer (uncached mirror address) vs. integer flag.
A result is a pointer if it (or a value derived from it by addiu/addu/move) is used as the base of a load/store or VFPU
memory access in the same function (forward, path-insensitive over the CFG)."""
import sys, os, collections, bisect
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__))); sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..'))
from prog import Prog
import cfg as CFG

def const_before(p, pc, reg, limit=12):
    q = pc - 4
    for _ in range(limit):
        i = p.ins.get(q)
        if i is None or i.kind in ('branch', 'j', 'jal', 'jr', 'jalr'): return None
        if reg in i.writes:
            if i.op == 15: return i.imm << 16
            if i.op == 13: v = const_before(p, q, i.rs, limit) if i.rs else 0; return None if v is None else v | i.imm
            if i.op == 0 and (i.w & 63) in (0x21, 0x25) and (i.rs == 0 or i.rt == 0): return const_before(p, q, i.rt if i.rs == 0 else i.rs, limit)
            return None
        q -= 4
    return None

def classify(p):
    E = p.entries; out = {}
    for pc, i in p.ins.items():
        if not (i.op == 0 and (i.w & 63) == 0x25 and i.rd): continue
        if const_before(p, pc, i.rs) != 0x40000000 and const_before(p, pc, i.rt) != 0x40000000: continue
        k = bisect.bisect_right(E, pc) - 1; a = E[k]; end = p.func_end(k)
        # forward taint over straight address order inside the function (conservative: follows all later code, any path)
        taint = {i.rd}; uses = []
        blocks = CFG.build(p, a, end)
        seen = set(); work = [pc + 4]; visited = 0
        # simple reachability walk by blocks
        def block_of(x):
            ks = sorted(blocks); j = bisect.bisect_right(ks, x) - 1; return blocks[ks[j]]
        state = {}
        start = block_of(pc)
        Q = collections.deque([(start.start, frozenset(taint), pc + 4)])
        while Q and visited < 400:
            L, t, frompc = Q.popleft(); visited += 1
            b = blocks[L]; t = set(t)
            pcs = [x for x in b.body if x >= frompc] + ([b.term] if b.term and b.term >= frompc else []) + ([b.delay] if b.delay and b.delay >= frompc else [])
            for x in pcs:
                j = p.ins[x]
                if j.mem and j.mem[0] in t: uses.append((x, 'base')); 
                if j.kind == 'store' and j.mem and j.rt in t and j.mem[0] not in t: uses.append((x, 'stored'))
                if j.kind in ('jal', 'jalr') or (b.call and x == b.term):
                    if t & set(range(4, 12)): uses.append((x, 'arg'))
                nw = set()
                if j.op in (9,) and j.rs in t: nw.add(j.rt)
                if j.op == 0 and (j.w & 63) in (0x21, 0x25, 0x23) and (j.rs in t or j.rt in t) and j.rd: nw.add(j.rd)
                for r in j.writes:
                    if r not in nw: t.discard(r)
                t |= nw
            if (L, frozenset(t)) in seen: continue
            seen.add((L, frozenset(t)))
            for tg in CFG.succ_targets(b):
                if tg in blocks: Q.append((tg, frozenset(t), tg))
        kinds = set(u for _, u in uses)
        out[pc] = ('pointer' if 'base' in kinds else ('flag?' if not kinds or kinds <= {'stored'} else 'unclear:' + ','.join(sorted(kinds))), a, uses[:6])
    return out

if __name__ == '__main__':
    p = Prog(); p.find_functions()
    for pc, (k, a, uses) in sorted(classify(p).items()):
        print('%08x in f_%08x: %-14s %s' % (pc, a, k, ' '.join('%08x:%s' % u for u in uses)))
