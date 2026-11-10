#!/usr/bin/env python3
"""Keep the PSP vector unit's registers in local variables (CPU registers) instead of memory.

The decompiled game code accesses the 128 VFPU registers as `v[N]`, an array in the per-thread block (rs_tls_cur->vfpu_v): every
vector operation loads its operands from memory and stores its result.  The registers are global state on the PSP (functions pass
vectors and matrices to each other in them), so they cannot simply become locals - but inside one function they can, as long as
memory is brought up to date where other code may look at it.  This tool rewrites every function that uses the vector unit:

  * each register N the function accesses often enough to pay off (see choose()) becomes a local `vrN`, loaded once at entry;
  * before a call, the chosen registers this function writes and the callee may read or write (directly or through its own callees)
    are stored; after the call, the chosen registers the callee may write are reloaded;
  * before returning, the chosen registers this function writes are stored.
  Registers not chosen stay in memory as before.  Functions listed in --exclude are left alone.

Which registers a callee touches is computed over the whole call graph.  Calls through function pointers, and SDK calls that can run
guest callbacks on the same thread (the ...CB waits, module loading, GE list calls that run the finish callback), count as touching all 128 registers.  Calls to functions that
never touch the vector unit need no synchronisation at all.  The rewrite is exact: memory holds every value other code can observe
at the moment it can observe it; only the copies in between move from memory to locals, where the C compiler keeps them in registers.

--live (what `make regen` uses): a whole-program liveness analysis finds, for every function, which registers any code can still read
after it returns; registers it writes that nobody reads afterwards are not stored at its exits.  That makes many more functions worth
converting (493 instead of 292).  --poison (verification builds only): those registers become NaN at the exits instead, so a wrong
analysis shows as broken game state.

Usage: vfpu_locals.py <src/game dir> [--check] [--min-gain=N] [--exclude=tools/dc/vfpu_locals_exclude.txt] [--live --data=build/data.c --platform=platform [--poison]]     (rewrites game_*.c in place; does nothing if already applied)
"""
import re, sys, glob, os

ALL = frozenset(range(128))
SRC = sys.argv[1] if len(sys.argv) > 1 else 'src/game'
CHECK = '--check' in sys.argv
EXCL = next((a.split('=', 1)[1] for a in sys.argv if a.startswith('--exclude=')), None)   # functions to leave alone (one per line, # comments)
EXCLUDE = set(l.strip() for l in open(EXCL) if l.strip() and not l.startswith('#')) if EXCL and '--live' not in sys.argv else set()   # (--live: measured again)
MIN_GAIN = int(next((a.split('=')[1] for a in sys.argv if a.startswith('--min-gain=')), '0'))   # extra accesses required to choose a register

FUNC_RE = re.compile(r'\n((?:rv_t|void|u32|float|s32|int|u64) (func_[0-9A-F]+)\([^)]*\))\n\{\n(.*?)\n\}\n', re.S)
VREF = re.compile(r'\bv\[(\d+)\]')
VWRITE = re.compile(r'\bv\[(\d+)\]\s*(=(?!=)|[-+*/]=)')
CALL = re.compile(r'\b(func_[0-9A-F]+)\s*\(|\(\(ifn_t\)RS_FPTR\(')

def sdk_names(path):
    names, ret = set(), {}
    for line in open(path):
        m = re.match(r'(u32|u64|void|float) ([A-Za-z_]\w*)\(', line)
        if m: names.add(m.group(2)); ret[m.group(2)] = m.group(1)
    return names, ret

def protos(path):
    ret = {}
    for line in open(path):
        m = re.match(r'(rv_t|void|u32|float|s32|int|u64) (func_[0-9A-F]+)\(', line)
        if m: ret[m.group(2)] = m.group(1)
    return ret

sdk, sdk_ret = sdk_names(os.path.join(SRC, 'psp_sdk.h'))
fret = protos(os.path.join(SRC, 'game.h'))
SDK_RE = re.compile(r'\b(' + '|'.join(sorted(sdk, key=len, reverse=True)) + r')\s*\(')
def sdk_all(name):                     # SDK calls that may run guest code on this thread (see CALLDYN in platform/common/hle.c):
    return (name.endswith('CB') or 'Callback' in name or 'Module' in name   # ...CB waits deliver callbacks; module start/stop
            or name.startswith('sceGe'))                                   # list enqueue/stall update run the GE finish callback

