#include "range.h"
struct S{char pad[0x14];void*child;};
extern u32 func_0053F2D4(void*,u32,u32,u32,u32);
u32 f_5569D4(S*p,u32 a,u32 b,u32 c,u32 d){return func_0053F2D4(p->child,a,b,c,d);}
