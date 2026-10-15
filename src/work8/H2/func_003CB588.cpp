#include "range.h"
extern "C" void* func_0010E3C4(void*, void*, s32);
extern "C" void func_005FFC18(void*);
extern "C" void func_003CB5F0(void*, u32, s32);
struct Obj {
    u8 pad0[0x1c];
    u8 pad1[0x2c - 0x1c];
    u8 pad2[0x50 - 0x2c];
    f32 m50;
    u8 m54;
    void f(u32 flags, void* a, u8 b, f32 x);
};
void Obj::f(u32 flags, void* a, u8 b, f32 x) {
    u32 r = 0;
    if (flags & 1) r = 1;
    if (flags & 2) r |= 2;
    if (flags & 4) r |= 4;
    void* s = func_0010E3C4((char*)this + 0x2c, a, 0x10);
    m50 = x;
    m54 = b;
    func_005FFC18(s);
    func_003CB5F0((char*)this + 0x1c, r, 0);
}
