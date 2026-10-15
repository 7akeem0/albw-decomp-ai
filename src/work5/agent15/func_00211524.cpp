#define EN_EXTRA void f();
#include "en210.h"
void En210::f() {
    m59c.resetB(4);
    m59c.resetB(0x80);
    func_004FABDC(this, 2, -1, 0);
    func_003C2464(o8e0(), (s32)func_0058AC38(this), 1.5f);
}
