#include "sndobj.h"

void SndObj::func_001DF6DC(f32 v, f32 speed) {
    m11C = v;
    if (mHolder->isValid())
        func_00489A8C(mInterps[0], v, speed);
}

void SndObj::func_001DF730() {
    if (m108 == 0)
        m10A = 1;
}
