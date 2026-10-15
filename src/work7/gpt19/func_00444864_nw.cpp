#include "range.h"
struct S{char pad[0x74];u32 sub;char gap[0x440];u16 count;};extern  void func_0066CB14(void*,u32);
void f_00444864(S*p){++p->count;func_0066CB14(&p->sub,7);}
