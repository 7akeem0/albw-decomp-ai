#define EN_EXTRA void f();
#include "en20a.h"
void En::f() {
    offF59c(0x10);
    m3dc.x = 0.0f;
    m3dc.y = 0.0f;
    m3dc.z = 0.0f;
    func_004FABDC(this, 0, 0, 0);
    md4c.start(0x32);
}
