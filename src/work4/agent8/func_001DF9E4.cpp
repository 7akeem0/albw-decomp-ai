#include "sndobj.h"

void SndObj::func_001DF9E4(f32 v) {
    f32 r = m100 * v;
    if (m108 == 0) {
        m100 = r;
    } else {
        m104 = r;
        mHolder->func_0048BD2C(0);
    }
}
