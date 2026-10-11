"""Signature recovery (PSP EABI: int args a0-a3,t0-t3 = r4-r11, float args f12-f19, returns v0/v1, f0).

Interprocedural fixpoint:
  params(F)  = argument registers live at F's entry (backward liveness over F's CFG; a call site uses params(callee),
               an indirect call uses the union over all address-taken functions (U)).
  rets(F)    = return registers read by some caller after a call to F before being overwritten
               (+ for tail calls: rets(target) |= rets(F)).
Liveness at a call: uses params(callee) (and sp), kills caller-saved registers; return regs defined.
"""
import collections
from isa import HI, LO, FCC, VF
import cfg as CFG
from abi import pair_partner

ARGS_I = list(range(4, 12))
ARGS_F = [32 + f for f in range(12, 20)]
ARGSET = set(ARGS_I + ARGS_F)
RETSET = {2, 3, 32}
CALLER = set(range(1, 16)) | {24, 25, 31, HI, LO, FCC} | set(32 + f for f in range(20))


def bits(regs):
    m = 0
    for r in regs: m |= 1 << r
    return m


ARGM = bits(ARGSET); RETM = bits(RETSET); CALLERM = bits(CALLER)


class FuncInfo:
    __slots__ = ('a', 'end', 'blocks', 'order', 'rw', 'params', 'rets', 'calls', 'tails', 'dyn_calls', 'addr_taken',
                 'live_after_call', 'noreturn', 'mret', 'avail')


def insn_rw(p, pc):
    i = p.ins[pc]
    r = bits(i.reads); w = bits(i.writes)
    if pair_partner(p, i): r &= ~(1 << i.rt)
    if i.cond_writes: r |= w
    r &= ~(1 << VF); w &= ~(1 << VF)
    return r, w


def prepare(p, k):
    a = p.entries[k]; end = p.func_end(k)
    f = FuncInfo(); f.a = a; f.end = end; f.blocks = CFG.build(p, a, end)
    f.params = 0; f.rets = 0; f.mret = 0; f.avail = {}; f.calls = []; f.tails = []; f.dyn_calls = []; f.live_after_call = {}
    f.addr_taken = a in p.addr_taken
    for b in f.blocks.values():
        if b.call and b.call[0] == 'call': f.calls.append((b.start, b.call[1]))
        if b.call and b.call[0] == 'dyn': f.dyn_calls.append(b.start)
        if b.exit and b.exit[0] == 'tail' and b.exit[1] in p.entryset: f.tails.append(b.exit[1])
        for kk, t in b.succ:
            if kk in ('taken-out', 'fall-out') and t in p.entryset: f.tails.append(t)
    return f


PASS = 1 << 70   # flag bit in avail: a call-free path from the function entry reaches this point


def callee_mret(p, F, b):
    c = b.call
    if c[0] == 'call' and c[1] in F: return F[c[1]].mret
    if c[0] == 'stub': return bits({2, 3})
    cands = p.icand.get(b.term)
    if cands:
        m = 0
        for x in cands:
            if x in F: m |= F[x].mret
        return m
    return RETM


