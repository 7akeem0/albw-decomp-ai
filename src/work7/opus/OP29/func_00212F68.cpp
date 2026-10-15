#define EN_EXTRA void f();
#include "en213.h"
void En::f() {
    m59c.reset(4);
    m59c.reset(0x80);
    m59c.reset(1);
    m59c.reset(2);
    m974 = 0.0f;
    func_004FC07C(this, 0, -1, 0);
    m8e0.func_003C26B8();
    m8e0.func_003C2630();
    m95c.start(randU32(func_0058A7D4(this), 60) + 60);
    if (m9c1) {
        copyVec(&m368, m988);
        Vec3* dst = &m3d0;
        copyVec(dst, m988);
    }
}
