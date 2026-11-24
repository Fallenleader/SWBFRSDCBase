import gdb
out=open('/tmp/squad_orders.log','w')
clk=[0]
class C(gdb.Breakpoint):
    def stop(s): clk[0]+=1; return False
class A(gdb.Breakpoint):
    def __init__(s,f,n): super().__init__(f); s.n=n
    def stop(s):
        r=[int(gdb.parse_and_eval(x))&0xffffffff for x in ('$rdi','$rsi','$rdx')]
        fr=gdb.newest_frame().older(); ch=[]
        for i in range(4):
            if fr is None: break
            ch.append(fr.name() or hex(fr.pc())); fr=fr.older()
        out.write('%d %s cmd %08x sq %d post %d < %s\n'%(clk[0],s.n,r[0],r[1],r[2],' < '.join(ch))); out.flush(); return False
C('rs_patches_frame'); A('func_08926478','3F2'); A('func_089266D4','3F5'); A('func_08926760','1014'); A('func_08926DF0','curpost')
gdb.execute('set pagination off'); gdb.execute('run')
