import re,sys
# usage: dispatch.py file startline endline regname lo hi  -> for each value of reg, walk the C until a call
f,s,e,reg,lo,hi=sys.argv[1],int(sys.argv[2]),int(sys.argv[3]),sys.argv[4],int(sys.argv[5],0),int(sys.argv[6],0)
L=open(f).read().split('\n')[s-1:e]
stm=[]; lab={}
for ln in L:
    ln=ln.strip()
    m=re.match(r'^(L_[0-9A-F]+):;',ln)
    if m: lab[m.group(1)]=len(stm); continue
    if ln: stm.append(ln)
def val(x,env):
    x=x.strip()
    m=re.match(r'^\(u32\)-(\d+)$',x)
    if m: return (-int(m.group(1)))&0xffffffff
    if re.match(r'^(0x[0-9a-fA-F]+|\d+)u?$',x): return int(x.rstrip('u'),0)
    m=re.match(r'^(\w+) \+ 0$',x)
    if m: return env.get(m.group(1))
    if x in env: return env[x]
    m=re.match(r'^\(s32\)(\w+) < \(s32\)(\w+)$',x)
    if m:
        a,b=val(m.group(1),env),val(m.group(2),env)
        if a is None or b is None: return None
        sa=a-(1<<32) if a&0x80000000 else a; sb=b-(1<<32) if b&0x80000000 else b
        return int(sa<sb)
    m=re.match(r'^(\w+) < (0x[0-9a-fA-F]+|\d+|\w+)u?$',x)
    if m:
        a,b=val(m.group(1),env),val(m.group(2),env)
        if a is None or b is None: return None
        return int(a<b)
    m=re.match(r'^(\w+) (==|!=) (\w+)$',x)
    if m:
        a,b=val(m.group(1),env),val(m.group(3),env)
        if a is None or b is None: return None
        return int((a==b) if m.group(2)=='==' else (a!=b))
    m=re.match(r'^(\w+) ([-+]) (0x[0-9a-fA-F]+|\d+)$',x)
    if m:
        a=val(m.group(1),env)
        if a is None: return None
        b=int(m.group(3),0); return (a+b if m.group(2)=='+' else a-b)&0xffffffff
    m=re.match(r'^(\w+) & (0x[0-9a-fA-F]+|\d+)$',x)
    if m:
        a=val(m.group(1),env); return None if a is None else a&int(m.group(2),0)
    m=re.match(r'^(\w+) << (\d+)$',x)
    if m:
        a=val(m.group(1),env); return None if a is None else (a<<int(m.group(2)))&0xffffffff
    m=re.match(r'^LD_U16\((\w+)\+(\d+)\)$',x)
    if m and m.group(0)==SRC: return env['__t']
    return None
SRC=sys.argv[7] if len(sys.argv)>7 else None
for t in range(lo,hi+1):
    env={reg:t,'__t':t}; pc=0; out=[]; steps=0
    while pc<len(stm) and steps<400:
        steps+=1; x=stm[pc]; pc+=1
        m=re.match(r'^if \(cnd_\) \{ (.*?)goto (L_\w+); \}',x)
        if m:
            if env.get('cnd_') is None: out.append('?cnd'); break
            if env['cnd_']:
                for a in m.group(1).split(';'):
                    a=a.strip()
                    mm=re.match(r'^(\w+) = (.*)$',a)
                    if mm: env[mm.group(1)]=val(mm.group(2),env)
                pc=lab[m.group(2)]
            continue
        m=re.match(r'^goto (L_\w+);',x)
        if m: pc=lab[m.group(1)]; continue
        m=re.search(r'(func_[0-9A-F]+)\(',x)
        if m:
            fn=m.group(1)
            if fn=='func_08A94784': out.append('new(%s)'%env.get('a0')); env['v0']=None; continue
            out.append(fn); break
        if x.startswith('return'): out.append('ret v0=%s'%env.get('v0')); break
        m=re.match(r'^switch \(t_\)',x)
        if m: out.append('switch'); break
        m=re.match(r'^(cnd_|\w+) = (.*);$',x)
        if m: env[m.group(1)]=val(m.group(2),env)
    print(t, ' '.join(out))
