#define OBJ1D6_EXTRA void func_001D6D04(); 
#include "obj1d6.h"
void Obj1D6::func_001D6D04() {
    switch (m52e) {
    case 0:
        m3dc.y -= 0.02f; if (m3dc.y <= 0.0f) {} else break; m3dc.y = 0.0f; m4f8.start(120); m52e = 1;
        break;
    case 1:
        if (!m4f8.step())
            m2d7 = 1;
        break;
    }
}
