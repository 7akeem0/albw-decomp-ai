#include "range.h"
struct Sub { char pad[0x18]; u32 data; };
struct S { char pad[0x2d0]; Sub* sub; };
extern void* func_0054D8B0(u32*,S*,u32);
void* f_54D89C(S* p,u32 i) { Sub* sub=p->sub; return func_0054D8B0(&sub->data,p,i); }
