struct Ang { int v; };
#define A1D2_ANGLE_T Ang
#define A1D2_EXTRA void func_001D2614();
#include "a2_1d2.h"
void Actor1D2::func_001D2614() {
    if (m5C2 == 0) {
        Vec3 d;
        Vec3* out = &d; const Vec3* from = &m3D0;
        out->setSub(*from, *func_00520FC0(this));
        m5BC.v = func_0068C690(d);
        m5DA = 1;
    }
    if (m5DA) {
        if (!func_00521018(this)) m5B8 = m5BC;
        else m5B8.v = m5BC.v + 0x80000000;
    }
    m5DA = 0;
    func_0051D2F4(&m3E8, m5B8.v, 0.7f, 0x16c16c1, 0x71c71c7);
    func_001507D8(this, sead::SafeString("SE_Kokko_V_RUN"), 0);
    func_001D0150(2, 0.7f, 1.0f);
}
