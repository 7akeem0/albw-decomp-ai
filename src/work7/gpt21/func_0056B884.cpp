#include "range.h"
struct S{char pad[0x14];u32 sub;};extern bool func_0056D40C(void*,u32*,u32);u8 f(S*p){u32 value;if(!func_0056D40C(&p->sub,&value,1))return 0;return value;}
