

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern __svc(0x32) u32 sendSyncRequest26(u32);
extern u32 data_00716788;
struct Req1BB4 {
u32 header, f1, f2, f3, f4, f5, f6, f7;
};

extern "C" u32 func_003D1BB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 st0) {
    u32 tls;
    __asm {
mrc p15,0,tls,c13,c0,3 }
    Req1BB4* c = (Req1BB4*)(tls + 0x80);
    c->header = 0xa00c4;
    c->f1 = a1;
    c->f2 = a2;
    c->f3 = st0;
    __schedule_barrier();
c->f4 = 0xa | (st0 << 4);
    c->f5 = a3; __schedule_barrier();
    c->f6 = 0xc | (a1 << 4);
    c->f7 = a0;
    u32 result = sendSyncRequest26(data_00716788);
    if ((s32)(result & 0x80000000u) >= 0) result = c->f1;
    return result;
}
