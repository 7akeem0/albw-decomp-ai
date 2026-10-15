#define EN_EXTRA void f();
#include "en204.h"
void En::f() {
    m829 = 1;
    if (func_0058A8F0(this)) {
        mState.changeState(4);
        m3dc.y = 0.0f;
        return;
    }
    if (!func_0058ACC8(this, 5.0f)) return;
    m59c.set(2);
    func_00150A84(this, "SE_EN_APPEAR_GROUND", 0);
}
