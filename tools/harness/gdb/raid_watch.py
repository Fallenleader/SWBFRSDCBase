import gdb
out=open('/tmp/raid_watch.log','w')
clk=[0]
import struct
B=0x7fffdc000000
inf=gdb.selected_inferior()
PO=[0x0ae854b0,0x0ae85b40,0x0ae86250,0x0ae86970,0x0ae87090]
def u32(x):
    try: return struct.unpack('<I', bytes(inf.read_memory(B+x,4)))[0]
    except Exception: return 0
last=[None]
class C(gdb.Breakpoint):
    def stop(s):
        clk[0]+=1
        if clk[0]%30==0:
            o=tuple(u32(x+12) for x in PO)
            if o!=last[0]: out.write('%d owners %s\n'%(clk[0],' '.join(map(str,o)))); out.flush(); last[0]=o
        return False
class A(gdb.Breakpoint):
    def __init__(s,f,n): super().__init__(f); s.n=n
    def stop(s):
        r=[int(gdb.parse_and_eval(x))&0xffffffff for x in ('$rdi','$rsi','$rdx')]
        fr=gdb.newest_frame().older(); ch=[]
        for i in range(4):
            if fr is None: break
            ch.append(fr.name() or hex(fr.pc())); fr=fr.older()
        out.write('%d %s cmd %08x sq %d post %d < %s\n'%(clk[0],s.n,r[0],r[1],r[2],' < '.join(ch))); out.flush(); return False
C('rs_patches_frame'); A('func_08926478','3F2'); A('func_089266D4','3F5'); A('func_08926760','1014'); 
gdb.execute('set pagination off'); gdb.execute('run')
