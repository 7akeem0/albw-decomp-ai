typedef unsigned char u8;
typedef unsigned int u32;
extern "C" int func_001082BC(void*, u8*, u32, u32);
extern "C" void func_0010A98C(u32);
extern "C" u8 data_00714A3C;
extern "C" u8 bss_0079D104[];
void func_00101D4C(u8* a0, u32 a1) {
    if (a0 == 0) return;
    *(u32*)a0 = 0;
    *(u32*)(a0 + 4) = 0;
    *(u32*)(a0 + 8) = 0;
    *(u32*)(a0 + 0xc) = 0;
    a0[0x10] = 0;
    if (data_00714A3C == 0) return;
    u32 sz = ((a1 + 0xf00 + 0xff) >> 12) << 12;
    u8* p2 = a0;
    if (func_001082BC(bss_0079D104, p2, sz, 0) == 0) {
        func_0010A98C(0xd8601837u);
    }
    a0[0x10] = 0;
}
