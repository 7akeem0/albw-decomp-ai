// 0x1081CC: guarded syscall wrappers with error constants.
typedef unsigned int u32;
typedef unsigned char u8;

__svc(0x1f) u32 svc1f(u32, u32, u32, u32);

extern u32 bss_007A0670;
extern "C" u32 func_001082BC(void*, void*, u32, u32);

u32 f(void* self, u32 a1, u32 a2) {
    if (*(u32*)((u8*)self + 8) != 0)
        return 0x08a01bf9;
    if ((a1 << 20) != 0)
        return 0xe0e01bf2;
    u32 r = func_001082BC(&bss_007A0670, self, a1, 0x1000);
    if (r == 0)
        return 0xd8601837;
    *(u8*)((u8*)self + 0x10) = (u8)a2;
    u32 v = *(u32*)((u8*)self + 0x14);
    u32 m = (a2 != 0) ? 1 : 3;
    u32 s = svc1f(v, r, m, 0x10000000);
    u32 n = s >> 31;
    if (n == 0)
        *(u8*)((u8*)self + 0x18) = 1;
    return s;
}
