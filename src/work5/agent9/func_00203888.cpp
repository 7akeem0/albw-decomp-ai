#define EN_EXTRA void f();
#include "en202.h"
void En202::move(f32 r, f32 t) { approach(m8f0, t, r); }
void En202::f() {
    if (!m90c.step()) { if (!m8fe) mState.changeState(1); else mState.changeState(2); }
    m3e8 = 0;
    f32 vy = m3dc.y;
    move(0.04f, 0.0f);
    func_0014FAFC(this, m908, m8f0);
    m3dc.y = vy;
}
