#include "range.h"
struct S{char pad[0x14];u32 sub;};extern bool func_0056D40C(void*,u32*,u32);void*f(S*p){u32 v;if(!func_0056D40C(&p->sub,&v,8))return 0;return(char*)p+v;}
