#include "../a5.h"
struct Mgr { void f(u16 a, u8 b, bool c); };  // 0x4AD9E8
extern Mgr* data_0070C8E0;
struct A {
    void f();
    char pad[0x2c]; u16 m2c; char pad2e[0x35 - 0x2e]; u8 m35; char pad36[2]; u16 m38; char pad3a[0x2d7 - 0x3a]; bool m2d7;
};
void A::f() { if (m2c == 0) { data_0070C8E0->f(m38, m35, true); m2d7 = true; } }
