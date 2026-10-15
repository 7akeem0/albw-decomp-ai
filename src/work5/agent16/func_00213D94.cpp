#define EN_EXTRA void f();
#include "en213.h"
void En::f() {
    if (m95c.step2()) return;
    if (func_005211BC(this, 8.0f, m938) && !m950) mState.changeState(2);
}