def forward_avail(p, f, F):
    """avail[block] at block start: registers written since the last call (may), + PASS if reachable call-free from entry.
    Also returns mret: return registers a return can deliver (written after the last call, or the last callee's mret)."""
    blocks = f.blocks
    IN = {f.a: PASS}
    work = collections.deque([f.a]); mret = 0; at_call = {}
    while work:
        L = work.popleft(); b = blocks[L]; av = IN[L]
        for pc in b.body: av |= insn_rw(p, pc)[1]
        outs = []
        if b.term is not None:
            tw = insn_rw(p, b.term)[1]
            dw = insn_rw(p, b.delay)[1] if b.delay is not None else 0
            if b.call:
                pre = av | tw | dw
                at_call[L] = pre
                post = (pre & ~(CALLERM | RETM | PASS)) | callee_mret(p, F, b)
                if b.likely: post |= av
                for k, t in b.succ:
                    if k == 'fall': outs.append((t, post))
                if b.exit and b.exit[0] == 'tail': mret |= post & RETM
            else:
                taken = av | tw | dw; fall = taken if not b.likely else (av | tw)
                for k, t in b.succ:
                    if k == 'fall': outs.append((t, fall))
                    elif k == 'taken': outs.append((t, taken))
                    elif k == 'switch':
                        for x in t: outs.append((x, taken))
                    elif k in ('taken-out', 'fall-out'): mret |= (taken if k == 'taken-out' else fall) & RETM
                if b.exit:
                    e = b.exit[0]
                    if e == 'ret': mret |= taken & RETM
                    elif e == 'tail':
                        tg = b.exit[1]
                        mret |= (taken & RETM) | (F[tg].mret if tg in F else 0)
                    elif e == 'stub': mret |= bits({2, 3})
                    else: mret |= RETM
        else:
            for k, t in b.succ: outs.append((t, av))
            if b.exit:
                tg = b.exit[1] if len(b.exit) > 1 else None
                mret |= (av & RETM) | (F[tg].mret if tg in F else 0)
        for t, v in outs:
            if t not in blocks: continue
            if t not in IN: IN[t] = v; work.append(t)
            elif v & ~IN[t]: IN[t] |= v; work.append(t)
    for t in f.tails:
        if t in F: mret |= F[t].mret
    return at_call, mret


def filt(avail, regs):
    """Registers among regs that carry a meaningful value at a point with the given avail set."""
    if avail & PASS: return regs
    return regs & avail


def liveness(p, f, F, U, cur_rets):
    """Backward liveness over f; returns (live-in at entry, {call block: live-out after the call})."""
    blocks = f.blocks
    live_in = {L: 0 for L in blocks}
    preds = collections.defaultdict(list)
    for L, b in blocks.items():
        for t in CFG.succ_targets(b):
            if t in blocks: preds[t].append(L)
    work = collections.deque(sorted(blocks, reverse=True)); inq = set(blocks)
    after_call = {}

    def callee_use(b):
        c = b.call; av = f.avail.get(b.start, PASS | ARGM)
        if c[0] == 'call' and c[1] in F: need = F[c[1]].params
        elif c[0] == 'stub': need = bits(ARGS_I)   # firmware calls take integer/pointer arguments only
        else:
            cands = p.icand.get(b.term)
            need = union_params(F, cands) if cands else ARGM
        return filt(av, need) | (1 << 29)

    def exit_use(b):
        e = b.exit
        if e is None: return 0
        if e[0] == 'ret': return cur_rets | (1 << 29)
        if e[0] == 'tail' and e[1] in F: return F[e[1]].params | F[e[1]].rets | cur_rets | (1 << 29)
        if e[0] == 'stub': return bits(ARGS_I) | RETM | cur_rets | (1 << 29)
        return ARGM | RETM | (1 << 29)

    while work:
        L = work.popleft(); inq.discard(L); b = blocks[L]
        out = 0
        for t in CFG.succ_targets(b):
            if t in blocks: out |= live_in[t]
        for k, t in b.succ:
            if k in ('taken-out', 'fall-out'):
                out |= (F[t].params | F[t].rets | cur_rets) if t in F else (ARGM | RETM)
        live = out
        if b.term is not None:
            t = p.ins[b.term]
            if b.call:
                after = live
                after_call[L] = after
                live = (after & ~(CALLERM | RETM)) | callee_use(b)
                if b.exit: live |= exit_use(b)
                # delay slot executes before the call
                if b.delay is not None:
                    r, w = insn_rw(p, b.delay); live = (live & ~w) | r
                tr, tw = insn_rw(p, b.term)
                live = (live & ~tw) | tr
            else:
                live |= exit_use(b)
                if b.delay is not None:
                    r, w = insn_rw(p, b.delay)
                    if b.likely:
                        # taken path executes delay; fall path does not: conservative union
                        live = live | r
                    else:
                        live = (live & ~w) | r
                tr, tw = insn_rw(p, b.term)
                live = (live & ~tw) | tr
        else:
            live |= exit_use(b)
        for pc in reversed(b.body):
            r, w = insn_rw(p, pc); live = (live & ~w) | r
        if live != live_in[L]:
            live_in[L] = live
            for q in preds[L]:
                if q not in inq: work.append(q); inq.add(q)
    return live_in[f.a], after_call


