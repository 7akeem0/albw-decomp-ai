#include "range.h"
u32* func_003CBA0C(u32* p,bool enabled) {
    *p++=0;
    *p++=0x10105;
    if(enabled) {
        *p++=1;*p++=0xF0111;
        *p++=1;*p++=0xF0110;
    }
    return p;
}
