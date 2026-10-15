#define A1E4_EXTRA void func_001E4018(s32 i); Obj4* getObj(s32 i);
#include "actor1e4.h"

void Actor1E4::func_001E4018(s32 i) {
    if (m480 == 0) {
        m480 = getObj(i);
        m480->update();
    }
}
