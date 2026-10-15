#define EN_EXTRA void f();
#include "en20a.h"
// 'vldr s0,0.0' reusing s0 after the 0.04 store (not a parallel s1) = mc98 is a 4-byte STRUCT assigned from a ctor temp
void En::f() {
    mc10 = 0.04f;
    m9d8 = 1;
    mc98 = FVal(0.0f);
    func_004FABDC(this, 0xb, 0xa, 0);
    s8 n = mState.mNext;
    if (n == 0x21 || n == 0x22 || n == 0x23) return;
    mc04.start(360);
    mc14[0] = 0; mc14[1] = 0; mc14[2] = 0; mc14[3] = 0; mc14[4] = 0; mc14[5] = 0;
}
