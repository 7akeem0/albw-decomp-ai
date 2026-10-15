#include "sndobj.h"

void SndObj::func_001DF86C(f32 v) {
    m134 = v;
    if (mHolder->isValid()) {
        ModelRef ref(mHolder);
        if (ref.mPtr)
            func_00410260(ref.mPtr, v);
    }
}
