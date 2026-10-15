#define EN_EXTRA void f();
#include "en213.h"
void En::f() {
    Vec3 d;
    Vec3* out = &d;
    func_00115C70(out, *func_00520FC0(this), m3d0);
    d.y = 0.0f;
    func_00115DC8(&d);
    func_0051D2F4(&m3e8, func_0068C690(d) + 0x80000000, 0.1f, 0, data_0070A8F0);
    m978 = m3e8;
    func_004F8964(&m3dc.y, true, func_004F898C());
    if (func_00521060(this)) mState.changeState(7);
}
