#include "range.h"
struct M {u32 first;char pad[0xc];u8 flag;};struct S {char pad[0x74];M sub;};
extern u8 func_001788DC(u32);
void f_00441278(S* p){M* m=&p->sub;m->flag=func_001788DC(m->first);}
