#include "range.h"
struct S{char pad[0x74];s32 count;char gap[0xa4];u32 flag;};extern  void func_0066EDA8(void*,u32);
void f_00480DB8(S*p){if(p->count>=30 || !p->flag)func_0066EDA8(&p->count,1);}
