#include "ds4.h"
extern u8 ro_006E70A8[];
extern "C" void* func_001510A4(void*);
extern "C" void* func_0025B84C(void*);
extern "C" void vecCtor(void* dest, void* ctor, u32 size, u32 count);

void* func_0039243C(void* self) {
    void* vt = ro_006E70A8;
    *(void**)((u8*)self + 0x320) = (u8*)vt + 0x54;
    *(void**)self = vt;
    vecCtor((u8*)self + 0x46c, (void*)func_0025B84C, 0x60, 2);
    return func_001510A4(self);
}
