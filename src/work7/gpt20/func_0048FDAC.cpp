#include "ladder_types.h"
struct Sub48FD {char pad0[0x50];};
struct O48FD {char pad0[0xbc];Sub48FD a,b;};
extern void func_00490C38(Sub48FD*);
void f_0048FDAC(O48FD* p){func_00490C38(&p->a);func_00490C38(&p->b);}
