#include "range.h"
struct S {u8 data[0xB4];u8 flag;};
extern "C" void func_00231448(void*);
extern "C" void func_002317C0(void*,f32);
extern "C" void f_00476290(S* s){s->flag=0;func_00231448(s->data+0x20);func_002317C0(s->data+0x38,1);func_00231448(s->data+0x68);}
