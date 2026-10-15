#define EN_EXTRA void f();
#include "en20a.h"
void En::f() {
    mca0 = 0;
    mc98.v = 0.0f;
    func_004FAD90(this);
    func_004FABDC(this, 0x1a, 0xa, 0);
}
