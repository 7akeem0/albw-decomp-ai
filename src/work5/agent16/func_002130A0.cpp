#define EN_EXTRA void f();
#include "en213.h"
void En::f() {
    En* self = this;
    self->m59c.set(4); self->m59c.set(0x80);
    if (self->mState.mNext != 8) {
        self->m95c.start(randU32(func_0058A7D4(self), 120) + 120);
    }
    func_004FC07C(self, 0, -1, 0);
}
