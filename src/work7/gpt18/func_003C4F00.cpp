#include "range.h"
struct Child3C4F {char pad[0x918];u8 flag;};
struct Obj3C4F {char pad[0x48];Child3C4F* child;char pad4c[0x16];u8 a,b;};
bool func_003C4F00(Obj3C4F* p){p->child->flag=0;p->a=0;p->b=0;return true;}
