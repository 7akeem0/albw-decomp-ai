#define OBJ1D6_EXTRA void func_001D76D8();
#include "obj1d6.h"
void Obj1D6::func_001D76D8() {
    m3dc.y -= 0.03f;
    if (m3dc.y <= 0.0f)
        m4d4.changeState(2);
    if (m424) {
        m3dc.y = 0.0f;
        m4d4.changeState(2);
    }
}
