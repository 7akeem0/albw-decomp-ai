#define EN_EXTRA void f();
#include "../../work5/agent16/en213.h"
void En::f() {
    if (!m510->m4) {
        if (m508 <= 0) mState.changeState(8);
        else { m59c.set(0x80); mState.changeState(10); }
    }
}
