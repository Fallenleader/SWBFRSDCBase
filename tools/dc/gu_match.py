"""Name the statically linked libgu functions by matching the GE command numbers they emit against PSPSDK's libgu."""
import sys, re, glob, collections, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from prog import Prog
GU = '/home/claude/work/ext/pspsdk/src/gu'
LO, HI = 0x8a972cc, 0x8a9a0c0

def sdk_fingerprints():
    enum = {}
    t = open(GU + '/guInternal.h').read()
    m = re.search(r'typedef enum GECommand\s*\{(.*?)\}', t, re.S) or re.search(r'enum\s+GECommand\s*\{(.*?)\}', t, re.S)
    n = 0
    for line in m.group(1).split(','):
        line = re.sub(r'/\*.*?\*/|//.*', '', line).strip()
        if not line: continue
        if '=' in line: k, v = line.split('='); n = int(v.strip(), 0); k = k.strip()
        else: k = line
        enum[k] = n; n += 1
    fps = {}
    for f in glob.glob(GU + '/sceGu*.c'):
        src = open(f).read()
        for fm in re.finditer(r'\n[a-zA-Z_][\w \*]*?\b(sceGu\w+)\s*\(([^)]*)\)\s*\{', src):
            name = fm.group(1)
            # body until the matching closing brace at column 0
            body = src[fm.end():]
            end = body.find('\n}')
            body = body[:end]
            cmds = set()
            for cm in re.finditer(r'sendCommand[if]\s*\(\s*([A-Z_0-9x]+)', body):
                v = cm.group(1); cmds.add(enum.get(v, int(v, 0) if v[0].isdigit() else -1))
            calls = set(re.findall(r'\b(sceGu\w+|_sceGu\w+|sceGe\w+)\s*\(', body)) - {name}
            fps[name] = (frozenset(cmds), frozenset(calls), len(body))
    return fps, enum

def bin_fingerprints(p):
    fps = {}
    E = [a for a in p.entries if LO <= a < HI]
    for k, a in enumerate(E):
        end = E[k + 1] if k + 1 < len(E) else HI
        cmds = set(); geCalls = set(); guCalls = set()
        for pc in range(a, end, 4):
            i = p.ins[pc]
            if i.op == 15 and (i.imm & 0xFF) == 0 and pc not in p.hilo: cmds.add(i.imm >> 8)
            if i.kind in ('jal', 'j') and i.target in p.stubs: geCalls.add(p.stubs[i.target][1])
            if i.kind == 'jal' and LO <= i.target < HI: guCalls.add(i.target)
        fps[a] = (frozenset(cmds), frozenset(geCalls), frozenset(guCalls), end - a)
    return fps

if __name__ == '__main__':
    p = Prog(); p.find_functions()
    sdk, enum = sdk_fingerprints()
    b = bin_fingerprints(p)
    for a, (cmds, ge, gu, size) in sorted(b.items()):
        cands = [n for n, (c, calls, l) in sdk.items() if c == cmds and cmds]
        print('%08x size %4d cmds %-40s -> %s' % (a, size, sorted(hex(x) for x in cmds), cands[:6]))
