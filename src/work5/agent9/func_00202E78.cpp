#define EN_EXTRA void f();
#include "en202.h"
void En202::f() {
    m3dc.x = 0.0f;
    m3dc.z = 0.0f;
    m90c.start(randU32(func_0058A7D4(this), 60) + 60);
}
