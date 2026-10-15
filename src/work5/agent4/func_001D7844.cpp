#define OBJ1D6_EXTRA void func_001D7844(); void func_001D681C();
#include "obj1d6.h"
void Obj1D6::func_001D7844() {
    m3dc.y -= 0.03f;
    m3dc.y = m3dc.y <= -0.3f ? -0.3f : m3dc.y;
    Vec3& p = m3d0;
    p.setAdd(p, m3dc);
    if (m3d0.y <= m0c && !func_00392E48(&m3d0, 1, 0, 0)) {
        m4d4.changeState(6);
    } else if (f521064()) {
        if (m3dc.y < 0.0f) {
            m3dc.y = -m3dc.y;
            Vec3& v = m3dc; v.setMul(v, 0.5f);
            func_001D681C();
            u8 n = m516 + 1; m516 = n; if (n > 2)
                m4d4.changeState(3);
        }
    }
}
