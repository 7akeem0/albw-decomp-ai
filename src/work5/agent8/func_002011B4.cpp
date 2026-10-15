#define EN_EXTRA void f();
#include "en200.h"
void En::f() {
    func_004FABDC(this, 0, 0x14, 0);
    func_004F88A0(this, m3a4);
    m424->m2c &= ~0x20000;
    m8c8.start(0);
}
