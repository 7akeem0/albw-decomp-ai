#include "range.h"
struct G{char pad[0x9c0];u32 state;};extern G* data_00711DE8;struct S{char pad[0x17c];u32 state;};extern __attribute__((weak)) void func_0066D544(void*,u32);
void f_00457350(S*p){if(data_00711DE8->state<=1)func_0066D544(&p->state,14);}
