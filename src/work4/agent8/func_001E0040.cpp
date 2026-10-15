#include "sndobj.h"

void SndObj::func_001E0040(u32 v) {
    if (m108 == 0) {
        if (v < 0x1000000) mF0 = v; else mF0 = 0;
        if (mF0 == 0 && mE8 == 0)
            func_001DFB30();
    }
}
