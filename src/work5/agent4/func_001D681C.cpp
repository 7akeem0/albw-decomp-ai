#define OBJ1D6_EXTRA void func_001D681C();
#include "obj1d6.h"
static const char cSE_BOUND[] = "SE_Rupee_BOUND";
void Obj1D6::func_001D681C() {
    if (m516 < 4) {
        SEHandle h;
        playSE(sead::SafeString(cSE_BOUND), &h);
        if (h.isValid())
            h.setVolume(1.0f - m516 * 0.3f, 0);
    }
}
