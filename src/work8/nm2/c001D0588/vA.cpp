#define ACT_EXTRA void func_001D0588();
#include "a1_1d0.h"
void Act1D0::func_001D0588() {
    struct Sub500 { char pad[0xc2]; s16 h; };
    Sub500* s = (Sub500*)((char*)this + 0x500);
    m5b8 = m3e8;
    s->h = 0;
    m5c4 = 0.09f;
    func_001CFEF4(2, 1.0f);
    m5cc = 1.0f;
    m5c8 = func_00520FC0(this)->y;
}
