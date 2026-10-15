#define A1D2_EXTRA void func_001D27C4();
#include "a2_1d2.h"
bool func_00520ED8(Actor1D2* a);
inline void lerpTo(f32& v, f32 t, f32 r) { v += (t - v) * r; }
void Actor1D2::func_001D27C4() {
    lerpTo(m5D0, 0.01f, 0.25f); if (m5D0 < 0.1f) {
        if (!func_00520ED8(this))
            b13();
        m2D7 = 1;
    }
}
