#include "range.h"
struct S{u32 pad0,pad4,sub;};extern bool func_0056D40C(u32*,u32*,u32);
u32 f_56B658(S*p){u32 out;return func_0056D40C(&p->sub,&out,1)?out:0;}
