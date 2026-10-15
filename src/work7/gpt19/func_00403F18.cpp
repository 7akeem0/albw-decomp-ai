#include "range.h"
struct A{virtual void unused0();virtual void unused1();virtual void unused2();virtual void unused3();virtual u32 call(void*,u32);};struct B{char pad[0xb0];u32 x;char gap[0xc];u32 y;};
u32 f_00403F18(A*p,void*a,B*b,u32 n){u32 r=p->call(a,n);b->y=0;b->x=0;return r;}
