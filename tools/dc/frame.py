"""Stack-frame facts per function, from the abstract interpretation in abi.py:
frame size, saved-register slots, accesses at or above the entry sp (caller's outgoing-argument area), escaping frame
addresses."""
import collections
import abi
import cfg as CFG
from isa import HI, LO


class Frame:
    __slots__ = ('size', 'above_loads', 'above_stores', 'escapes', 'save_slots', 'restore_pcs', 'save_pcs', 'sp_dynamic',
                 'val', 'slot_st', 'slot_ld', 'drop')


def analyze(p, a, end):
    """Forward abstract interpretation (same lattice as abi.py) recording, per instruction, the symbolic values of the
    registers it reads.  Returns Frame."""
    blocks = CFG.build(p, a, end)
    fr = Frame(); fr.size = 0; fr.above_loads = set(); fr.above_stores = set(); fr.escapes = set()
    fr.save_slots = {}; fr.restore_pcs = set(); fr.save_pcs = set(); fr.sp_dynamic = False; fr.val = {}
    fr.slot_st = collections.defaultdict(set); fr.slot_ld = collections.defaultdict(set)   # offset -> {(pc, kind)}
    issues = collections.defaultdict(set)
    IN = {a: abi.entry_state()}; work = collections.deque([a]); n = 0
    def visit(st, pc):
        i = p.ins[pc]
        vals = {r: st.get(r) for r in i.reads}
        fr.val[pc] = vals
        if i.mem and i.mem[4] not in ('lv', 'sv'):
            base = vals.get(i.mem[0]) if i.mem[0] else None
            if base and base[0] == 'S':
                off = base[1] + i.mem[1]
                SAVED = abi.CALLEE_SAVED + [31]
                if i.kind == 'store':
                    v = st.get(i.rt if i.mem[4] == 'store' else 32 + i.rt)
                    reg = i.rt if i.mem[4] == 'store' else 32 + i.rt
                    ok = i.mem[2] == 4 and i.mem[4] in ('store', 'swc1') and v == ('E', reg) and reg in SAVED
                    fr.slot_st[off].add((pc, reg if ok else None))
                    for o in range(off - 3, off + i.mem[2]):
                        if o != off: fr.slot_st[o].add((pc, None))
                else:
                    reg = i.rt if i.mem[4] != 'lwc1' else 32 + i.rt
                    v = st.stk.get(off)
                    ok = i.mem[2] == 4 and i.mem[4] in ('load', 'lwc1') and v == ('E', reg)
                    fr.slot_ld[off].add((pc, reg if ok else None))
                if off < 0: fr.size = max(fr.size, -off)
                else: (fr.above_loads if i.kind == 'load' else fr.above_stores).add(off)
        elif i.mem:   # VFPU lv/sv
            base = vals.get(i.mem[0])
            if base and base[0] == 'S':
                off = base[1] + i.mem[1]
                if off < 0: fr.size = max(fr.size, -off)
                else: (fr.above_loads if i.mem[4] == 'lv' else fr.above_stores).add(off)
        # escapes: an S value used other than as a memory base or in addiu/move
        for r, v in vals.items():
            if v and v[0] == 'S':
                ok = (i.mem and r == i.mem[0] and not (i.kind == 'store' and r == i.rt)) or i.op == 9 or \
                     (i.op == 0 and (i.w & 63) in (0x21, 0x25, 0x23) and r != 0)
                if not ok or (i.op == 0 and (i.w & 63) == 0x21 and i.rd != 29 and not (i.rs == 0 or i.rt == 0)):
                    fr.escapes.add(pc)
                elif i.kind in ('jal', 'jalr', 'branch') or (i.kind == 'store' and r == i.rt):
                    fr.escapes.add(pc)
        if 29 in i.writes and i.op != 9:
            if not (i.op == 0 and (i.w & 63) in (0x21, 0x23)): fr.sp_dynamic = True
        abi.step(p, st, pc, issues, a)
        v29 = st.get(29)
        if v29 and v29[0] == 'S' and v29[1] < 0: fr.size = max(fr.size, -v29[1])
    while work:
        L = work.popleft(); b = blocks[L]; st = IN[L].copy(); n += 1
        if n > 50000: break
        for pc in b.body: visit(st, pc)
        outs = []
        if b.term is not None:
            t = p.ins[b.term]
            fr.val[b.term] = {r: st.get(r) for r in t.reads}
            for r, v in fr.val[b.term].items():
                if v and v[0] == 'S' and t.kind in ('branch',): pass
            if b.likely:
                taken = st.copy()
                if b.delay is not None: visit(taken, b.delay)
                fall = st
            else:
                if b.delay is not None: visit(st, b.delay)
                taken = fall = st
            if b.call:
                after = (taken if b.likely else st).copy(); abi.call_effect(after)
                if b.likely: after = after.join(fall)
                for k, tg in b.succ:
                    if k == 'fall': outs.append((tg, after))
            else:
                for k, tg in b.succ:
                    if k == 'fall': outs.append((tg, fall))
                    elif k == 'taken': outs.append((tg, taken))
                    elif k == 'switch':
                        for x in tg: outs.append((x, taken))
        else:
            for k, tg in b.succ: outs.append((tg, st))
        for tg, s2 in outs:
            if tg not in blocks: continue
            if tg not in IN: IN[tg] = s2.copy(); work.append(tg)
            else:
                j = IN[tg].join(s2)
                if not (j == IN[tg]): IN[tg] = j; work.append(tg)
    # saved-register slots: every store is a save of register r and every load restores r into r -> drop them all
    fr.drop = set()
    for off, sts in fr.slot_st.items():
        regs = set(r for _, r in sts)
        lds = fr.slot_ld.get(off, set())
        if len(regs) == 1 and None not in regs and all(r in regs for _, r in lds):
            fr.drop.update(pc for pc, _ in sts); fr.drop.update(pc for pc, _ in lds)
    # a slot read without any store in this function at an offset inside the frame is not a save slot
    return fr


if __name__ == '__main__':
    from prog import Prog
    p = Prog(); p.find_functions()
    c = collections.Counter(); ex = collections.defaultdict(list)
    for k, a in enumerate(p.entries):
        fr = analyze(p, a, p.func_end(k))
        if fr.above_loads: c['reads caller area'] += 1; ex['reads'].append(hex(a))
        if fr.above_stores: c['writes caller area'] += 1; ex['writes'].append(hex(a))
        if fr.escapes: c['frame address escapes'] += 1
        if fr.sp_dynamic: c['dynamic sp'] += 1; ex['dyn'].append(hex(a))
    print(c); print({k: v[:12] for k, v in ex.items()})
