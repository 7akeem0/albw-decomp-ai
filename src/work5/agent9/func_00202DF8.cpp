#define EN_EXTRA void f();
#include "en202.h"
void En202::f() {
    m900 = randU32(func_0058A7D4(this), 4) << 30;
    m924 = 0;
    m90c.start(randU32(func_0058A7D4(this), 60) + 60);
}
