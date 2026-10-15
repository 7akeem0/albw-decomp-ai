#define OBJ1D6_EXTRA void func_001D6B40();
#include "obj1d6.h"
void Obj1D6::func_001D6B40() {
    m3dc.y -= 0.03f;
    m3dc.y = m3dc.y <= -0.3f ? -0.3f : m3dc.y;
    if (m3d0.y <= m0c) {
        if (m3dc.y < 0.0f)
            m42c = 0;
        if (!func_00392E48(&m3d0, 1, 0, 0)) {
            m4d4.changeState(6);
            return;
        }
    }
    if (f521064() && m3dc.y < 0.0f) {
        m3dc.y = -m3dc.y;
        Vec3& v = m3dc;
        v.setMul(v, 0.5f);
        u8 n = m516 + 1;
        m516 = n;
        if (n > 2)
            m4d4.changeState(3);
    } else if (f521074()) {
        m42c = 2;
        m4d4.changeState(3);
    }
}
