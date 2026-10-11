"""Per-function control-flow graph with MIPS delay slots resolved.

Block: straight-line instruction pcs ('body'), then optionally a control instruction ('term') whose delay slot ('delay')
executes before the transfer (for likely branches only on the taken edge).
Edges: ('fall', next_block) / ('taken', target) / ('switch', [targets]) / exits ('ret', 'tail', 'stub').
Calls (jal/jalr/bltzal...) do not end blocks semantically, but are terminators here (they have delay slots); their
continuation is the 'fall' edge.
"""
from isa import CTL


class Block:
    __slots__ = ('start', 'body', 'term', 'delay', 'succ', 'exit', 'likely', 'call')

    def __init__(s, start):
        s.start = start; s.body = []; s.term = None; s.delay = None; s.succ = []; s.exit = None
        s.likely = False; s.call = None

    def __repr__(s):
        return '<B %08x body=%d term=%s succ=%s exit=%s>' % (s.start, len(s.body), hex(s.term) if s.term else None,
                                                             [(k, hex(t) if isinstance(t, int) else t) for k, t in s.succ], s.exit)


def build(p, a, end):
    ins = p.ins
    leaders = {a}
    for pc in range(a, end, 4):
        i = ins[pc]
        if i.kind in CTL:
            if i.kind == 'branch' and a <= i.target < end: leaders.add(i.target)
            if i.kind == 'j' and a <= i.target < end: leaders.add(i.target)
            if pc + 8 < end: leaders.add(pc + 8)
            if i.kind == 'jr' and pc in p.jtabs:
                for t in p.jtabs[pc][1]: leaders.add(t)
    blocks = {}
    for L in sorted(leaders):
        b = Block(L); pc = L
        while pc < end:
            i = ins[pc]
            if pc != L and pc in leaders and i.kind not in CTL:
                b.succ.append(('fall', pc)); break
            if pc != L and pc in leaders and i.kind in CTL:
                b.succ.append(('fall', pc)); break
            if i.kind in CTL:
                b.term = pc; b.delay = pc + 4 if pc + 4 < end else None
                nxt = pc + 8
                k = i.kind
                if k == 'j':
                    if i.target in p.stubs: b.exit = ('stub', i.target)
                    elif a <= i.target < end: b.succ.append(('taken', i.target))
                    else: b.exit = ('tail', i.target)
                elif k == 'jal':
                    b.call = ('stub', i.target) if i.target in p.stubs else ('call', i.target)
                    if nxt < end: b.succ.append(('fall', nxt))
                    else: b.exit = ('tail', nxt)
                elif k == 'jalr':
                    b.call = ('dyn', i.rs)
                    if nxt < end: b.succ.append(('fall', nxt))
                    else: b.exit = ('tail', nxt)
                elif k == 'jr':
                    if i.rs == 31: b.exit = ('ret',)
                    elif pc in p.jtabs: b.succ.append(('switch', list(p.jtabs[pc][1])))
                    else: b.exit = ('dyn', i.rs)
                else:   # conditional branch (possibly likely / linking)
                    b.likely = i.likely
                    if i.link:
                        b.call = ('call', i.target) if a > i.target or i.target >= end else ('call-internal', i.target)
                        if nxt < end: b.succ.append(('fall', nxt))
                        else: b.exit = ('tail', nxt)
                    else:
                        if a <= i.target < end: b.succ.append(('taken', i.target))
                        else: b.succ.append(('taken-out', i.target))
                        if nxt < end: b.succ.append(('fall', nxt))
                        else: b.succ.append(('fall-out', nxt))
                break
            b.body.append(pc); pc += 4
        else:
            b.exit = ('tail', end)
        if not b.succ and b.exit is None and b.term is None:
            b.exit = ('tail', pc)
        blocks[L] = b
    return blocks


def succ_targets(b):
    out = []
    for k, t in b.succ:
        if k == 'switch': out.extend(t)
        elif k in ('fall', 'taken'): out.append(t)
    return out
