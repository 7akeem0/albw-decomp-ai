#include "ladder_types.h"
struct Object4EF {char pad[0x18];u32 m18;};
extern void func_004EF418(Object4EF*,u32*,int,int);
void func_004EF408(Object4EF* p,int n) {func_004EF418(p,&p->m18,n,0);}
