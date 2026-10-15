#define A1E4_EXTRA bool func_001E4AE4(s32 v);
#define A1D2_EXTRA bool func_001D2780(s32 v);
#include "a2_1d2.h"

bool Actor1D2::func_001D2780(s32 v) {
    if (m5E0 != 1) {
        if (func_001E4AE4(v)) {
            m4FC.changeState(5);
            return true;
        }
    }
    return false;
}
