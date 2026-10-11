"""ABI conformance check (evidence for turning guest functions into native C functions).

Abstract interpretation over each function's CFG.  Values: ('E', r) = value register r had at function entry,
('S', k) = entry stack pointer + k, ('X',) = clobbered by a call (caller-saved after a call), None = anything else.
Stack slots (entry-sp relative) remember stored symbolic values (saved registers).

Checks per function:
  preserve : at every return / tail exit, s0-s8 (r16-r23, r30), f20-f31, sp and ra hold their entry values
  clobber  : no instruction reads a caller-saved register after a call before writing it (v0/v1/f0/f1 excepted)
  callee   : no instruction reads a callee-saved register's ENTRY value except to store it to the stack (save)
Callees are assumed to conform (induction over the program; the result says which functions don't).
"""
import collections
from isa import CTL, HI, LO, FCC, VF
import cfg as CFG

CALLEE_SAVED = list(range(16, 24)) + [30] + [32 + f for f in range(20, 32)]
RET_REGS = {2, 3, 32, 33}
CALLER_SAVED = [r for r in range(1, 16)] + [24, 25] + [32 + f for f in range(0, 20)] + [HI, LO, FCC]


class St:
    __slots__ = ('r', 'stk')

    def __init__(s, r=None, stk=None):
        s.r = dict(r) if r else {}; s.stk = dict(stk) if stk else {}

    def copy(s): return St(s.r, s.stk)

    def get(s, x): return s.r.get(x)

    def join(s, o):
        r = {k: v for k, v in s.r.items() if o.r.get(k) == v}
        # values missing in one = None
        stk = {k: v for k, v in s.stk.items() if o.stk.get(k) == v}
        return St(r, stk)

    def __eq__(s, o): return s.r == o.r and s.stk == o.stk


def entry_state():
    st = St()
    for r in list(range(1, 32)) + [32 + f for f in range(32)] + [HI, LO, FCC]:
        st.r[r] = ('E', r)
    st.r[29] = ('S', 0)
    return st


def pair_partner(p, i):
    """lwl/lwr (or lwr/lwl) on the same rt and same word: together they define rt without using its old value."""
    if not i.mem or i.mem[4] not in ('lwl', 'lwr'): return False
    for q in (i.pc - 4, i.pc + 4):
        j = p.ins.get(q)
        if j and j.mem and j.mem[4] in ('lwl', 'lwr') and j.mem[4] != i.mem[4] and j.rt == i.rt and j.rs == i.rs \
                and abs(j.mem[1] - i.mem[1]) == 3:
            return True
    return False


def step(p, st, pc, issues, fname):
    i = p.ins[pc]
    reads = set(i.reads)
    if pair_partner(p, i): reads.discard(i.rt)
    # reads of clobbered / foreign callee-saved values
    for r in reads:
        v = st.get(r)
        if v == ('X',) and r not in RET_REGS: issues['clobber'].add((pc, r))
        if v is not None and v[0] == 'E' and v[1] in CALLEE_SAVED:
            ok = i.kind == 'store' and i.mem and i.mem[4] in ('store', 'swc1') and st.get(i.mem[0]) and st.get(i.mem[0])[0] == 'S' \
                and r != i.mem[0]
            # plain register moves of a saved value are tolerated (tracked)
            mv = (i.op == 0 and (i.w & 63) in (0x21, 0x25) and (i.rs == 0 or i.rt == 0))
            if not ok and not mv: issues['callee'].add(pc)
    w = i.w; op = i.op
    # transfer
    if op == 9 and i.rt:   # addiu
        v = st.get(i.rs)
        if i.rs == 0: st.r[i.rt] = ('C', i.simm & 0xFFFFFFFF)
        elif v and v[0] in ('S', 'C'): st.r[i.rt] = (v[0], v[1] + i.simm)
        else: st.r[i.rt] = None
        return
    if op == 13 and i.rt:  # ori
        v = st.get(i.rs) if i.rs else ('C', 0)
        st.r[i.rt] = ('C', v[1] | i.imm) if v and v[0] == 'C' else None
        return
    if op == 15 and i.rt: st.r[i.rt] = ('C', i.imm << 16); return   # lui
    if op == 0 and (w & 63) in (0x21, 0x23) and i.rd and i.rs and i.rt:   # addu / subu with sp + constant
        a_, b_ = st.get(i.rs), st.get(i.rt)
        if a_ and b_ and a_[0] == 'S' and b_[0] == 'C':
            k = b_[1] if b_[1] < 0x80000000 else b_[1] - (1 << 32)
            st.r[i.rd] = ('S', a_[1] + (k if (w & 63) == 0x21 else -k)); return
        if a_ and b_ and a_[0] == 'C' and b_[0] == 'S' and (w & 63) == 0x21:
            k = a_[1] if a_[1] < 0x80000000 else a_[1] - (1 << 32)
            st.r[i.rd] = ('S', b_[1] + k); return
    if op == 0 and (w & 63) in (0x21, 0x25) and i.rd:   # addu/or move
        if i.rt == 0: st.r[i.rd] = st.get(i.rs); return
        if i.rs == 0: st.r[i.rd] = st.get(i.rt); return
    if i.kind == 'store' and i.mem:
        base = st.get(i.mem[0])
        if base and base[0] == 'S':
            k = base[1] + i.mem[1]
            src = i.rt if i.mem[4] != 'swc1' else 32 + i.rt
            for o in range(k - 3, k + i.mem[2]): st.stk.pop(o, None)
            if i.mem[2] == 4 and i.mem[4] in ('store', 'swc1'): st.stk[k] = st.get(src)
        return
    if i.kind == 'load' and i.mem:
        base = st.get(i.mem[0])
        dst = i.rt if i.mem[4] != 'lwc1' else 32 + i.rt
        if base and base[0] == 'S' and i.mem[2] == 4 and i.mem[4] in ('load', 'lwc1'):
            st.r[dst] = st.stk.get(base[1] + i.mem[1])
        else:
            st.r[dst] = None
        return
    for r in i.writes:
        st.r[r] = None


