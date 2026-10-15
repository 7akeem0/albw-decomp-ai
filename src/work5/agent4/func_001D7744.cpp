#define OBJ1D6_EXTRA void func_001D7744();
#include "obj1d6.h"
void Obj1D6::func_001D7744() {
    if (m548.step())
        return;
    if (m3d0.y <= m0c && !func_00392E48(&m3d0, 1, 0, 0)) {
        m4d4.changeState(6);
    } else if (f520ED8()) {
        if (f520FF8())
            m4d4.changeState(5);
        else
            m4d4.changeState(3);
    } else if (f521074()) {
        m42c = 2;
        m4d4.changeState(3);
    } else if (f521064() && m4d8 != 6) {
        if (m554)
            m4d4.changeState(3);
        else
            m4d4.changeState(0);
    }
}
