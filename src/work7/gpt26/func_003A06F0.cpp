#include "range.h"
inline s32 clamp3A(s32 value,s32 low,s32 high) {
    if(value<low)value=low;
    else if(value>high)value=high;
    return value;
}
void func_003A06F0(Obj3A06* p,s32 value) {
    p->value=clamp3A(value-2,-1,46);
}
