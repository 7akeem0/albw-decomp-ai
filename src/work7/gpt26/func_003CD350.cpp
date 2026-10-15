#include "range.h"
u32* func_003CD350(u32* p,bool enabled) {
    if(enabled) {
        *p++=0;*p++=0x200080;*p++=0;*p++=0;
    }
    *p++=0x13000;*p++=0xF0080;
    return p;
}
