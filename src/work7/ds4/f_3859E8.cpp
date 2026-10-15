#include "ds4.h"
extern "C" void func_004CF478(u32, u32, u32);

extern "C" int func_003859E8(char* self) {
    if (*(u8*)(self + 0x14) != 0) return 0;
    *(u8*)(self + 0x39) = 1;
    *(u8*)(self + 0x38) = 0;
    *(u16*)(0x138 + self) = 0;
    func_004CF478(*(u32*)(self + 0x3c), 0, 0);
    func_004CF478(*(u32*)(self + 0x40), 0, 0);
    func_004CF478(*(u32*)(self + 0x44), 1, 0);
    return 1;
}
