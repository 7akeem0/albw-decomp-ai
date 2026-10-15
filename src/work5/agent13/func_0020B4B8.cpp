#define EN_EXTRA void f();
#include "en20a.h"

void En::f() {
    f32 b = func_0058AA40(this);
    f32 r = b / func_0058AC38(this);
    if (r >= 0.4f) {
        m3dc.z = 0.0f;
        m3dc.x = 0.0f;
    } else {
        Vec3 v;
        func_004D80A4(&v, m3e8 + 0x80000000, 0.05f);
        v.y = 0.0f;
        m3dc.x = v.x;
        m3dc.z = v.z;
    }
    if (func_0058A8F0(this)) {
        if (md19) mState.changeState(0x24); else mState.changeState(0x10);
    }
}
