#include "range.h"
struct M {u32 first,second;};
struct S {char pad[0x1dc];M sub;};
extern void func_00112364(M*,u32*,const u32*);
void f_00415644(S* p,const M* a){const M* q=a;M* m=&p->sub;u32* dest=&m->second;func_00112364(m,dest,&q->second);}
