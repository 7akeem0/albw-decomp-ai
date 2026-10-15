#define EN_EXTRA void f();
#include "en200.h"
void En::f() {
    if (func_00588BE4(this) != ro_006938F0 || m93c) {
        m3dc.x = 0.0f;
        m3dc.y = 0.0f;
        m3dc.z = 0.0f;
    }
    func_004FABDC(this, 3, 4, 0);
    func_004F88A0(this, m3a4);
    m424->m2c &= ~0x20000;
    if (func_00588BE4(this) == ro_006938F0) func_00150A84(this, "SE_Gigabari_ELEC_END", 0);
}
