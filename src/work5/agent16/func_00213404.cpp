#define TIMER_CREF
#define EN_EXTRA void f();
#include "en213.h"
void En::f() {
    m59c.reset(4);
    m59c.reset(0x80);
    m974 = 0.0f;
    m3dc.set(0.0f, 0.0f, 0.0f);
    m95c.start(30);
    m59c.set(1);
    m59c.set(2);
    func_004FC07C(this, 0, -1, 0);
    func_004FAB60(this, 0, 0);
    m8e0.func_003C2680();
    m8e0.func_003C2464(30, 1.0f);
    Vec3 d;
    Vec3* out = &d;
    func_00115C70(out, *func_00520FC0(this), m3d0);
    d.y = 0.0f;
    func_00115DC8(&d);
    m978 = func_0068C690(d);
    func_0021319C(1);
    func_00150A84(this, "SE_GueldMan_APPEAR", 0);
    m988.set(m3d0);
}
