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

Usage: vfpu_locals.py <src/game dir> [--check] [--min-gain=N] [--exclude=tools/dc/vfpu_locals_exclude.txt]     (rewrites game_*.c in place; does nothing if already applied)
"""
import re, sys, glob, os

ALL = frozenset(range(128))
SRC = sys.argv[1] if len(sys.argv) > 1 else 'src/game'
CHECK = '--check' in sys.argv
EXCL = next((a.split('=', 1)[1] for a in sys.argv if a.startswith('--exclude=')), None)   # functions to leave alone (one per line, # comments)
EXCLUDE = set(l.strip() for l in open(EXCL) if l.strip() and not l.startswith('#')) if EXCL else set()
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
        info[name] = {'w': w, 'u': u, 'calls': calls, 'all': allf}

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
    acc = {}
    for x in VREF.findall(body): acc[int(x)] = acc.get(int(x), 0) + 1
    cost = {r: 1 + (r in W) for r in U}
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
        ex = stores(W)
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
