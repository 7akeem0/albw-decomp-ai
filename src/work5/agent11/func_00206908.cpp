#define EN_EXTRA s32 f(s32 a); void setF(const u32& b){ m5a0 |= b; }
#include "en206.h"
s32 En::f(s32 a) {
s32 r;
    if (a == 3) { func_004FC78C(this, func_0058A468(this)); r = 0; }
    else if (a == 7 || a == 20 || a == 18) r = 15;
    else { r = a; setF(0x80); }
    return r;
}
