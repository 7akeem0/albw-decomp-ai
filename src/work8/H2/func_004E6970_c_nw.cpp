#include "range.h"
extern "C" void func_0066AA1C(void*, s32) ;
struct Q {
    u8 p0[8];
    f32 m8;
    u8 p1[4];
    f32 m10;
    f32 m14;
    u8 p2[4];
    u8 m1c;
};
struct A {
    u8 pad0[0x14];
    Q* m14;
};
struct Obj {
    u8 pad0[0x4d8];
    A* m4d8;
    void f();
};
void Obj::f() {
    Q* q = m4d8->m14;
    if (q->m1c != 0) return;
    f32 zero = 0.0f;
    bool ok;
    if (q->m10 >= zero) {
        ok = q->m8 == q->m14;
    } else {
        ok = !(q->m8 > zero);
    }
    if (!ok) return;
    func_0066AA1C((char*)this + 0x4e4, 4);
}
