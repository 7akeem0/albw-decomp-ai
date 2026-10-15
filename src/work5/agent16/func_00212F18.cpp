#define EN_EXTRA void f();
#include "en213.h"
void En::f() {
    m3dc.set(0.0f, 0.0f, 0.0f);
    m59c.set(4);
    m59c.reset(0x80);
    func_004FC07C(this, 3, -1, 0);
    func_0021319C(0);
}
