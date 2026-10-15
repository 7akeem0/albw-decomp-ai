#include "range.h"
struct Triple {u32 a,b,c;};
struct Obj3C2 {char pad[0x1fc]; Triple value;};
void func_003C2154(Obj3C2* p,u32 a,u32 b,u32 c){p->value.a=a;p->value.b=b;p->value.c=c;}
