#define ACT_EXTRA void func_001D02E0(); void fall(f32 g, f32 lim);
#include "a1_1d0.h"
bool func_00521064(Act1D0* self);
void func_0065C598(s32* mgr, s32 st);
inline bool isNeg(f32 v, f32 z) { return v < z; }
f32 clampMin(f32 a, f32 b) { return a < b ? b : a; }
void Act1D0::func_001D02E0() {
    func_001D1598();
    if (isNeg(m3dc.y, 0.0f) && func_00521064(this)) {
        m570->setM61(1);
        m391 = 1;
        m3ac = 400.0f;
        func_0065C598(&m4fc, 2);
    } else if (m4fc > 10) {
        m570->setM61(1);
    }
    m3dc.y = clampMin(m3dc.y - 0.0125f, -0.8f);
    func_001D0150(6, 1.0f, 1.0f);
}
