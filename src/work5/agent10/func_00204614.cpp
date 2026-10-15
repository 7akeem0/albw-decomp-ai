#define EN_EXTRA void f();
#include "en204.h"
void En::f() {
    m8cc = 0;
    m8d4.start(90);
    m3dc.setZero();
    func_004FABDC(this, 4, 1, 0);
}