def union_params(F, cands):
    m = 0
    for c in cands:
        if c in F: m |= F[c].params
    return m


def indirect_candidates(p):
    """jalr pc -> candidate callee set, from vtable slots ('slot', k) or known code constants ('fp', a); None = unknown."""
    import icall
    ap = set()
    for pc, v in p.hilo.items():
        if p.section_of(v) in ('.rodata', '.data') and p.ins[pc].op in (9, 13) and v in p.ptr_at and p.is_code(p.ptr_at[v]):
            ap.add(v)
    p.vt_points = ap
    slot = collections.defaultdict(set)
    for v in ap:
        k = 0
        while (v + k) in p.ptr_at and p.is_code(p.ptr_at[v + k]):
            slot[k].add(p.ptr_at[v + k]); k += 4
    p.icand = {}; p.icls = {}
    for k_, a in enumerate(p.entries):
        for pc, v in icall.classify(p, a, p.func_end(k_)).items():
            if v and v[0] == 'slot' and slot.get(v[1]): p.icand[pc] = frozenset(slot[v[1]]); p.icls[pc] = v
            elif v and v[0] == 'fp': p.icand[pc] = frozenset([v[1]]); p.icls[pc] = v
            else: p.icls[pc] = v


def solve(p, iters=30, verbose=True):
    p.entryset = set(p.entries)
    indirect_candidates(p)
    F = {}
    for k, a in enumerate(p.entries): F[a] = prepare(p, k)
    U = ARGM
    for it in range(iters):
        changed = False
        newU = 0
        for a, f in F.items():
            li, ac = liveness(p, f, F, U, f.rets)
            prm = li & ARGM
            if prm != f.params: f.params = prm; changed = True
            f.live_after_call = ac
            if f.addr_taken: newU |= prm
        # returns
        for a, f in F.items():
            for L, b in f.blocks.items():
                if b.call is None: continue
                use = f.live_after_call.get(L, 0) & RETM
                if b.call[0] == 'call' and b.call[1] in F:
                    g = F[b.call[1]]
                    if use & ~g.rets: g.rets |= use; changed = True
            for t in f.tails:
                if t in F and f.rets & ~F[t].rets: F[t].rets |= f.rets; changed = True
        for a, f in F.items():
            f.avail, mr = forward_avail(p, f, F)
            if mr & ~f.mret: f.mret |= mr; changed = True
        dynret = 0
        for a, f in F.items():
            for L in f.dyn_calls:
                use = f.live_after_call.get(L, 0) & RETM
                cands = p.icand.get(f.blocks[L].term)
                if cands:
                    for c in cands:
                        if c in F and use & ~F[c].rets: F[c].rets |= use; changed = True
                else: dynret |= use
        for a, f in F.items():
            if f.addr_taken and dynret & ~f.rets: f.rets |= dynret; changed = True
        if newU != U and it > 0: U = newU; changed = True
        elif it == 0: U = newU
        if verbose: print('iteration', it, 'U=%x' % U)
        if not changed: break
    p.F = F; p.U = U
    return F, U


if __name__ == '__main__':
    from prog import Prog
    p = Prog(); p.find_functions()
    F, U = solve(p)
    ni = collections.Counter(); nf = collections.Counter(); rr = collections.Counter()
    for f in F.values():
        ni[bin(f.params & bits(ARGS_I)).count('1')] += 1
        nf[bin(f.params & bits(ARGS_F)).count('1')] += 1
        rr[('v0' if f.rets & 4 else '') + ('v1' if f.rets & 8 else '') + ('f0' if f.rets & (1 << 32) else '')] += 1
    print('int params', sorted(ni.items())); print('float params', sorted(nf.items())); print('returns', rr)
    print('U (indirect-call signature):', [r for r in range(70) if U >> r & 1])
