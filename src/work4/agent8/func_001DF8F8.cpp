#include "sndobj.h"

void SndObj::func_001DF8F8(const sead::SafeString& name) {
    if (m109 || mHolder->isValid()) {
        mE4 = func_00587FCC(data_00711F50, name);
        m10F = mE4 != mE0;
    }
}

void SndObj::func_001DF950(s32 v) {
    mHolder->f40D864(v);
}
