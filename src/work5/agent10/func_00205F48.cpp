#define EN_EXTRA void f();
#include "en204.h"
void En::f() {
    f32 z = 0.0f;
    m3dc.z = z;
    m3dc.x = z;
    func_004FABDC(this, 1, -1, 0);
    func_004FB4E0(this, 1.0f);
    m911 = 0;
    if (m905 == 0) {
        m8bcU = 0;
        m8fc = randU32(func_0058A7D4(this), 30) + 120;
        m900 = 0;
    }
    m3dc.z = z;
    m3dc.x = z;
    switch (m904) {
    case 0: m3dc.z = 0.125f; break;
    case 1: m3dc.x = 0.125f; break;
    case 2: m3dc.z = -0.125f; break;
    case 3: m3dc.x = -0.125f; break;
    }
}
