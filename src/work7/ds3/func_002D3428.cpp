#include "ds3.h"
extern "C" void* func_002C11E8(void*, int, int, int);
extern "C" void func_0016898C(void*, void*);
extern "C" void func_00169A80(void*);
void func_002D3428(char* self, int a1) {
    char buf[0x60];
    u32 idx = *(u8*)(self + 0x24);
    char* r4 = *(char**)(self + idx * 40 + 0x34);
    char* r = (char*)func_002C11E8(buf, 0, 0xa, 0);
    func_0016898C(r4, r);
    *(u8*)(*(char**)(r4 + 0x14) + 0x1c) = 0;
    *(f32*)(*(char**)(r4 + 0x14) + 0x10) = 0.0f;
    char* o = *(char**)(r4 + 0x14);
    if (*(f32*)(o + 8) != 0.0f) { *(f32*)(o + 8) = 0.0f; *(u8*)(o + 0x26) = 1; }
    func_00169A80(r4);
    *(u32*)(self + 0xf8) = 0;
}
