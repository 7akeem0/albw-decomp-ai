#include "range.h"
struct O{char pad[0xc60];u32 count;char pc64[0xc93-0xc64];u8 flag;};extern void func_00328984(O*);extern void func_004FC07C(O*,s32,s32,s32);void phase(O*p,u32 one){p->flag=one;func_00328984(p);p->count=one;func_004FC07C(p,5,16,0);}void f(O*p){phase(p,1);}
