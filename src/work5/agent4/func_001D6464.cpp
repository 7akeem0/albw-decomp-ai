#define OBJ1D6_EXTRA void func_001D6464();
#include "obj1d6.h"
void Obj1D6::func_001D6464() {
    if (m4d8 != 8) {
        if (!func_00392E48(&m3d0, 1, 0, 0))
            m4d4.changeState(6);
        else
            m4d4.changeState(2);
    }
}
