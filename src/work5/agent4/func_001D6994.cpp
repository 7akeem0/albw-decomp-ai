#define OBJ1D6_EXTRA void func_001D6994(); void startAnim(const char* n) { if (m344) m344->start(n); }
#include "obj1d6.h"
void Obj1D6::func_001D6994() {
    m3dc.y -= 0.03f;
    m3dc.y = m3dc.y <= -0.3f ? -0.3f : m3dc.y;
    Vec3& p = m3d0; p.setAdd(p, m3dc);
    if (m3d0.y <= m0c && !func_00392E48(&m3d0, 1, 0, 0)) {
        m4d4.changeState(6);
    } else {
        if (f521064()) {
            startAnim("WaterCrown");
            m4d4.changeState(0x11);
        }
    }
}
