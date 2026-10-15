#include "sndobj.h"

void SndObj::func_001DFFC4(f32 v, f32 speed) {
    m120 = v;
    if (mHolder->isValid())
        func_00489A8C(mInterps[1], v, speed);
}
