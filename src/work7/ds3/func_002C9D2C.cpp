#include "ds3.h"
extern "C" int func_0053007C(void*);
extern "C" void func_00663810(void*, int);
int func_002C9D2C(char* self) {
    char* p = self + 0x400;
    if (*(u8*)(p + 0xbc) != 1) return 0;
    if (*(f32*)(p + 0x78) != *(f32*)(p + 0x9c) || *(f32*)(p + 0x80) != *(f32*)(p + 0xa4)) {
        if (func_0053007C(self) != 0) return 0;
        func_00663810(self + 0x4b8, 2);
        return 1;
    }
    return 0;
}
