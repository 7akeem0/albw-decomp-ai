#define EN_EXTRA void f();
#include "en213.h"
void En::f() {
    if (!m510->m4) {
        if (m508 <= 0) mState.changeState(9);
        else if (m910 >= 3) mState.changeState(7);
        else mState.changeState(4);
    }
}
