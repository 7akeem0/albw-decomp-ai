#define EN_EXTRA void f();
#include "en213.h"
void En::f() {
    m59c.set(4);
    m59c.set(0x80);
    func_004FAD90(this);
    func_004FC07C(this, 4, -1, 0);
    func_0021319C(0);
    copyVec(&m988, m3d0);
    m95c.start(60);
}