# ---- pass 1: direct register sets and call edges of every function
files = sorted(glob.glob(os.path.join(SRC, 'game_*.c')))
info = {}
for fn in files:
    src = open(fn).read()
    for m in FUNC_RE.finditer(src):
        name, body = m.group(2), m.group(3)
        if 'vfpu_regs: locals' in body:
            print('already transformed:', fn); sys.exit(0)
        w = set(int(x) for x, _ in VWRITE.findall(body))
        u = set(int(x) for x in VREF.findall(body))
        calls = set(re.findall(r'\b(func_[0-9A-F]+)\s*\(', body))
        allf = '((ifn_t)RS_FPTR(' in body or any(sdk_all(n) for n in SDK_RE.findall(body))
        info[name] = {'w': w, 'u': u, 'calls': calls, 'all': allf, 'body': body}

# ---- transitive sets: U (touched) and W (written) over the call graph (fixpoint)
TU = {n: set(i['u']) for n, i in info.items()}
TW = {n: set(i['w']) for n, i in info.items()}
for n, i in info.items():
    if i['all']: TU[n] = set(ALL); TW[n] = set(ALL)
changed = True; rounds = 0
while changed:
    changed = False; rounds += 1
    for n, i in info.items():
        if len(TU[n]) == 128 and len(TW[n]) == 128: continue
        for c in i['calls']:
            if c not in TU:                # a call to something that is not a decompiled function body: assume everything
                cu, cw = ALL, ALL
            else: cu, cw = TU[c], TW[c]
            if not cu <= TU[n]: TU[n] |= cu; changed = True
            if not cw <= TW[n]: TW[n] |= cw; changed = True
print('call-graph fixpoint: %d rounds, %d functions, %d touch the vector unit (directly or through callees)' % (rounds, len(info), sum(1 for n in TU if TU[n])))

# ---- liveness (--live): which registers can still be read after a function returns
# OUT[f]: the registers some code may read, after f returns, before writing them.  Registers f writes that are not in OUT[f] need no
# store at its exit: nothing observes them.  Computed over the whole program from the decompiled bodies, line by line (each body is
# straight-line statements, labels, gotos, conditional gotos and switch tables):
#   UE[f]  registers f (or a callee) may read before writing them  - backward liveness with nothing live at f's exit
#   OUT[f] for every call of f: the registers live just after that call in the caller (with the caller's own OUT at its exits)
# Conservative everywhere: a read anywhere on a line counts before the line's writes; writes inside conditional lines kill nothing;
# a call reads UE[callee] (all 128 for calls through pointers, unknown callees and SDK calls that run guest code); nothing is assumed
# written by a call.  Functions whose address is taken (RS_FADDR in code, a pointer in the data image, a call from platform code, or
# no direct caller at all: thread entries, callbacks, virtual methods) keep everything: OUT = all 128.
LIVE = '--live' in sys.argv
ALLM = (1 << 128) - 1
def mask(regs):
    m = 0
    for r in regs: m |= 1 << r
    return m
