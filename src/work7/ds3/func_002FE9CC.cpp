#include "ds3.h"
extern "C" void func_0010E0E0(void*);
extern "C" void func_006003D8(u32, void*);
extern "C" void func_005FF418(void*);
extern "C" void func_005FF760();
extern "C" void func_003CC054(void*, u32);
extern void* data_00715160;
char* func_002FE9CC(char* self) {
    func_0010E0E0(data_00715160);
    *(u8*)(self + 0x46) = 1;
    func_006003D8(0x207, self + 0x24);
    u32 idx = *(u8*)(self + 0x44);
    func_005FF418(*(void**)(self + 0x28 + idx * 4));
    func_005FF760();
    u32 tmp;
    func_006003D8(0x208, &tmp);
    func_003CC054(self + 0x10, tmp);
    *(u32*)(self + 0x40) = 0;
    *(u8*)(self + 0x47) = 0;
    return self + 0x10;
}
