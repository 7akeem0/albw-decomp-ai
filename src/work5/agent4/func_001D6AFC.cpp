#define OBJ1D6_EXTRA bool func_001D6AFC();
#include "obj1d6.h"
bool Obj1D6::func_001D6AFC() {
    if (m515 == 4 || m515 == 5) {
        if (m514 == 0) {
            if (m2c == 0)
                return true;
        } else if (m514 == 7) {
            return true;
        }
    }
    return false;
}
