import gdb, struct
B=0x7fffdc000000
inf=gdb.selected_inferior()
out=open('/tmp/ai_triggers.log','w')
def words(a,n):
    try: return struct.unpack('<%dI'%n, bytes(inf.read_memory(B+a,4*n)))
    except Exception: return ()
clk=[0]
class C(gdb.Breakpoint):
    def stop(s): clk[0]+=1; return False
class T(gdb.Breakpoint):
    def stop(s):
        a=[int(gdb.parse_and_eval(x))&0xffffffff for x in ('$rdi','$rsi','$rdx','$rcx')]
        if clk[0]%4==0 or True:
            w=words(a[0],16)
            out.write('%d trig a0 %08x a1 %08x a2 %08x a3 %08x w %s\n'%(clk[0],a[0],a[1],a[2],a[3],' '.join('%08x'%x for x in w)))
        return False
class S(gdb.Breakpoint):
    def stop(s):
        fr=gdb.newest_frame().older()
        if fr and fr.older() and fr.older().older() and (fr.older().older().name() or '')=='func_089C71EC':
            f4=fr.older().older().older()
            out.write('%d shot by %s\n'%(clk[0], f4.name() if f4 else '?'))
        return False
C('rs_patches_frame'); T('func_08965A70'); S('func_08A1C5E4')
gdb.execute('set pagination off'); gdb.execute('run')
