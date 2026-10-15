#include "range.h"
struct M {u16 first;};
struct S {char pad[0x134];M sub;};
extern void func_002313DC(M*);
void f_0045E424(S* p){p->sub.first=0;func_002313DC(&p->sub);}
