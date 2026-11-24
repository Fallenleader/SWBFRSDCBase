import gdb, struct
B=0x7fffdc000000
inf=gdb.selected_inferior()
out=open('/tmp/vehicle_pilots.log','w')
def u32(a):
    try: return struct.unpack('<I', bytes(inf.read_memory(B+a,4)))[0]
    except Exception: return 0
def u16(a):
    try: return struct.unpack('<H', bytes(inf.read_memory(B+a,2)))[0]
    except Exception: return 0
def f32(a):
    try: return struct.unpack('<f', bytes(inf.read_memory(B+a,4)))[0]
    except Exception: return 0.0
pil={}; clk=[0]
def vid(o):
    i=o+u32(u32(o)-16) if u32(o) else 0
    return u32(i+4), u16(i+8)
class C(gdb.Breakpoint):
    def stop(s):
        clk[0]+=1
        if clk[0]%60==0:
            for p,v in list(pil.items()):
                i,cls=vid(v)
                if cls not in (0x801d,0x8014): continue
                n=u32(p+12); ch=''
                for d in range(5):
                    if not (0x08800000<=n<0x0c000000): break
                    ch+=' [%04x st %d t28 %08x w %s]'%(u16(n+10),u16(n+8),u32(n+28),' '.join('%.1f'%f32(n+4*k) for k in (8,9,10,11,12,13,14)))
                    n=u32(n+16)
                out.write('%d veh %x cls %x pilot %08x%s\n'%(clk[0],i,cls,p,ch))
            out.flush()
        return False
class P(gdb.Breakpoint):
    def stop(s):
        a0=int(gdb.parse_and_eval('$rdi'))&0xffffffff; a1=int(gdb.parse_and_eval('$rsi'))&0xffffffff
        pil[a0]=a1; return False
C('rs_patches_frame'); P('func_08957080')
gdb.execute('set pagination off'); gdb.execute('run')