OUT = {}
if LIVE:
    ANYC = re.compile(CALL.pattern + '|' + SDK_RE.pattern)
    LABEL = re.compile(r'^L_(\w+):;$'); GOTO = re.compile(r'goto L_(\w+);')
    PURE_W = re.compile(r'(?<![\w.])v\[(\d+)\]\s*=(?!=)')
    def parse(name, body):
        lines = [l.strip() for l in body.split('\n') if l.strip()]
        lab = {}
        for i, l in enumerate(lines):
            m = LABEL.match(l)
            if m: lab[m.group(1)] = i
        rows = []
        for i, l in enumerate(lines):
            ws = [int(x) for x in PURE_W.findall(l)]
            refs = [int(x) for x in VREF.findall(l)]
            rd = list(refs)
            for x in ws: rd.remove(x)
            gen = mask(rd); cond = l.startswith(('if', 'switch')) or '?' in l or ' if (' in l or 'goto' in l or 'return' in l
            kill = 0 if cond else mask(ws)
            calls = []
            for mm in ANYC.finditer(l):
                if mm.group(1): calls.append(mm.group(1))
                elif mm.group(0).startswith('(('): calls.append(None)
                elif sdk_all(mm.group(2)): calls.append(None)
            succ = [lab[g] for g in GOTO.findall(l) if g in lab]
            exit_ = 'return' in l
            uncond = re.match(r'^goto L_\w+;$', l) or (l.startswith('return') and l.endswith(';'))
            if not uncond and i + 1 < len(lines): succ.append(i + 1)
            if not uncond and i + 1 >= len(lines): exit_ = True
            if 'goto' in l and not succ and not exit_: raise SystemExit('%s: goto to an unknown label: %s' % (name, l[:120]))
            rows.append((gen, kill, calls, succ, exit_))
        return rows
    CFG = {n: parse(n, i['body']) for n, i in info.items()}
    def ue_of(c, UE): return ALLM if c is None or c not in UE else UE[c]
    def solve(rows, out_m, UE):            # backward liveness: live-in of every line
        n = len(rows); lin = [0] * n; changed = True
        while changed:
            changed = False
            for i in range(n - 1, -1, -1):
                gen, kill, calls, succ, ex = rows[i]
                lo = out_m if ex else 0
                for j in succ: lo |= lin[j]
                cg = 0
                for c in calls: cg |= ue_of(c, UE)
                li = gen | cg | (lo & ~kill)
                if li != lin[i]: lin[i] = li; changed = True
        return lin
    def live_out(rows, i, lin, out_m):
        gen, kill, calls, succ, ex = rows[i]; lo = out_m if ex else 0
        for j in succ: lo |= lin[j]
        return lo | gen                       # (reads later on the same line count too)
    # UE fixpoint over the call graph
    UE = {n: 0 for n in info}
    callers = {n: set() for n in info}
    for n, i in info.items():
        for c in i['calls']:
            if c in callers: callers[c].add(n)
    work = set(info); rounds = 0
    while work:
        rounds += 1; nxt = set()
        for n in work:
            lin = solve(CFG[n], 0, UE); u = lin[0] if lin else 0
            if u != UE[n]: UE[n] = u; nxt |= callers[n]
        work = nxt
    print('liveness: registers read before written, %d rounds' % rounds)
    # address-taken functions
    taken = set(n for n in info if not callers[n])
    for fn in files:
        taken |= set(re.findall(r'RS_FADDR\((func_[0-9A-F]+)', open(fn).read()))
    DATA = next((a.split('=', 1)[1] for a in sys.argv if a.startswith('--data=')), None)
    if DATA:
        offs = set(int(x, 16) for x in re.findall(r'IMG\(0x([0-9A-F]+)\)', open(DATA).read()))
        taken |= set(n for n in info if int(n[5:], 16) - 0x08804000 in offs)
    else: raise SystemExit('--live needs --data=<build/data.c> (the data image: function pointers in it)')
    PLAT = next((a.split('=', 1)[1] for a in sys.argv if a.startswith('--platform=')), None)
    if PLAT:
        for fn in glob.glob(os.path.join(PLAT, '**', '*.c'), recursive=True) + glob.glob(os.path.join(PLAT, '**', '*.h'), recursive=True):
            taken |= set(re.findall(r'\b(func_[0-9A-F]{8})\b', open(fn, errors='ignore').read())) & set(info)
    else: raise SystemExit('--live needs --platform=<platform dir> (game functions called from platform code)')
    OUT = {n: (ALLM if n in taken else 0) for n in info}
    work = set(info); rounds = 0
    while work:
        rounds += 1; nxt = set()
        for n in work:
            rows = CFG[n]; lin = solve(rows, OUT[n], UE)
            for i, r in enumerate(rows):
                if not r[2]: continue
                lo = live_out(rows, i, lin, OUT[n])
                for c in r[2]:
                    if c is not None and c in OUT and (lo & ~OUT[c]): OUT[c] |= lo; nxt.add(c)
        work = nxt
    print('liveness: registers observed after return, %d rounds; %d functions keep all (address taken)' % (rounds, len(taken)))

# ---- pass 2: rewrite
def find_close(s, i):                  # s[i] == '(' -> index of the matching ')'
    d = 0
    for k in range(i, len(s)):
        if s[k] == '(': d += 1
        elif s[k] == ')':
            d -= 1
            if d == 0: return k
    raise ValueError('unbalanced')

def stores(regs): return ''.join('v[%d]=vr%d;' % (r, r) for r in sorted(regs))
def loads(regs): return ''.join('vr%d=v[%d];' % (r, r) for r in sorted(regs))
ANYCALL = re.compile(CALL.pattern + '|' + SDK_RE.pattern)

def call_sites(b, name):              # every call in a body: (start, end, expression, return type, registers it may use, may write)
    p = 0
    while True:
        mm = ANYCALL.search(b, p)
        if not mm: return
        st = mm.start()
        if mm.group(1): callee = mm.group(1); ret_t = fret[callee]; cu, cw = TU[callee], TW[callee]
        elif mm.group(0).startswith('(('): callee = None; ret_t = 'rv_t'; cu, cw = ALL, ALL
        else:
            callee = mm.group(2); ret_t = sdk_ret.get(callee, 'u32'); cu, cw = (ALL, ALL) if sdk_all(callee) else (set(), set())
        op = b.index('(', (find_close(b, st) + 1) if callee is None else st + len(callee))   # ((ifn_t)RS_FPTR(x)) (...) / name (...)
        cl = find_close(b, op)
        if ANYCALL.search(b[op + 1:cl]): raise SystemExit('%s: nested call in arguments: %s' % (name, b[st:cl + 1][:160]))
        yield st, cl + 1, b[st:cl + 1], ret_t, cu, cw
        p = cl + 1

