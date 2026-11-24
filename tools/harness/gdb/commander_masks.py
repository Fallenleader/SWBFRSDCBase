import gdb, struct
B=0x7fffdc000000
inf=gdb.selected_inferior()
out=open('/tmp/commander_masks.log','w')
def u8(a): return bytes(inf.read_memory(B+a,1))[0]
def u32(a): return struct.unpack('<I', bytes(inf.read_memory(B+a,4)))[0]
P=[0x0ae854b0,0x0ae85b40,0x0ae86250,0x0ae86970,0x0ae87090,0x0afab8e0]
clk=[0]
class C(gdb.Breakpoint):
    def stop(s): clk[0]+=1; return False
class A(gdb.Breakpoint):
    def stop(s):
        r=[int(gdb.parse_and_eval(x))&0xffffffff for x in ('$rdi','$rsi','$rdx')]
        try: m='%02x %02x %02x'%(u8(r[0]+72),u8(r[0]+73),u8(r[0]+74)); own=' '.join(str(u32(p+12)) for p in P); fl=' '.join('%x'%u32(p+192) for p in P)
        except Exception as e: m=own=fl=str(e)
        out.write('%d cmd %08x sq %d post %d masks %s owners %s fl192 %s\n'%(clk[0],r[0],r[1],r[2],m,own,fl)); out.flush(); return False
C('rs_patches_frame'); A('func_08926478')
gdb.execute('set pagination off'); gdb.execute('run')
