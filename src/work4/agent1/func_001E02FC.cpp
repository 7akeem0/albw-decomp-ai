#define SND_EXTRA void func_001E02FC(s32 frames, f32 v);
#include "sndobj_a1.h"
void SndObj::func_001E02FC(s32 frames, f32 v) {
    m11C = v;
    if (mHolder->isValid()) {
        if (frames < 0)
            frames = 0;
        func_0010C7F8(mInterps.at(0), frames, v);
    }
}
