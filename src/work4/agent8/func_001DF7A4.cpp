#include "sndobj.h"

void SndObj::func_001DF7A4(f32 add) {
    m11C += add;
    if (mHolder->isValid())
        func_0010C7F8(mInterps[0], 0, m11C);
}
