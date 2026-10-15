#include "range.h"
struct Obj {u8 pad[0xc8];u32 state;};extern void*data_007143B8;
extern void func_0029E358(void*);extern __attribute__((weak))void func_0065FF80(u32*,s32);
void f_0025E2C4(Obj*p){if(p->state==20){func_0029E358(data_007143B8);func_0065FF80(&p->state,6);}}
