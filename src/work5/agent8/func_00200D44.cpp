#define EN_EXTRA void f();
#include "en200.h"
void En::f() {
    if (!m93c) return;
    if (m8c8.step()) return;
    mState.changeState(3);
}
