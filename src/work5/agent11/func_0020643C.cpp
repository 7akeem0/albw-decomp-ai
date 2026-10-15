#define EN_EXTRA void f();
#include "en206.h"
void En::f() {
    m59c.set(0x4000);
    Vec3 v = func_004FBF58(this);
    const Vec3* pv = &v;
    f32 z = 0.0f;
    const Vec3& a = *pv; m3dc.x = z; m3dc.y = z; m3dc.z = z;
    m3dc.setMul(a, 0.18f);
    Vec3& m = m93c;
    m.x = z; m.y = z; m.z = z;
    m.setMul(*pv, z);
    m920.start(40);
    m92c.start(4);
    m938 = m3e8;
    func_004FABDC(this, 7, -1, 0);
    func_004FAB60(this, 2, 0);
    func_004FB070(this, z);
    func_004FB4C4(this, 1.0f);
    func_004FACD4(this, 0);
    func_00150A84(this, "SE_EN_BREAK_STONE", 0);
}
