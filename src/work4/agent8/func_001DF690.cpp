#include "sndobj.h"

void SndObj::func_001DF690(f32 v) {
    m128 = v;
    if (mHolder->isValid())
        mHolder->f40D5EC(v);
}
