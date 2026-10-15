#include "range.h"
struct Owner43D9{u8 pad[0x74];u32 state;};
extern "C" void*data_007142C8;
extern "C" bool func_0058D808(void*);
extern "C" void func_0051ACC4(void*);
extern "C" __attribute__((weak)) void func_0066C424(void*,s32);
void func_0043D9B4(Owner43D9*p){if(func_0058D808(data_007142C8)){func_0051ACC4(data_007142C8);func_0066C424(&p->state,0);}}
