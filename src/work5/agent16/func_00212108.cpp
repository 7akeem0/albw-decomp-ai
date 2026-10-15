#define EN_EXTRA void f();
#include "en213.h"
void En::f() {
    if (mState.mCounter > 0x78 && func_005211BC(this, 10.0f, 0.0f)) mState.changeState(4);
}
