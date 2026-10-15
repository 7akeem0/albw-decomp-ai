#define EN_EXTRA void f();
#include "en200.h"
void En::f() {
    if (func_00588BE4(this) != ro_006938F0 || m93c) {
        m3dc.x = 0.0f;
        m3dc.y = 0.0f;
        m3dc.z = 0.0f;
    }
    func_004FABDC(this, 1, 4, 0);
    if (m8e1 == 1) {
        func_004F88A0(this, m910);
        m424->m2c |= 0x20000;
    } else {
        func_004F88A0(this, m3a4);
        m424->m2c &= ~0x20000;
    }
}
