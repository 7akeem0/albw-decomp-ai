#define EN_EXTRA void f(Arg4F* p);
#include "en206.h"
struct Arg4F { u32 m0; Vec3 m4; };
void En::f(Arg4F* p) {
    f32 y = p->m4.y;
    if ((y > 0.0f ? y : -y) < 0.1f) {
        Vec3& q = m8f0;
        q.setAdd(q, p->m4);
    }
    func_004F4A68(this, p);
}
