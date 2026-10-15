#define EN_EXTRA void f();
#include "en203b.h"
void En203B::f() {
    func_002046C8(this, func_00520FC0(this), data_0070A6C8.m4, m8bc);
    approach(m8bc, 0.015f, 0.25f);
    if (func_00521100(this, 0.0f) && func_00521298(this) <= 25.0f && func_00521100(this, 0.0f)
        && distSqXZ(m3d0, m8) <= 25.0f)
        return;
    mState.changeState(7);
}
