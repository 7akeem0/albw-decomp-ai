#define SND_EXTRA void func_001E01C4(); Interp* getInterp(s32 i) const { if ((u32)i < (u32)mInterps.mPtrNum) return mInterps.mPtrs[i]; return 0; }
#include "sndobj_a1.h"
struct Link2C;
void func_0025B70C(Link2C* l);
void SndObj::func_001E01C4() {
    mHolder = &mOwnHolder;
    mE0 = -1;
    mE4 = -1;
    mDelay.mCnt = 0xffffff;
    m28 = 0;
    m34 = 0;
    m108 = 0;
    m109 = 0;
    m10A = 0;
    m10B = 0;
    m10C = 0;
    m10E = 0;
    m10F = 0;
    m110 = 0;
    m111 = 0;
    mE8 = 0;
    mEC = 0;
    mDelay.mArg = 0;
    mF0 = 0;
    m100 = 1.0f;
    m104 = 1.0f;
    for (int i = 0; i < 5; i++)
        func_0010C7F8(getInterp(i), 0, 0.0f);
    if (m2c) {
        func_0025B70C(m2c);
        m2c = 0;
    }
    m114 = 0;
    m118 = 1.0f;
    m11C = 0.0f;
    m120 = 0.0f;
    m124 = 0.0f;
    m128 = 0.0f;
    m12C = 0.0f;
    m130 = 0.0f;
    m134 = 1.0f;
}
