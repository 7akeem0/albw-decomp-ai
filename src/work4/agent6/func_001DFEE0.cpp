#include "a6_1df.h"
// reference to the flag sub-struct taken first: original keeps this+0x100 in r5 (ldrb [r5,#0xd])
// while the first test still uses [r0,#0x109]
void Obj1DF::func_001DFEE0(s32 v) {
    Flags100& f = mFlags;
    if (!f.m9 && !m24->isValid())
        return;
    if (f.md && v > 0) {
        if (m24->mPtr)
            m24->mPtr->func_0040D9C8(v);
    }
}
