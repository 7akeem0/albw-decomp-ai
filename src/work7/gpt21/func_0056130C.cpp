#include "range.h"
struct S{u32 pad;void*resource;};extern void func_0010AC24(u32,u32);inline void diagnose(u32 r,u32 pc){if(r>>31)func_0010AC24(r,pc);}void*f(S*p){if(!p->resource)diagnose(0xe0a046da,__current_pc());return p->resource;}
