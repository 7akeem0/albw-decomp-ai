#define EN7_EXTRA void f();
#include "en207.h"
f32 func_004F898C();
void func_004F8964(f32* vy, bool clamp, f32 g);
s32 func_0068C690(const Vec3& v);
f32 func_0058AC38(En7* e);
f32 func_0058AA40(En7* e);
void func_0051D39C(s32* ang, s32 target, s32 step);
inline Vec3 operator-(const Vec3& a, const Vec3& b) { Vec3 r; r.setSub(a, b); return r; }
void En7::f() {
    func_004F8964(&m3dc.y, false, func_004F898C());
    s32 ang = func_0068C690(mC88 - m3d0);
    func_0051D39C(&m3e8, ang, (s32)(func_0058AC38(this) - func_0058AA40(this) - 1.0f));
    if ((s32)mState.mCounter > 28) mState.changeState(29);
}
