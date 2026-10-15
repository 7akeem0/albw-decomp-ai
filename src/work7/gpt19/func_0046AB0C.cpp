#include "range.h"
struct Owner6AB0C {u8 data[0xC5];u8 active;};
extern void* data_0070B850;
extern "C" void sub_00232468(void*);
extern "C" void sub_00166C00(void*,u32);
extern "C" __weak void sub_0066DF38(void*,u32);
extern "C" void f_0046AB0C(Owner6AB0C*s){sub_00232468(s);s->active=1;sub_00166C00(data_0070B850,1);sub_0066DF38(s->data+0x98,0);}
