#include "range.h"
struct S { char pad[0x134]; void* child; };
extern u32 func_0056E5D0(void*,S*,u32);
u32 f_56E5BC(S* p,u32 a) { void* child=p->child; return func_0056E5D0(child,p,a); }
