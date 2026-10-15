#define EN_EXTRA void f();
#include "en204.h"
void En::f() {
    m59c.set(0x30);
    m8ca = (func_00111A64(func_0058A7D4(this)) & 2) - 1;
    m8d4.start(randU32(func_0058A7D4(this), 100) + 240);
    m3dc.setZero();
    u16 v = m8ca;
    if (v) v = 2;
    m8cc = v;
    m8e0.start(randU32(func_0058A7D4(this), 140) + 100);
    func_004FC07C(this, 2, -1, 0);
}
