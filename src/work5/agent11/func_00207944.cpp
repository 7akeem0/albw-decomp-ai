#define EN7_EXTRA void f();
#include "en207.h"
inline void copyXYZ(Vec3* d, const Vec3& o){ d->x = o.x; d->y = o.y; d->z = o.z; }
void func_0036BE78(Obj27C* o);
void En7::f() {
Vec3 p = m3d0; p.y = mB84.pos.y; bool r = mB84.update(p, 0.32f, 0.1f, 0.28f);
    mD24.setXYZ(mB84.pos);
    if ((s32)mState.mCounter > 70 && (func_0058A8F0(this) & r)) mState.changeState(12);
    func_0036BE78((Obj27C*)mA7C);
}
