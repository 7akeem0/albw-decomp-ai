#include "ds4.h"
struct Vec3 { float x, y, z; };
extern "C" void func_0028BFC0(u32, void*, void*);

extern "C" void func_003647C4(char* self) {
    if (*(u16*)(*(u32*)(self + 0x2c) + 0x42) == 0x22 && *(u8*)(self + 0xd6) != 0) {
        Vec3 v;
        v.x = 1.0f; v.y = 1.0f; v.z = 1.0f;
        func_0028BFC0(*(u32*)(*(u32*)(self + 0x28) + 0x600), (void*)(self + 0xa4), &v);
    }
    s16 c = *(s16*)(*(u32*)(self + 0x2c) + 0x42);
    if ((c == 0x23 || c == 0x26) && *(u8*)(self + 0xd7) != 0) {
        Vec3 v;
        v.x = 1.0f; v.y = 1.0f; v.z = 1.0f;
        func_0028BFC0(*(u32*)(*(u32*)(self + 0x28) + 0x600), (void*)(self + 0xa4), &v);
    }
}
