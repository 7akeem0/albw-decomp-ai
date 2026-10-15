#include "range.h"
u32 high(u32 n){return n&0x7e0;}
u32 low(u32 n){return n&0x1f;}
bool f1A991C(void*,const Arg1A99* a){u32 n=a->flags;return high(n)==0x180 && low(n)==7;}
