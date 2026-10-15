#define EN_EXTRA void f();
#include "en210.h"
void En210::f() {
    if (mState.mCounter > 90) {
        effFade(&m98c);
        mState.changeState(5);
    }
}
