#define EN_EXTRA void f();
#include "en210.h"
void En210::f() {
    func_001507D8(this, "SE_Deviland_struggle", 0);
    if (mState.mCounter > 180) mState.changeState(0xb);
}
