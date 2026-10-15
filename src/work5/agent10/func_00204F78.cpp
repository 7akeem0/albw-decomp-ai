#define EN_EXTRA void f();
#include "en204.h"
void func_002046C8(En* e, const Vec3* p, s32 step, f32 speed);   // En::moveTo
void En::f() {
    approach(m8bc, 0.01f, 0.25f);
    func_002046C8(this, &m8, data_0070A6C8.m4, m8bc);
    if (m8d4.stepC2()) return;
    if (!func_00521100(this, 0.0f)) return;
    if (distSqXZ(m3d0, m8) < 6.25f) mState.changeState(4);
}
