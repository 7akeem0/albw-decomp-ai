#include "range.h"
struct O629 {u8 pad[0x10];u32 count,max;};
extern "C" u32 func_003D67B4(O629*,void*,u32);
extern "C" u32 func_003D62E0(O629*p,void*q){if(++p->count==p->max)return 6;return func_003D67B4(p,q,2);}

