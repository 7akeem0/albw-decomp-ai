#define EN_EXTRA void f();
#include "en206.h"
void En::f() {
    if (func_0058A8F0(this)) {
        u8 n = m910 + 1;
        m910 = n;
        if (n >= 7) mState.changeState(9);
        else func_004FB0A4(this, 0.0f);
    }
}
