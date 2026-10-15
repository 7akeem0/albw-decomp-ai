#include "range.h"
struct S {char pad[0x74];s32 count;};
extern void func_0012C718(S*);
void f_0046CDD4(S* p){if(p->count>=60)func_0012C718(p);}
