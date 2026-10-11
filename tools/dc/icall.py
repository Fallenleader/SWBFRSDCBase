"""Indirect-call classification: forward value tracking per function.
Values: ('vt',) = word loaded from offset 0 of some object (vtable pointer); ('slot', k) = word loaded from vtable + k;
('fp', addr) = code address constant; ('ld', k) = word loaded from (non-vtable) base + k."""
import collections
import cfg as CFG


def classify(p, a, end, blocks=None):
    blocks = blocks or CFG.build(p, a, end)
    IN = {a: {}}; work = collections.deque([a]); res = {}
    def step(st, pc):
        i = p.ins[pc]
        if i.kind == 'load' and i.mem and i.mem[4] == 'load' and i.mem[2] == 4:
            base = st.get(i.mem[0])
            if base == ('vt',): v = ('slot', i.mem[1])
            elif i.mem[1] == 0: v = ('vt',)
            elif pc in p.hilo and p.is_code(p.ptr_at.get(p.hilo[pc], 0)): v = ('fp', p.ptr_at[p.hilo[pc]])
            else: v = ('ld', i.mem[1])
            for r in i.writes: st[r] = v
            return
        if i.op in (9, 13) and pc in p.hilo and p.is_code(p.hilo[pc]):
            st[i.rt] = ('fp', p.hilo[pc]); return
        if i.op == 0 and (i.w & 63) in (0x21, 0x25) and i.rd and (i.rs == 0 or i.rt == 0):
            src = i.rt if i.rs == 0 else i.rs; v = st.get(src)
            if v is None: st.pop(i.rd, None)
            else: st[i.rd] = v
            return
        for r in i.writes: st.pop(r, None)
    it = 0
    while work:
        L = work.popleft(); b = blocks[L]; st = dict(IN[L]); it += 1
        if it > 50000: break
        for pc in b.body: step(st, pc)
        if b.term is not None:
            t = p.ins[b.term]
            if b.call and b.call[0] == 'dyn':
                res[b.term] = st.get(t.rs)
            if b.delay is not None and not b.likely: step(st, b.delay)
            if b.call:
                for r in list(st):
                    if r in (1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 31): st.pop(r)
        for t in CFG.succ_targets(b):
            if t not in blocks: continue
            if t not in IN: IN[t] = dict(st); work.append(t)
            else:
                j = {k: v for k, v in IN[t].items() if st.get(k) == v}
                if j != IN[t]: IN[t] = j; work.append(t)
    return res


if __name__ == '__main__':
    from prog import Prog
    p = Prog(); p.find_functions()
    c = collections.Counter()
    for k, a in enumerate(p.entries):
        for pc, v in classify(p, a, p.func_end(k)).items():
            c[v[0] if v else None] += 1
    print(c)
