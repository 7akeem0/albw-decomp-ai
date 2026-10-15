#include "sndobj.h"

bool SndObj::func_001DF8C4() {
    if (m108 == 0 && m10A != 0) {
        m10A = 0;
        return true;
    }
    return false;
}
