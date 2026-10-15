#include "range.h"
struct S {u8 pad[0x98];u32 state;};
extern void* data_007142C8;
extern "C" bool func_0058D7CC(void*);
extern "C" __attribute__((weak)) void func_0066C424(void*,s32);
extern "C" void f_0043D6A4(S* s){if(func_0058D7CC(data_007142C8))func_0066C424(&s->state,11);}
