#define EN_EXTRA void f();
#include "en20a.h"
void En::f() {
    if (md18) mState.changeState(0x22);
    else if (func_0058A8F0(this)) mState.changeState(0x22); }