def call_effect(st):
    for r in CALLER_SAVED: st.r[r] = ('X',)
    for r in RET_REGS: st.r[r] = None      # return values: legitimately read after the call
    st.r[31] = ('X',)
    st.r[VF] = None


def check_exit(st, issues, pc, kind):
    for r in CALLEE_SAVED:
        if st.get(r) != ('E', r): issues['preserve'].add((pc, r, kind))
    if st.get(29) != ('S', 0): issues['preserve'].add((pc, 29, kind))
    if kind == 'ret' and st.get(31) != ('E', 31): issues['preserve'].add((pc, 31, kind))


def analyze(p, a, end):
    blocks = CFG.build(p, a, end)
    issues = collections.defaultdict(set)
    IN = {a: entry_state()}
    work = collections.deque([a]); inq = {a}
    seen_iter = 0
    while work:
        L = work.popleft(); inq.discard(L)
        seen_iter += 1
        if seen_iter > 20000: issues['nonconverge'].add(a); break
        b = blocks[L]; st = IN[L].copy()
        for pc in b.body: step(p, st, pc, issues, a)
        outs = []
        if b.term is not None:
            t = p.ins[b.term]
            for r in t.reads:   # branch condition / jump register read before the delay slot
                v = st.get(r)
                if v == ('X',) and r not in RET_REGS: issues['clobber'].add((b.term, r))
            if b.likely:
                taken = st.copy()
                if b.delay is not None: step(p, taken, b.delay, issues, a)
                fall = st
            else:
                if t.link: st.r[31] = None
                if b.delay is not None: step(p, st, b.delay, issues, a)
                taken = fall = st
            if b.call:
                after = (taken if b.likely else st).copy(); call_effect(after)
                if b.likely:   # likely-link: join of called and not-called paths
                    after = after.join(fall)
                for k, tg in b.succ:
                    if k == 'fall': outs.append((tg, after))
                pass   # a call with nothing after it in the function is a noreturn call (abort/exit/longjmp-like)
            else:
                for k, tg in b.succ:
                    if k == 'fall': outs.append((tg, fall))
                    elif k == 'taken': outs.append((tg, taken))
                    elif k == 'switch':
                        for x in tg: outs.append((x, taken))
                    elif k in ('taken-out', 'fall-out'): check_exit(taken if k == 'taken-out' else fall, issues, b.term, 'tail')
                if b.exit:
                    e = b.exit[0]
                    if e == 'ret': check_exit(taken, issues, b.term, 'ret')
                    elif e == 'stub':
                        check_exit(taken, issues, b.term, 'tail')
                    elif e in ('tail', 'dyn'): check_exit(taken, issues, b.term, 'tail')
        else:
            for k, tg in b.succ: outs.append((tg, st))
            if b.exit: check_exit(st, issues, b.body[-1] if b.body else L, 'tail')
        for tg, s2 in outs:
            if tg not in blocks: continue
            if tg not in IN: IN[tg] = s2.copy(); work.append(tg); inq.add(tg)
            else:
                j = IN[tg].join(s2)
                if not (j == IN[tg]):
                    IN[tg] = j
                    if tg not in inq: work.append(tg); inq.add(tg)
    return issues


if __name__ == '__main__':
    import sys
    from prog import Prog
    p = Prog(); p.find_functions()
    tot = collections.Counter(); bad = collections.defaultdict(list)
    for k, a in enumerate(p.entries):
        iss = analyze(p, a, p.func_end(k))
        for kind, v in iss.items():
            if v: tot[kind] += 1; bad[kind].append(a)
    print('functions', len(p.entries), 'with issues by kind:', dict(tot))
    for kind, fs in bad.items():
        print(kind, [hex(x) for x in fs[:25]])
