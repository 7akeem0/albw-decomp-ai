#define EN7_EXTRA void f();
#include "en207.h"
void En7::f() {
    func_001507D8(this, "SE_EN_FAINT", 0);
    mC6C.step();
    if (mC6C.isEnd()) mState.changeState(42);
}
