#include "range.h"
struct Obj3DCB {char pad[0x14];u32 a[2];u32 b[2];};
void func_003DCB24(Obj3DCB* p,u32 i,u32* a,u32* b){*a=p->a[i];*b=p->b[i];}
