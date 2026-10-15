#include "range.h"
struct S {char pad[0xe3];u8 flag;};
extern void func_0012C718(S*);
void f_00440F20(S* p){if(p->flag)func_0012C718(p);}
