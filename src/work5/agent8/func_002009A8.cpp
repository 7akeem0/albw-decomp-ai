#define EN_EXTRA void f();
#include "en200.h"
void En::f() {
    if (func_00588BE4(this) != ro_006938F0) func_0014FAFC(this, m8d8, 0.01f);
    if (func_0058AB74(this) == 3) func_004FC07C(this, 0, 0x14, 0);
    else func_004FC07C(this, 0, 8, 0);
    func_004F88A0(this, m3a4);
    m424->m2c &= ~0x20000;
}
