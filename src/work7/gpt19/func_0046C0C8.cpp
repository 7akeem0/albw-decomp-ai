#include "range.h"
struct S {u8 pad[0x98];u32 state;};
extern void* data_0070FB60;
extern "C" void func_00361494(void*);
extern "C" __attribute__((weak)) void func_0066DF38(void*,s32);
extern "C" void f_0046C0C8(S* s){if(s->state>10){func_00361494(data_0070FB60);func_0066DF38(&s->state,1);}}
