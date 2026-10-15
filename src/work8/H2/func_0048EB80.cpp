#include "range.h"
extern "C" u32 func_0057F260(void*);
extern "C" u32 func_0056A0D0(void*, u32);
extern "C" void func_0048EBE8(void*, u32, u32, u32, u32, u32);
struct Obj {
    u8 pad0[4];
    u8 pad1[0x130 - 4];
    u32 m130;
    u8 pad2[0x140 - 0x134];
    void* m140;
    void f(u32 a, u32 b, u32 c, u32 g);
};
void Obj::f(u32 a, u32 b, u32 c, u32 g) {
    u32 x = func_0057F260(m140);
    u32 y = func_0056A0D0((char*)this + 4, x);
    m130 = y;
    u32 z = y;
    if (y != 0) z = y + a;
    func_0048EBE8(this, x, z, b, c, g);
}
