#include "sndobj.h"

void SndObj::func_001DF80C(f32 v, s32 frames) {
    m12C = v;
    if (mHolder->isValid()) {
        if (frames < 0)
            frames = 0;
        func_0010C7F8(mInterps.at(3), frames, v);
    }
}
