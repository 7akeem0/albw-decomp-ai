#define SND_EXTRA void func_001E05E8(f32 v);
#include "sndobj_a1.h"
void func_0048BD10(ModelHolder* h, f32 v);
void SndObj::func_001E05E8(f32 v) {
    m118 = v;
    if (mHolder->isValid())
        func_0048BD10(mHolder, v);
}
