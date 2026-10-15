#include "range.h"
struct S {u8 pad[0x158];u32 state;};
extern void* data_007142C8;
extern "C" bool func_0058DC54(void*);
extern "C" __attribute__((weak)) void func_0066CC58(void*,s32);
extern "C" void f_00448850(S* s){if(func_0058DC54(data_007142C8))func_0066CC58(&s->state,12);}
