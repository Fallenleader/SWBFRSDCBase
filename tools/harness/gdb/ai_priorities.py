# The commander priorities: each 089284B4 (capture target) / 08928980 (front) call with its return, and once the post-link
# objects (list D_08C2A43C + 16: post ids +80 / +84, weight +164, flags +168). Output /tmp/ai_priorities.log
import gdb, struct
B=0x7fffdc000000
inf=gdb.selected_inferior()
out=open('/tmp/ai_priorities.log','w')
def u32(a): return struct.unpack('<I', bytes(inf.read_memory(B+a,4)))[0]
def f32(a): return struct.unpack('<f', bytes(inf.read_memory(B+a,4)))[0]
n={'a':0}
class E(gdb.FinishBreakpoint):
    def __init__(s,tag,a0,a1): super().__init__(gdb.newest_frame(),internal=True); s.tag=tag; s.a0=a0; s.a1=a1
    def stop(s):
        try: f=float(s.return_value['f0'])
        except Exception:
            try: f=float(gdb.parse_and_eval('$xmm0.v4_float[0]'))
            except Exception: f=-999
        out.write('%s cmd %08x post %d -> %.4f\n'%(s.tag,s.a0,s.a1,f)); out.flush(); return False
    def out_of_scope(s): pass
class P(gdb.Breakpoint):
    def __init__(s,fn,tag): super().__init__(fn); s.tag=tag
    def stop(s):
        n['a']+=1
        if n['a']>80: return False
        a0=int(gdb.parse_and_eval('$rdi'))&0xffffffff; a1=int(gdb.parse_and_eval('$rsi'))&0xffffffff
        if n['a']==1:
            # dump link list D_08C2A43C+16 (list head at +16)
            try:
                base=0x08C2A43C+16; node=u32(base)
                k=0
                while node and k<40:
                    it=u32(node+8); o=u32(it) if it else 0
                    out.write('node %08x it %08x\n'%(node,it))
                    if o: out.write('LINK %08x a %d b %d f164 %.4f u168 %08x w %s\n'%(o,u32(o+80),u32(o+84),f32(o+164),u32(o+168),' '.join('%08x'%u32(o+4*j) for j in range(36,48))))
                    node=u32(node+4); k+=1
            except Exception as e: out.write('err %s\n'%e)
        E(s.tag,a0,a1); return False
P('func_089284B4','TGT'); P('func_08928980','FRONT')
gdb.execute('set pagination off'); gdb.execute('run')
