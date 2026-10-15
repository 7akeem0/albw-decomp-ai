#include "range.h"
struct Child3765 {char pad[0xc];u32 a,b;u8 flag;};
struct Obj3765 {char pad[0x14];Child3765* child;};
void func_0037654C(Obj3765* p,u32 n,u8 v){p->child->a=n;p->child->b=n;p->child->flag=v;}
