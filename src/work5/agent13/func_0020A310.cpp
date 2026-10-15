#define EN_EXTRA void f();
#include "en20a.h"
void En::f() {
    func_004F8964(&m3dc.y, false, func_004F898C());
    Vec3 d = mc88 - m3d0;
    s32 ang = func_0068C690(d);
    func_0051D39C(&m3e8, ang, (s32)(func_0058AC38(this) - func_0058AA40(this) - 1.0f));
    if (mState.mCounter > 0x1c) mState.changeState(0x20);
}
