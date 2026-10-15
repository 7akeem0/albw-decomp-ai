#include "range.h"
struct Obj1B2024{char pad[0x829];u8 flag;char pad82a[0x8bc-0x82a];u32 state;};
struct Random1B2024;
extern bool func_0058A8F0(Obj1B2024*);
extern Random1B2024*func_0058A7D4(Obj1B2024*);
extern u32 func_00111A64(Random1B2024*);
extern void func_0065B158(u32*,s32);
extern "C" void target(Obj1B2024*p){p->flag=1;if(func_0058A8F0(p)){u32 n=func_00111A64(func_0058A7D4(p));if(n&1)func_0065B158(&p->state,0);else func_0065B158(&p->state,2);}}
