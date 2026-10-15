#define EN_EXTRA void f();
#include "en20a.h"
void En::f() {
    func_004FABDC(this, 0xe, 1, 0);
    Vec3 d = *func_00520FC0(this) - m3d0;
    Vec3 v;
    v.x = d.x; v.z = d.z; v.y = 0.0f;
    v.normalize();
    { Vec3* pv = &v; pv->setMul(*pv, 2.5f); } { Vec3* pv = &v; pv->setDiv(*pv, 28.0f); }
    m3dc.x = v.x;
    m3dc.z = v.z;
    m3dc.y = func_004F944C();
    Vec3* p = &mc88; const Vec3* q = func_00520FC0(this);
    p->x = q->x; p->y = q->y; p->z = q->z;
}
