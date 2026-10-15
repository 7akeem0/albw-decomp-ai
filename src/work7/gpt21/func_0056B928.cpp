#include "range.h"
struct S{char pad[0x14];u32 sub;};extern bool func_0056D40C(void*,u32*,u32);u32 f(S*p){u32 value;if(!func_0056D40C(&p->sub,&value,17))return 0;return value&1;}
