#define EN_EXTRA void f(); void stopXZ();
#include "en202.h"
void En202::stopXZ() { m3dc.x = 0.0f; m3dc.z = 0.0f; }
void En202::f() {
    stopXZ(); m925 = 0; m90c.start(5); m918.start(330);
    func_004F8964(&m3dc.y, true, func_004F898C());
    func_004FB0D8(this, &m3dc.y);
}
