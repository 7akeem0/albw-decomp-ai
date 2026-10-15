#include "range.h"
struct S {char pad[0x18];u32 a,b,c,d;};
void f_004108D0(S* p,u32 x,u32 y){p->a=x;p->b=y;p->c=-1;p->d=-1;}
