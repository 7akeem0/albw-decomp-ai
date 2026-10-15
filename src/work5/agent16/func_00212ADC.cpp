#define EN_EXTRA s32 f();
#define CLASS_A
#include "en213.h"
typedef bool (*VF34)(En*);
s32 En::f() {
    s32 r = func_0014DDEC(this);
    if (mState.mCur == 7) {
        if (!r) {
            if (!((VF34)vt[13])(this)) m2d7 = 1;
        }
        if (m9c0) {
            if (!func_0051E6D0(data_0070B960, &m3d0, 1.2f)) m2d7 = 1;
        }
    }
    m9c0 = 0;
    return r;
}
