#define EN_EXTRA void f(s32 n);
#include "en20a.h"
// n<0 arm first (relational: natural layout); Timer::start spelled 'if (n == 0) rate = 0; else rate = 1/n;'
void En::f(s32 n) {
    if (n < 0) m994.start(randU32(func_0058A7D4(this), 10) + 10);
    else m994.start(n);
    mState.changeState(8);
}
