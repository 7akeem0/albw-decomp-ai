#define EN_EXTRA void f();
#include "en204.h"
void En::f() {
    m59c.set(0x30);
    m8d4.start(randU32(func_0058A7D4(this), 100) + 200);
    m3dc.setZero();
    func_004FABDC(this, 1, -1, 0);
}
