#include "range.h"
struct Obj{u8 pad[0x78];u32 value;};extern void func_002E1CA4(Obj*,s32);
void f_002E2188(Obj*p,u32 n){u32 k=n;Obj* q=p;func_002E1CA4(q,1);q->value=k;}
