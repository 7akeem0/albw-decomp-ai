#include "../../range.h"
struct S{u8 value,limit;};
inline s32 clamp(s32 n,s32 lo,s32 hi){if(n<lo)n=lo;else if(hi<n)n=hi;return n;}void func_00149BD4(S*p,s32 delta){if(delta)p->value=clamp(p->value+delta,0,p->limit);}
