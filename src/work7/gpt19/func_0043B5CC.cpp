#include "range.h"
struct S {char pad[0x88];u32 count;};extern void func_0012C718(S*);
void f_0043B5CC(S* p){if(--p->count==0)func_0012C718(p);}
