#define EN_EXTRA void f();
#include "en200.h"
void En::f() {
    m3dc.x = 0.0f;
    m3dc.y = 0.0f;
    m3dc.z = 0.0f;
    func_004FABDC(this, 1, 4, 0);
    func_004F88A0(this, m910);
    m424->m2c |= 0x20000;
}
