#define EN_EXTRA s32 f(s32 kind);
#include "en202.h"
s32 En202::f(s32 kind) {
    s8 st = mState.mCur;
    if (st == 3 || st == 4) return 0;
    if (kind == 6) return 14;
    s32 r = func_002AB1CC(14, -1, 1);
    m5a0.set(0x80);
    return r;
}
