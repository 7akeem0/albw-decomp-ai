#define OBJ1D6_EXTRA void func_001D7950();
#include "obj1d6.h"
void Obj1D6::func_001D7950() {
    m3dc.set(f559B54());
    if (m548.step2())
        return;
    if (!f521064() && m514 != 0) {
        m4d4.changeState(2);
        return;
    }
    if (f520EE4())
        m4d4.changeState(6);
}
