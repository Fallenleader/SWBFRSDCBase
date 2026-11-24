import gdb, struct
B=0x7fffdc000000
inf=gdb.selected_inferior()
out=open('/tmp/post_states.log','w')
def u32(a):
    try: return struct.unpack('<I', bytes(inf.read_memory(B+a,4)))[0]
    except Exception: return 0
def f32(a):
    try: return struct.unpack('<f', bytes(inf.read_memory(B+a,4)))[0]
    except Exception: return 0.0
posts=[]; clk=[0]
class C(gdb.Breakpoint):
    def stop(s):
        clk[0]+=1
        if clk[0]%30==0 and posts:
            out.write('%d %s\n'%(clk[0],' '.join('%08x:o%d c%d k%.1f p%.1f'%(a,u32(a+12),u32(a+176),f32(a+180),f32(a+184)) for a in posts))); out.flush()
        return False
class P(gdb.Breakpoint):
    def stop(s):
        a=int(gdb.parse_and_eval('$rdi'))&0xffffffff
        if a not in posts: posts.append(a)
        if len(posts)>=6: s.enabled=False
        return False
C('rs_patches_frame'); P('func_089EC900')
gdb.execute('set pagination off'); gdb.execute('run')
