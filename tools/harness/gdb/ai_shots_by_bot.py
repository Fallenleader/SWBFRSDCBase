# Logs each soldier control change (func_089A8A98: buttons +120, weapon slots +164/165) and every shot (08A1C5E4) with the
# humanoid that holds the weapon (found by its pointer in the first 0x1000 bytes), per harness frame (rs_patches_frame).
# Use: drive.py --gdb tools/harness/gdb/ai_shots_by_bot.py ; output /tmp/ai_shots.log
import gdb, struct
B=0x7fffdc000000
inf=gdb.selected_inferior()
out=open('/tmp/ai_shots.log','w')
def u32(a): return struct.unpack('<I', bytes(inf.read_memory(B+a,4)))[0]
clk=[0]
class C(gdb.Breakpoint):
    def stop(s): clk[0]+=1; return False
last={}
class K(gdb.Breakpoint):
    def stop(s):
        c=int(gdb.parse_and_eval('$rdi'))&0xffffffff; h=int(gdb.parse_and_eval('$rsi'))&0xffffffff
        try: b=u32(c+120); sl=inf.read_memory(B+c+164,2).tobytes()
        except Exception: return False
        k=(b,sl)
        if last.get(h)!=k: out.write('%d ctl %08x btn %08x slot %d %d\n'%(clk[0],h,b,sl[0],sl[1])); out.flush()
        last[h]=k; return False
class S(gdb.Breakpoint):
    def stop(s):
        a0=int(gdb.parse_and_eval('$rdi'))&0xffffffff
        try: w3=u32(a0+12)
        except Exception: w3=0
        own=''
        for h in list(last.keys()):
            try: blob=bytes(inf.read_memory(B+h,0x1000))
            except Exception: continue
            i=blob.find(struct.pack('<I',a0))
            if i>=0 and i%4==0: own+=' %08x@%x'%(h,i)
        out.write('%d shot %08x %08x own%s\n'%(clk[0],a0,w3,own)); out.flush(); return False
C('rs_patches_frame'); K('func_089A8A98'); S('func_08A1C5E4')
gdb.execute('set pagination off'); gdb.execute('run')
