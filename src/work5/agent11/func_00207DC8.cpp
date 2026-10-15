#define EN7_EXTRA void f();
#include "en207.h"
void En7::f() {
    if ((s32)mState.mCounter > 10 && func_0036C45C((Obj27C*)mA7C)) {
        m59c.set(0x2000);
        func_00588C14(this, 1, 1);
    }
}
