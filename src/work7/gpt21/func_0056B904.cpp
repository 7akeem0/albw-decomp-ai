#include "range.h"
struct S{char pad[20];u32 v;};extern bool func_0056D40C(void*,u32*,u32);
u32 f_56B904(S* p){u32 value;if(!func_0056D40C(&p->v,&value,31))return -1;return value;}
