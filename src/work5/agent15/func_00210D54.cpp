#define EN_EXTRA void f();
#include "en210.h"
void En210::f() {
    if (func_0058A8F0(this)) {
        if (!func_005211BC(this, 10.0f, 0.0f)) mState.changeState(2);
        else if (m95c == 1) mState.changeState(6);
        else mState.changeState(1);
    }
}
