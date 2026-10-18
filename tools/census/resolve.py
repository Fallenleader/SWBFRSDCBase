"""Map a census file (platform/common/census.c) to game functions.  usage: resolve.py <census.txt> <binary> [gu_lo gu_hi]
Writer pc 0 = no recorded store (data image or untracked), 1 = read from a file."""
import sys, subprocess, bisect, collections, re
cen, binp = sys.argv[1], sys.argv[2]
syms = []
for l in subprocess.run(['nm', '-n', '--defined-only', binp], capture_output=True, text=True).stdout.splitlines():
    a, t, n = l.split(maxsplit=2)
    if t in 'tTwW': syms.append((int(a, 16), n))
addrs = [a for a, n in syms]
def who(pc):
    if pc == 0: return '(untracked)'
    if pc == 1: return '(file data)'
    i = bisect.bisect_right(addrs, pc) - 1; return syms[i][1] if i >= 0 else '?'
GU_LO, GU_HI = 0x08A972CC, 0x08A9A0C0
cmd = collections.Counter(); vtx = collections.Counter(); cmds_of = collections.defaultdict(collections.Counter)
for l in open(cen):
    if l.startswith('#'): print(l.strip()); continue
    k, pc, c, n = l.split(); pc = int(pc, 16); c = int(c, 16); n = int(n); f = who(pc)
    if k == 'C': cmd[f] += n; cmds_of[f][c] += n
    else: vtx[f] += n
def tag(f):
    m = re.match(r'func_([0-9A-F]{8})', f)
    if not m: return ''
    a = int(m.group(1), 16); return ' [libgu]' if GU_LO <= a < GU_HI else ''
tot = sum(cmd.values())
print('== GE command words by writer (%d functions)' % len(cmd))
for f, n in cmd.most_common():
    top = ' '.join('%02x:%d' % (c, k) for c, k in cmds_of[f].most_common(12))
    print('%-30s %10d %5.1f%%%s  %s' % (f, n, 100.0 * n / tot, tag(f), top))
print('== vertex data (first vertex of each primitive) by writer (%d functions)' % len(vtx))
for f, n in vtx.most_common(): print('%-30s %10d%s' % (f, n, tag(f)))
