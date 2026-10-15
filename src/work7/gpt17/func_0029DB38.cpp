#include "range.h"
struct Obj {u8 pad[0xbc];u32 state;};
extern void*data_007143B8;
extern u32 func_0054161C(void*);
extern __attribute__((weak)) void func_00661D5C(u32*,s32);
void f_0029DB38(Obj*p){if(func_0054161C(data_007143B8))func_00661D5C(&p->state,3);}
