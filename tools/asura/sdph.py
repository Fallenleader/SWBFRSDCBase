import struct, sys
d=open(sys.argv[1],'rb').read()
i=d.find(b'SDPH'); 
while i>=0:
    size=struct.unpack_from('<I',d,i+4)[0]; ver=struct.unpack_from('<I',d,i+8)[0]
    n=struct.unpack_from('<I',d,i+16)[0]; q=i+20
    print('SDPH at',hex(i),'size',size,'ver',ver,'n',n)
    for k in range(n):
        e=d[q:q+128]; q+=128
        idd,h=struct.unpack_from('<II',e,0); pos=struct.unpack_from('<3f',e,8); u100=e[20]; quat=struct.unpack_from('<4f',e,21)
        near,far=struct.unpack_from('<2f',e,37); b1=struct.unpack_from('<3f',e,45); b2=struct.unpack_from('<3f',e,57); u8s=e[69:74]
        s56=struct.unpack_from('<6f',e,74); u102=e[98]; f104=struct.unpack_from('<f',e,99)[0]; u103=e[103]; s108=struct.unpack_from('<6f',e,104)
        print(' id %d ev %08x pos %s u100 %d quat %s near %.1f far %.1f nearbox %s farbox %s u8s %s s56 %s u102 %d f104 %.2f u103 %d s108 %s'%(idd,h,['%.2f'%x for x in pos],u100,['%.3f'%x for x in quat],near,far,['%.1f'%x for x in b1],['%.1f'%x for x in b2],list(u8s),['%.2f'%x for x in s56],u102,f104,u103,['%.2f'%x for x in s108]))
    i=d.find(b'SDPH',i+4)
