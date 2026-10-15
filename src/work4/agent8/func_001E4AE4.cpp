#define A1E4_EXTRA bool func_001E4AE4(s32 v);
#include "actor1e4.h"

bool Actor1E4::func_001E4AE4(s32 v) {
    if (m4F1)
        return false;
    m4DC = v;
    m4F1 = 1;
    return true;
}
