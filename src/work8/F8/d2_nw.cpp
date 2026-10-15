#include "ds2.h"
extern void func_0065BA34(void*, int) ;
void func_001C1DDC(void* self) {
    char* p = *(char**)((char*)self + 0x410);
    if (!p) return;    { volatile u32 vv = *(volatile u32*)(p + 0xc); (void)vv; }
    char* q = *(char**)(p + 0x14);
    if (*(u8*)(q + 0x1c) != 0) return;
    f32 f = *(f32*)(q + 0x10);
    if (f >= 0.0f) {
        if (*(f32*)(q + 8) == *(f32*)(q + 0x14)) goto call;
        return;
    } else {
        f32 f8 = *(f32*)(q + 8);
        if (f8 <= 0.0f) {} else return;
    }
call:
    func_0065BA34((char*)self + 0x41c, 3);
}
