# Watches the AI commanders (089279D4): every 60th call its post priorities (+80), flags (+120), sent counts (+128), busy squads
# (+112), timer (+160), +164; and each order: 08926478 (0x3F2 own post), 089266D4 (0x3F5 enemy post), 089263D8 (0x3F0). Output /tmp/ai_commander.log
import gdb, struct
B=0x7fffdc000000
inf=gdb.selected_inferior()
out=open('/tmp/ai_commander.log','w')
def u32(a): return struct.unpack('<I', bytes(inf.read_memory(B+a,4)))[0]
def f32(a): return struct.unpack('<f', bytes(inf.read_memory(B+a,4)))[0]
def u8(a): return bytes(inf.read_memory(B+a,1))[0]
clk=[0]
class C(gdb.Breakpoint):
    def stop(s): clk[0]+=1; return False
n={}
class Cmd(gdb.Breakpoint):
    def stop(s):
        a0=int(gdb.parse_and_eval('$rdi'))&0xffffffff
        n[a0]=n.get(a0,0)+1
        if n[a0]%60!=1: return False
        try:
            team=u32(a0+4); ns=u32(team+72) if team else 0
            pr=' '.join('%.2f'%f32(a0+80+4*k) for k in range(8)); fl=' '.join('%d'%u8(a0+120+k) for k in range(8))
            cnt=' '.join('%d'%u32(a0+128+4*k) for k in range(8)); busy=' '.join('%d'%u8(a0+112+k) for k in range(8))
            out.write('%d CMD %08x team %08x nsq %d t160 %.2f a164 %d f56 %d pri %s | fl %s | cnt %s | busy %s\n'%(clk[0],a0,team,ns,f32(a0+160),u32(a0+164),u8(a0+56),pr,fl,cnt,busy)); out.flush()
        except Exception as e: out.write('err %s\n'%e)
        return False
class O(gdb.Breakpoint):
    def __init__(s,fn,tag): super().__init__(fn); s.tag=tag
    def stop(s):
        a0=int(gdb.parse_and_eval('$rdi'))&0xffffffff; a1=int(gdb.parse_and_eval('$rsi'))&0xffffffff; a2=int(gdb.parse_and_eval('$rdx'))&0xffffffff
        out.write('%d %s cmd %08x squad %d arg %d\n'%(clk[0],s.tag,a0,a1,a2)); out.flush(); return False
class G(gdb.Breakpoint):
    def stop(s):
        a0=int(gdb.parse_and_eval('$rdi'))&0xffffffff
        out.write('%d PLAN cmd %08x\n'%(clk[0],a0)); out.flush(); return False
C('rs_patches_frame'); Cmd('func_089279D4'); O('func_08926478','POST'); O('func_089266D4','O66D4'); O('func_089263D8','O63D8')
gdb.execute('set pagination off'); gdb.execute('run')