# Which registers become locals: a register is worth it when the function accesses it more often than keeping memory up to date
# costs - one load at entry, one store at exit if written, and per call a store (if written here and the callee may look at it) and
# a reload (if the callee may change it).  Counted statically (the source has no loop information); a reload the compiler finds
# dead is dropped, so the cost is an upper bound.  Registers not chosen stay in memory, exactly as before: they need no synchronising.
def choose(body, U, W, name):
    om = OUT.get(name, ALLM) if LIVE else ALLM
    acc = {}
    for x in VREF.findall(body): acc[int(x)] = acc.get(int(x), 0) + 1
    cost = {r: 1 + (r in W and (om >> r) & 1) for r in U}
    for _, _, _, _, cu, cw in call_sites(body, name):
        for r in U:
            cost[r] += (r in W and r in cu) + (r in cw)
    return set(r for r in U if acc[r] > cost[r] + MIN_GAIN)

stat = {'functions': 0, 'calls_wrapped': 0, 'calls_free': 0, 'returns': 0, 'regs': 0, 'regs_mem': 0, 'excluded': 0}
for fn in files:
    src = open(fn).read(); out = []; pos = 0
    for m in FUNC_RE.finditer(src):
        name, body = m.group(2), m.group(3)
        if 'float *v = vfpu_v;' not in body: continue
        if name in EXCLUDE: stat['excluded'] += 1; continue
        I = info[name]; P = choose(body, I['u'], I['w'], name); W = I['w'] & P
        stat['regs_mem'] += len(I['u'] - P)
        if not P: continue
        # 1. every access to a chosen register -> its local (all v[N] of chosen registers written after this step are memory on purpose)
        b = VREF.sub(lambda mo: ('vr' + mo.group(1)) if int(mo.group(1)) in P else mo.group(0), body)
        # 2. leaving the function: store what it wrote (before every return, and at the closing brace for paths that fall off the end;
        #    a store after a final return/goto is dead code the compiler drops).  A return's expression is evaluated after the stores;
        #    it only reads locals, and a call in it is synchronised by step 3 like any other call.
        ex = stores(set(r for r in W if (OUT.get(name, ALLM) >> r) & 1) if LIVE else W)
        if LIVE and '--poison' in sys.argv:          # verification build: what is not stored becomes a NaN, so a wrong analysis shows
            ex += ''.join('v[%d]=__builtin_nanf("0x5a5");' % r for r in sorted(W - set(r for r in W if (OUT.get(name, ALLM) >> r) & 1)))
        if ex:
            def ret(mo):
                assert mo.group(1).count('(') == mo.group(1).count(')'), (name, mo.group(0))
                stat['returns'] += 1
                return '{ %sreturn%s; }' % (ex, mo.group(1))
            b = re.sub(r'\breturn\b([^;]*);', ret, b)
            b = b + '\n    ' + ex
        # 3. calls -> synchronised calls
        res = []; p = 0
        for st, en, expr, ret_t, cu, cw in list(call_sites(b, name)):
            s_set, l_set = W & cu, P & cw
            res.append(b[p:st])
            if not s_set and not l_set: res.append(expr); stat['calls_free'] += 1
            elif ret_t == 'void': res.append('({ %s%s; %s})' % (stores(s_set), expr, loads(l_set))); stat['calls_wrapped'] += 1
            else: res.append('({ %s__auto_type vr_t_ = %s; %svr_t_; })' % (stores(s_set), expr, loads(l_set))); stat['calls_wrapped'] += 1
            p = en
        res.append(b[p:]); b = ''.join(res)
        # 4. the locals, loaded at entry (the declaration is in the function's leading declaration block, before any statement)
        decl = 'float *v = vfpu_v; /* vfpu_regs: locals */ float ' + ', '.join('vr%d = v[%d]' % (r, r) for r in sorted(P)) + ';'
        assert b.count('float *v = vfpu_v;') == 1
        b = b.replace('float *v = vfpu_v;', decl, 1)
        out.append(src[pos:m.start(3)]); out.append(b); pos = m.end(3)
        stat['functions'] += 1; stat['regs'] += len(P)
    out.append(src[pos:])
    new = ''.join(out)
    if not CHECK and new != src: open(fn, 'w').write(new)
print('rewritten: %(functions)d functions, %(regs)d register locals (%(regs_mem)d registers left in memory), %(calls_wrapped)d synchronised calls, %(calls_free)d calls needing none, %(returns)d returns, %(excluded)d functions excluded' % stat)
