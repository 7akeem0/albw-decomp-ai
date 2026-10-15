#include "sndobj.h"

void SndObj::func_001DFA10() {
    if (m10C)
        return;
    if (mHolder->mModel && func_0056A120(mHolder->mModel))
        return;
    if (m108) {
        if (mDelay.mCnt != 0xffffff) {
            if (--mDelay.mCnt <= 0) {
                s32 v = mDelay.mArg;
                if (m109)
                    m109 = 0;
                mDelay.reset();
                func_00110DDC(mHolder, v);
            }
        }
        for (int i = 0; i < 5; i++)
            mInterps[i]->calc();
        mFC++;
        return;
    }
    if (!m109)
        return;
    if (m10A)
        return;
    if (mF0 > 0) {
        mF0--;
        if (mF0 != 0 || mE8 != 0)
            return;
    } else {
        mE8--;
        if (mE8 > 0)
            return;
    }
    func_001DFB30();
}
