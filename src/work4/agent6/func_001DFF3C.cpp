#include "a6_1df.h"
// 0x1DFF3C: the a<=0 arm is an inline helper taking b as a parameter -> original 'mov r1,r2; mov r2,#0'
// (written inline in the body, ARMCC puts the zero in r1 and moves b at the call).
inline void Obj1DF::stop(s32 b) {
    if (mFlags.m9)
        mFlags.m9 = 0;
    mf8 = 0;
    mf4 = 0xffffff;
    m24->func_00110DDC(b);
}

void Obj1DF::func_001DFF3C(s32 a, s32 b) {
    if (a <= 0) {
        stop(b);
        return;
    }
    if (a >= 0xffffff)
        a = 0xfffffe;
    mf4 = a;
    mf8 = b;
}

// 0x1DFF84 (follows 0x1DFF3C's literal pool; fn.py counts it as part of 0x1DFF3C's range)
void Obj1DF::func_001DFF84(u32 v) {
    if (!mFlags.m8)
        me8 = v >= 0x1000000 ? 0 : v + mec;
}
