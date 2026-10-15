#include "a6_1df.h"
// if/else store: the else-arm 'm2c = 0' reuses r0 (== 0 after the isValid() test): streq r0
void Obj1DF::func_001DFE74(Link2C* p) {
    if (m2c)
        m2c->func_0025B70C();
    if (mFlags.m9 || m24->isValid())
        m2c = p;
    else
        m2c = 0;
}
