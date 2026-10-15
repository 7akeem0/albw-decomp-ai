#define EN_EXTRA void f();
#include "en200.h"
void En::f() {
    if (!m8c8.step()) m93d = 0;
    if (m93c) return;
    mState.changeState(0);
}
