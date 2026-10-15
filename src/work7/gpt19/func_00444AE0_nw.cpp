#include "range.h"
struct S{char pad[0x74];u32 state;char gap[0x444];u8 a,b;};extern void func_001B6C04(S*);extern  void func_0066CB14(void*,u32);
void f_00444AE0(S*p){func_001B6C04(p);p->a=0;p->b=0;func_0066CB14(&p->state,0);}
