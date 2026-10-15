#include "ds4.h"
extern "C" void func_0038428C(void*, u32, u32);
extern "C" u32 func_003B1110(char*);

extern "C" void func_003B81EC(char* self) {
    char* p = *(char**)(self + 0x48);
    *(u8*)(p + 0x936) = 1;
    *(u16*)(self + 0x90) = 0;
    *(u8*)(self + 0x62) = 0;
    *(u8*)(self + 0x63) = 0;
    char* q = *(char**)(self + 0x48);
    if (*(u8*)(*(char**)(q + 0x510) + 4) == 0) {
        func_0038428C(q + 0x8c0, 0x3c, 0);
        if (func_003B1110(self) == 0) {
            ((void (*)(void*, u32, u32))(*(void**)(*(char**)self + 0x138)))(self, 2, 1);
        }
    }
}
