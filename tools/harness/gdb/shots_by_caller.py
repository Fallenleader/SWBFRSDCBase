import gdb, struct, collections
B=0x7fffdc000000
inf=gdb.selected_inferior()
out=open('/tmp/shots_by_caller.log','w')
def u32(a): return struct.unpack('<I', bytes(inf.read_memory(B+a,4)))[0]
clk=[0]; cnt=collections.Counter(); seen=collections.Counter()
class C(gdb.Breakpoint):
    def stop(s):
        clk[0]+=1
        if clk[0]%300==0: out.write('%d calls %s\n'%(clk[0],dict(cnt))); out.flush(); cnt.clear()
        return False
class N(gdb.Breakpoint):
    def __init__(s,a,n): super().__init__(a); s.n=n
    def stop(s): cnt[s.n]+=1; return False
class S(gdb.Breakpoint):
    def stop(s):
        a0=int(gdb.parse_and_eval('$rdi'))&0xffffffff
        try: w=u32(a0+12)
        except Exception: w=0
        fr=gdb.newest_frame(); chain=[]
        for i in range(6):
            if fr is None: break
            chain.append(fr.name() or hex(fr.pc())); fr=fr.older()
        key=(w,tuple(chain))
        seen[key]+=1
        if True: out.write('%d shot w %08x %s\n'%(clk[0],w,' < '.join(chain))); out.flush()
        return False
C('rs_patches_frame'); S('func_08A1C5E4'); N('func_089502F0','turret0x422'); N('func_08965A70','trigger'); N('func_089BBD30','head_mode')
gdb.execute('set pagination off'); gdb.execute('run')
