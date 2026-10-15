#define EN_EXTRA void f();
#include "en213.h"
void En::f() {
    m59c.reset(4);
    m59c.reset(0x80);
    m3dc.set(0.0f, 0.0f, 0.0f);
    m95c.start(30);
    func_004FABDC(this, 0, -1, 0);
    m8e0.func_003C2464(30, 2.5f);
    func_00150A84(this, "SE_GueldMan_DISAPPEAR", 0);
}
