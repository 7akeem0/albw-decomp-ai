#include "ladder_types.h"
struct Arg4EDE{char pad[0x1c];u32 value;};
extern void func_0042DD38(Transform4EDA*,u32,u32);
void f_004EDEDC(O4EDA* p,u32 n,Arg4EDE* a){if(p->transform)func_0042DD38(p->transform,a->value,n);}
