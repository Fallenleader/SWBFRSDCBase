import gdb, struct
B=0x7fffdc000000
inf=gdb.selected_inferior()
out=open('/tmp/m10e/b.log','w')
def u32(a): return struct.unpack('<I', bytes(inf.read_memory(B+a,4)))[0]
class E(gdb.FinishBreakpoint):
    def __init__(s,tag,a0): super().__init__(gdb.newest_frame(),internal=True); s.tag=tag; s.a0=a0
    def stop(s):
        rv=s.return_value
        try: f=float(rv['f0'])
        except Exception: f=float(rv)
        try: nm=u32(s.a0)
        except Exception: nm=0
        out.write('%s obj %08x name %08x -> %.4f\n'%(s.tag,s.a0,nm,f)); out.flush(); return False
    def out_of_scope(s): pass
class P(gdb.Breakpoint):
    def __init__(s,fn,tag): super().__init__(fn); s.tag=tag; s.n=0
    def stop(s):
        s.n+=1
        if s.n<=60: E(s.tag, int(gdb.parse_and_eval('$rdi'))&0xffffffff)
        return False
P('func_08A24740','pause'); P('func_08A24648','burst')
gdb.execute('set pagination off'); gdb.execute('run')
