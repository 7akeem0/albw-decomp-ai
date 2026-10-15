#include "range.h"
struct G{char pad[0x9c0];u32 state;};extern G*data_00711DE8;extern void func_0066777C(void*,s32) __attribute__((weak));void f(void*p){if(data_00711DE8->state>1)return;func_0066777C((char*)p+0xc0,7);}
