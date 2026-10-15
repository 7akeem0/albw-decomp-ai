#include "../range_types.h"
struct Child {char pad[0x88];f32 lo,hi;};
struct Obj {char pad[6];u8 flag;char gap[9];Child*child;};
void set(Child*p,f32 b,f32 a){p->lo=a;p->hi=b;}
extern "C" void f_0028D7B4(Obj*p){set(p->child,1.f,0.f);p->flag=0;}
