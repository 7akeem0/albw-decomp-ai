#define EN_EXTRA void f();
#define CLASS_A
#include "en213.h"
void En::f() {
    if (mState.mNext != 6) {
        if (mState.mCounter <= 0xf0) return;
    } else {
        if (m970.step()) return;
    }
    mState.changeState(2);
}
