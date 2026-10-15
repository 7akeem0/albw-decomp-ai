#include "ds3.h"
extern "C" void func_001DC844(void*, int);
extern "C" void* func_0036746C(void*);
extern "C" void func_002D5D3C(void*);
void func_002DA4B8(char* self) {
    *(void**)self = (void*)0x6DD720;
    if (*(u8*)(*(char**)(self + 0x2c) + 0xc8) == 0) {
        char* p = *(char**)(self + 0x50);
        *(u8*)(p + 0x166) = 1;
        *(u8*)(*(char**)(self + 0x28) + 0x6c6) = 0;
        *(f32*)(*(char**)(self + 0x4c) + 0x100) = 1.0f;
        if (*(u16*)(*(char**)(self + 0x2c) + 0x42) == 0x90) {
            func_001DC844(*(void**)(self + 0x28), 0);
        }
    }
    func_002D5D3C((char*)func_0036746C(self + 0xb8) - 0xb8);
}
