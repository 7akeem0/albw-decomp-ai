#include "range.h"
struct Bits{u32 low:2;u32 high:2;u32 rest:28;};struct S{u32 a,b;Bits bits;};extern void func_00404CF0(S*);
void f_00404CC8(S*p,u32 a,u32 b){p->bits.low=a;p->bits.high=b;func_00404CF0(p);}
