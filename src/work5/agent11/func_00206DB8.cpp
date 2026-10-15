#define M4FC_STRUCT
#define EN_EXTRA void f();
#include "en206.h"
struct AngleT { s32 v; AngleT(s32 x) : v(x) {} };
u32 func_0058E2B8(const AngleT& a);
void En::f() {
StateMgr& sm = mState;
    if (m4fc.v != 0) {
        s32 t = m908;
        if (func_0058E2B8(AngleT(m3e8 - t)) > data_0070A748.m4) return;
 m3e8 = m908; m4fc = Ang4(0);
    }
    sm.changeState(2);
}
