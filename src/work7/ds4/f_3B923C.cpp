#include "ds4.h"
extern "C" void func_00383DF8(void*, u32);
extern "C" void func_0038428C(void*, u32, u32);
extern "C" void func_004F8DF4(u32, u32);

extern "C" void func_003B923C(char* self) {
    char* p = *(char**)(self + 0x48);
    u32 q = *(u32*)(p + 0xbcc);
    if (q != 0) ((void (*)(u32))(*(void**)(*(char**)q + 0x14)))(q);
    char* r = *(char**)(self + 0x48);
    func_00383DF8(r + 0x8c0, 0);
    char* r2 = *(char**)(self + 0x48);
    *(u16*)(0xaf4 + (u32)r2) = 0;
    func_0038428C(r2 + 0x8c0, 0, 1);
    func_004F8DF4(*(u32*)(self + 0x48), 9);
    *(u8*)(self + 0x9c) = 1;
    *(u8*)(self + 0x62) = 0;
    *(u8*)(self + 0x63) = 0;
}
