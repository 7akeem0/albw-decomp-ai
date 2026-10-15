#include "../range_types.h"
struct Obj{char pad[0x4d2];u16 a,b,c;};
 void set(Obj*p,u16 a,u16 c,u16 b){p->b=b;p->c=c;p->a=a;}
extern "C" void f_00319498(Obj*p){set(p,30,100,365);}
