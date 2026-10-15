#include "range.h"
u32 addClamp(u32 a,u32 b,u32 lim){u32 s=a+b;return s>lim?lim:s;}
void f172380(Obj171* p,u32 n){p->timer.cur=addClamp(n,p->timer.cur,999);}
