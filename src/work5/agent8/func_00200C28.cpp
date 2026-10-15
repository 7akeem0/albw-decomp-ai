#define EN_EXTRA void f();
#include "en200.h"
void En::f() {
    if (func_00588BE4(this) != ro_006938F0 || m93c) {
        m3dc.x = 0.0f;
        m3dc.y = 0.0f;
        m3dc.z = 0.0f;
    }
    if (m93c) m8c8.start(90);
    else m8c8.start(180);
    func_004FABDC(this, 2, 4, 0);
    func_004F88A0(this, m910);
    m424->m2c |= 0x20000;
    m8bc.start((randU32(func_0058A7D4(this), 2) + 2) * 60);
}
