#define SND_EXTRA void func_001E0634(f32 v, s32 frames);
#include "sndobj_a1.h"
void func_0048BD2C(ModelHolder* h, s32 frames, f32 v);
void SndObj::func_001E0634(f32 v, s32 frames) {
    if (m108 == 0 && m100 < v)
        return;
    if (m110)
        v = m100 * v;
    else
        m100 = v;
    m104 = v;
    if (mHolder->isValid()) {
        if (frames < 0)
            frames = 0;
        func_0048BD2C(mHolder, frames, m104);
    }
}
