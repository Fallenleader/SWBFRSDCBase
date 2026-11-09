#!/usr/bin/env python3
"""Which game functions could run on other cores: a static census of what each decompiled function touches.

For every function (and everything it calls, transitively):
  gw  stores straight to the game's global data (an address made from a D_ data symbol: the decompiler's form of a global)
  gr  loads from global data
  ind calls through a pointer (virtual methods, callbacks: callees unknown)
  fw  calls the firmware / platform (sce*, rgu_*, rs_*)
A function with none of gw / ind / fw only reads and writes memory it is handed (or memory reachable from it) and global constants: a
candidate to run on several cores at once for different objects.  Approximate (pointers read out of globals and written through are not
followed): a candidate still needs a look before it is moved.
usage: purity.py src/game [names...]   (no names: the summary)"""
import re, glob, sys, os
D = sys.argv[1]
fn_re = re.compile(r'\n(?:[a-z_0-9]+ )+(func_[0-9A-F]{8}(?:__orig)?)\([^)]*\)\n(?:#[^\n]*\n)?\{(.*?)\n\}', re.S)
info = {}
for f in glob.glob(os.path.join(D, 'game_*.c')):
    for m in fn_re.finditer(open(f).read()):
        name, body = m.group(1), m.group(2)
        taint = set(); gw = gr = False
        for line in body.split('\n'):
            for st in line.split(';'):
                st = st.strip()
                a = re.match(r'^(\w+) = (.*)$', st)
                if a:
                    lhs, rhs = a.groups()
                    if re.search(r'\bD_[0-9A-F]{8}\b', rhs) or any(re.search(r'\b%s\b' % t, rhs) for t in taint if not re.search(r'LD\w*\(', rhs)): taint.add(lhs)
                    elif lhs in taint: taint.discard(lhs)
                    if re.search(r'LD\w*\((\w+)', rhs) and re.search(r'LD\w*\((\w+)', rhs).group(1) in taint: gr = True
                s = re.match(r'^ST(?:8|16|32)\((\w+)', st)
                if s and (s.group(1) in taint or s.group(1).startswith('D_')): gw = True
        info[name] = dict(gw=gw, gr=gr, ind='RS_FPTR' in body or 'ifn_t' in body,
                          fw=bool(re.search(r'\b(_?_?sce\w+|rgu_\w+|rs_\w+)\(', body)), calls=set(re.findall(r'\b(func_[0-9A-F]{8})\(', body)) - {name})
memo = {}
def closure(n, stack=()):
    if n in memo: return memo[n]
    if n in stack or n not in info: return dict(gw=False, gr=False, ind=False, fw=False)
    i = info[n]; r = dict(gw=i['gw'], gr=i['gr'], ind=i['ind'], fw=i['fw'])
    for c in i['calls']:
        cr = closure(c, stack + (n,))
        for k in r: r[k] = r[k] or cr[k]
    memo[n] = r; return r
names = sys.argv[2:] or None
if names:
    for n in names: print(n, closure(n))
else:
    pure = [n for n in info if not any(closure(n)[k] for k in ('gw', 'ind', 'fw'))]
    print(len(info), 'functions,', len(pure), 'touch no global data directly and make no indirect or firmware calls')
