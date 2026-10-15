#define ACT_EXTRA bool func_001D14B8(); void func_001D134C(); void stopAnim(); void playAnim();
#include "a1_1d0.h"
struct Ctl4F8;
void func_00169A80(Ctl4F8* c);
void func_00168E9C(Ctl4F8* c, Mdl4F4* m, s32 z);
// non-inline same-TU helpers (KB #143): m4f8 is reloaded for the second call
void Act1D0::stopAnim() { func_00169A80(m4f8); }
void Act1D0::playAnim() { func_00168E9C(m4f8, m4f4, 0); }
bool Act1D0::func_001D14B8() {
    if (m5df == 2)
        return true;
    if (m5e0 != 1)
        return true;
    mState.execute();
    stopAnim();
    playAnim();
    func_001D134C();
    if (mState.mCur == 8 && m59c.isEnd())
        m2d7 = 1;
    return true;
}
