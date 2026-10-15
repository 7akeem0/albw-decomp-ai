#include "sndobj.h"

void SndObj::func_001DF5C4(f32 v, s32 frames) {
    m124 = v;
    if (mHolder->isValid()) {
        if (frames < 0)
            frames = 0;
        func_0010C7F8(mInterps.at(2), frames, v);
    }
}
