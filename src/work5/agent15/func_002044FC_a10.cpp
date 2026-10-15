#define EN_EXTRA void f();
#include "en204_a15.h"
void En::f() {
    f32 v = randF(func_0058A7D4(this), 1.0f);
    if (v < 0.33f) m3e8 = 0;
    else if (v < 0.66f) m3e8 = 0x15555555;
    else m3e8 = 0xEAAAAAAB;
    m59c.setB(4);
    m59c.setB(0x80);
    m59c.setB(1);
    m8d4.start(20);
    m3dc.setZero();
    func_004FABDC(this, 0, -1, 0);
}
